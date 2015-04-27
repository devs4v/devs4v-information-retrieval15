#ifndef org_apache_lucene_analysis_util_CharArrayMap$EntryIterator_H
#define org_apache_lucene_analysis_util_CharArrayMap$EntryIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Iterator;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayMap$EntryIterator : public ::java::lang::Object {
          public:
            enum {
              mid_currentValue_846352c3,
              mid_hasNext_54c6a16a,
              mid_next_2971780b,
              mid_nextKey_dab10e7f,
              mid_nextKeyString_14c7b5c5,
              mid_remove_54c6a166,
              mid_setValue_a932a95f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayMap$EntryIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharArrayMap$EntryIterator(const CharArrayMap$EntryIterator& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object currentValue() const;
            jboolean hasNext() const;
            ::java::util::Map$Entry next() const;
            JArray< jchar > nextKey() const;
            ::java::lang::String nextKeyString() const;
            void remove() const;
            ::java::lang::Object setValue(const ::java::lang::Object &) const;
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
          extern PyTypeObject PY_TYPE(CharArrayMap$EntryIterator);

          class t_CharArrayMap$EntryIterator {
          public:
            PyObject_HEAD
            CharArrayMap$EntryIterator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharArrayMap$EntryIterator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharArrayMap$EntryIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharArrayMap$EntryIterator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
