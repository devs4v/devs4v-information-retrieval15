#ifndef org_apache_lucene_search_suggest_FileDictionary_H
#define org_apache_lucene_search_suggest_FileDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class InputIterator;
        }
        namespace spell {
          class Dictionary;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class FileDictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_be2e4f90,
              mid_init$_32277d42,
              mid_init$_97a84c62,
              mid_getEntryIterator_23dc46b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FileDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FileDictionary(const FileDictionary& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DEFAULT_FIELD_DELIMITER;

            FileDictionary(const ::java::io::Reader &);
            FileDictionary(const ::java::io::InputStream &);
            FileDictionary(const ::java::io::InputStream &, const ::java::lang::String &);
            FileDictionary(const ::java::io::Reader &, const ::java::lang::String &);

            ::org::apache::lucene::search::suggest::InputIterator getEntryIterator() const;
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
        namespace suggest {
          extern PyTypeObject PY_TYPE(FileDictionary);

          class t_FileDictionary {
          public:
            PyObject_HEAD
            FileDictionary object;
            static PyObject *wrap_Object(const FileDictionary&);
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
