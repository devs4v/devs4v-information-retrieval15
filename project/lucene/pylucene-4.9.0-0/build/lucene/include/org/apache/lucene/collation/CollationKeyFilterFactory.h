#ifndef org_apache_lucene_collation_CollationKeyFilterFactory_H
#define org_apache_lucene_collation_CollationKeyFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class ResourceLoader;
          class ResourceLoaderAware;
          class AbstractAnalysisFactory;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationKeyFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
        public:
          enum {
            mid_init$_4c9e2b1c,
            mid_create_a65cd6ab,
            mid_getMultiTermComponent_0a3f1d72,
            mid_inform_d6a4bc97,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationKeyFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CollationKeyFilterFactory(const CollationKeyFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

          CollationKeyFilterFactory(const ::java::util::Map &);

          ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
          void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyTypeObject PY_TYPE(CollationKeyFilterFactory);

        class t_CollationKeyFilterFactory {
        public:
          PyObject_HEAD
          CollationKeyFilterFactory object;
          static PyObject *wrap_Object(const CollationKeyFilterFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
