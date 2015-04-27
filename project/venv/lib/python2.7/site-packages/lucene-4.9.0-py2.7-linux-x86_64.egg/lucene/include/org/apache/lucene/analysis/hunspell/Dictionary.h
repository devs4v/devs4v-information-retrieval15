#ifndef org_apache_lucene_analysis_hunspell_Dictionary_H
#define org_apache_lucene_analysis_hunspell_Dictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Dictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_adde7c2e,
              mid_init$_1134ad3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

            Dictionary(const ::java::io::InputStream &, const ::java::io::InputStream &);
            Dictionary(const ::java::io::InputStream &, const ::java::util::List &, jboolean);
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
        namespace hunspell {
          extern PyTypeObject PY_TYPE(Dictionary);

          class t_Dictionary {
          public:
            PyObject_HEAD
            Dictionary object;
            static PyObject *wrap_Object(const Dictionary&);
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
