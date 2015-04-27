#ifndef org_apache_lucene_search_spell_LuceneDictionary_H
#define org_apache_lucene_search_spell_LuceneDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class LuceneDictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_215fea03,
              mid_getEntryIterator_23dc46b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LuceneDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LuceneDictionary(const LuceneDictionary& obj) : ::java::lang::Object(obj) {}

            LuceneDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

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
          extern PyTypeObject PY_TYPE(LuceneDictionary);

          class t_LuceneDictionary {
          public:
            PyObject_HEAD
            LuceneDictionary object;
            static PyObject *wrap_Object(const LuceneDictionary&);
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
