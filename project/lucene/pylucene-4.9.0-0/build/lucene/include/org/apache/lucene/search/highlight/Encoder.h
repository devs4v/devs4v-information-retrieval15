#ifndef org_apache_lucene_search_highlight_Encoder_H
#define org_apache_lucene_search_highlight_Encoder_H

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
      namespace search {
        namespace highlight {

          class Encoder : public ::java::lang::Object {
          public:
            enum {
              mid_encodeText_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Encoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Encoder(const Encoder& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String encodeText(const ::java::lang::String &) const;
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
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(Encoder);

          class t_Encoder {
          public:
            PyObject_HEAD
            Encoder object;
            static PyObject *wrap_Object(const Encoder&);
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
