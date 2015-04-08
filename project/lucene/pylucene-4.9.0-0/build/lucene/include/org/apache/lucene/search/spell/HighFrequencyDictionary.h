#ifndef org_apache_lucene_search_spell_HighFrequencyDictionary_H
#define org_apache_lucene_search_spell_HighFrequencyDictionary_H

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
    class String;
    class Class;
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

          class HighFrequencyDictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_7d517188,
              mid_getEntryIterator_23dc46b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HighFrequencyDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HighFrequencyDictionary(const HighFrequencyDictionary& obj) : ::java::lang::Object(obj) {}

            HighFrequencyDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, jfloat);

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
          extern PyTypeObject PY_TYPE(HighFrequencyDictionary);

          class t_HighFrequencyDictionary {
          public:
            PyObject_HEAD
            HighFrequencyDictionary object;
            static PyObject *wrap_Object(const HighFrequencyDictionary&);
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
