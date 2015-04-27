#ifndef org_apache_lucene_analysis_core_TypeTokenFilterFactory_H
#define org_apache_lucene_analysis_core_TypeTokenFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
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
    class Set;
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
        namespace core {

          class TypeTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_a65cd6ab,
              mid_getStopTypes_03e99967,
              mid_inform_d6a4bc97,
              mid_isEnablePositionIncrements_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TypeTokenFilterFactory(const TypeTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            TypeTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Set getStopTypes() const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
            jboolean isEnablePositionIncrements() const;
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
        namespace core {
          extern PyTypeObject PY_TYPE(TypeTokenFilterFactory);

          class t_TypeTokenFilterFactory {
          public:
            PyObject_HEAD
            TypeTokenFilterFactory object;
            static PyObject *wrap_Object(const TypeTokenFilterFactory&);
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
