#ifndef org_apache_lucene_search_spell_PlainTextDictionary_H
#define org_apache_lucene_search_spell_PlainTextDictionary_H

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
  }
  namespace io {
    class InputStream;
    class IOException;
    class File;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class PlainTextDictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_be2e4f90,
              mid_init$_c3dacf57,
              mid_getEntryIterator_23dc46b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlainTextDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PlainTextDictionary(const PlainTextDictionary& obj) : ::java::lang::Object(obj) {}

            PlainTextDictionary(const ::java::io::Reader &);
            PlainTextDictionary(const ::java::io::InputStream &);
            PlainTextDictionary(const ::java::io::File &);

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
        namespace spell {
          extern PyTypeObject PY_TYPE(PlainTextDictionary);

          class t_PlainTextDictionary {
          public:
            PyObject_HEAD
            PlainTextDictionary object;
            static PyObject *wrap_Object(const PlainTextDictionary&);
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
