#ifndef org_apache_lucene_analysis_util_MultiTermAwareComponent_H
#define org_apache_lucene_analysis_util_MultiTermAwareComponent_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class AbstractAnalysisFactory;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class MultiTermAwareComponent : public ::java::lang::Object {
          public:
            enum {
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiTermAwareComponent(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MultiTermAwareComponent(const MultiTermAwareComponent& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
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
          extern PyTypeObject PY_TYPE(MultiTermAwareComponent);

          class t_MultiTermAwareComponent {
          public:
            PyObject_HEAD
            MultiTermAwareComponent object;
            static PyObject *wrap_Object(const MultiTermAwareComponent&);
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
