#ifndef org_apache_lucene_queries_function_FunctionValues$ValueFiller_H
#define org_apache_lucene_queries_function_FunctionValues$ValueFiller_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
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
      namespace queries {
        namespace function {

          class FunctionValues$ValueFiller : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_fillValue_39c7bd3c,
              mid_getValue_15ab3811,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionValues$ValueFiller(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FunctionValues$ValueFiller(const FunctionValues$ValueFiller& obj) : ::java::lang::Object(obj) {}

            FunctionValues$ValueFiller();

            void fillValue(jint) const;
            ::org::apache::lucene::util::mutable$::MutableValue getValue() const;
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
      namespace queries {
        namespace function {
          extern PyTypeObject PY_TYPE(FunctionValues$ValueFiller);

          class t_FunctionValues$ValueFiller {
          public:
            PyObject_HEAD
            FunctionValues$ValueFiller object;
            static PyObject *wrap_Object(const FunctionValues$ValueFiller&);
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
