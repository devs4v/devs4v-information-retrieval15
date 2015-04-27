#ifndef org_apache_lucene_search_suggest_DocumentDictionary_H
#define org_apache_lucene_search_suggest_DocumentDictionary_H

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
        namespace suggest {

          class DocumentDictionary : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d188be8d,
              mid_init$_d5472fa7,
              mid_init$_087c6971,
              mid_getEntryIterator_23dc46b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocumentDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DocumentDictionary(const DocumentDictionary& obj) : ::java::lang::Object(obj) {}

            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);
            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

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
          extern PyTypeObject PY_TYPE(DocumentDictionary);

          class t_DocumentDictionary {
          public:
            PyObject_HEAD
            DocumentDictionary object;
            static PyObject *wrap_Object(const DocumentDictionary&);
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
