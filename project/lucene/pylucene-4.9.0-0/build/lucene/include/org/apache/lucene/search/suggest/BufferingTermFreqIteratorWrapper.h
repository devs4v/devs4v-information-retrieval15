#ifndef org_apache_lucene_search_suggest_BufferingTermFreqIteratorWrapper_H
#define org_apache_lucene_search_suggest_BufferingTermFreqIteratorWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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
  namespace util {
    class Comparator;
  }
  namespace lang {
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
        namespace suggest {

          class BufferingTermFreqIteratorWrapper : public ::java::lang::Object {
          public:
            enum {
              mid_init$_b57afdd1,
              mid_getComparator_5a7ff2fc,
              mid_next_4ae19461,
              mid_weight_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BufferingTermFreqIteratorWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BufferingTermFreqIteratorWrapper(const BufferingTermFreqIteratorWrapper& obj) : ::java::lang::Object(obj) {}

            BufferingTermFreqIteratorWrapper(const ::org::apache::lucene::search::spell::TermFreqIterator &);

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
        namespace suggest {
          extern PyTypeObject PY_TYPE(BufferingTermFreqIteratorWrapper);

          class t_BufferingTermFreqIteratorWrapper {
          public:
            PyObject_HEAD
            BufferingTermFreqIteratorWrapper object;
            static PyObject *wrap_Object(const BufferingTermFreqIteratorWrapper&);
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
