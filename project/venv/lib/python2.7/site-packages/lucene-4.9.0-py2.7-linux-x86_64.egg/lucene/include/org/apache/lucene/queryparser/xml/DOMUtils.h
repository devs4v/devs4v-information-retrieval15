#ifndef org_apache_lucene_queryparser_xml_DOMUtils_H
#define org_apache_lucene_queryparser_xml_DOMUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class DOMUtils : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DOMUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DOMUtils(const DOMUtils& obj) : ::java::lang::Object(obj) {}

            DOMUtils();
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
      namespace queryparser {
        namespace xml {
          extern PyTypeObject PY_TYPE(DOMUtils);

          class t_DOMUtils {
          public:
            PyObject_HEAD
            DOMUtils object;
            static PyObject *wrap_Object(const DOMUtils&);
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
