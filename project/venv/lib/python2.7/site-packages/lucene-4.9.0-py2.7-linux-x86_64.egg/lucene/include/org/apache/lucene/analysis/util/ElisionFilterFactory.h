#ifndef org_apache_lucene_analysis_util_ElisionFilterFactory_H
#define org_apache_lucene_analysis_util_ElisionFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class ResourceLoader;
          class ElisionFilter;
          class ResourceLoaderAware;
          class AbstractAnalysisFactory;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class ElisionFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_94c1814f,
              mid_getMultiTermComponent_0a3f1d72,
              mid_inform_d6a4bc97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ElisionFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ElisionFilterFactory(const ElisionFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            ElisionFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::util::ElisionFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(ElisionFilterFactory);

          class t_ElisionFilterFactory {
          public:
            PyObject_HEAD
            ElisionFilterFactory object;
            static PyObject *wrap_Object(const ElisionFilterFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
