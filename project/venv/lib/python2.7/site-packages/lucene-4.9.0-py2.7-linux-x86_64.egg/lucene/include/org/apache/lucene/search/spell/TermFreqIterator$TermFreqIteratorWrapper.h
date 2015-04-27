#ifndef org_apache_lucene_search_spell_TermFreqIterator$TermFreqIteratorWrapper_H
#define org_apache_lucene_search_spell_TermFreqIterator$TermFreqIteratorWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
        class BytesRef;
      }
      namespace search {
        namespace spell {
          class TermFreqIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
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

          class TermFreqIterator$TermFreqIteratorWrapper : public ::java::lang::Object {
          public:
            enum {
              mid_init$_506719fa,
              mid_getComparator_5a7ff2fc,
              mid_next_4ae19461,
              mid_weight_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFreqIterator$TermFreqIteratorWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TermFreqIterator$TermFreqIteratorWrapper(const TermFreqIterator$TermFreqIteratorWrapper& obj) : ::java::lang::Object(obj) {}

            TermFreqIterator$TermFreqIteratorWrapper(const ::org::apache::lucene::util::BytesRefIterator &);

            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::util::BytesRef next() const;
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
          extern PyTypeObject PY_TYPE(TermFreqIterator$TermFreqIteratorWrapper);

          class t_TermFreqIterator$TermFreqIteratorWrapper {
          public:
            PyObject_HEAD
            TermFreqIterator$TermFreqIteratorWrapper object;
            static PyObject *wrap_Object(const TermFreqIterator$TermFreqIteratorWrapper&);
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
