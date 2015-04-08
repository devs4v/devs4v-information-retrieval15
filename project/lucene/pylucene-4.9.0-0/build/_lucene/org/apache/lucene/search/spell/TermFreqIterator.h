#ifndef org_apache_lucene_search_spell_TermFreqIterator_H
#define org_apache_lucene_search_spell_TermFreqIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class TermFreqIterator : public ::org::apache::lucene::util::BytesRefIterator {
          public:
            enum {
              mid_weight_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFreqIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TermFreqIterator(const TermFreqIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

            jlong weight() const;
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
          extern PyTypeObject PY_TYPE(TermFreqIterator);

          class t_TermFreqIterator {
          public:
            PyObject_HEAD
            TermFreqIterator object;
            static PyObject *wrap_Object(const TermFreqIterator&);
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
