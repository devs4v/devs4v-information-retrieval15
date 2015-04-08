#ifndef org_apache_lucene_util_OpenBitSetIterator_H
#define org_apache_lucene_util_OpenBitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OpenBitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OpenBitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
        public:
          enum {
            mid_init$_c2540e4f,
            mid_init$_ce93dbcb,
            mid_advance_39c7bd23,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_nextDoc_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OpenBitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OpenBitSetIterator(const OpenBitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          OpenBitSetIterator(const ::org::apache::lucene::util::OpenBitSet &);
          OpenBitSetIterator(const JArray< jlong > &, jint);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(OpenBitSetIterator);

        class t_OpenBitSetIterator {
        public:
          PyObject_HEAD
          OpenBitSetIterator object;
          static PyObject *wrap_Object(const OpenBitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
