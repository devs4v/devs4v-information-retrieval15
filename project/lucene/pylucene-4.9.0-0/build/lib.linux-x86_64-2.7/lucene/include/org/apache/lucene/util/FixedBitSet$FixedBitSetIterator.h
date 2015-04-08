#ifndef org_apache_lucene_util_FixedBitSet$FixedBitSetIterator_H
#define org_apache_lucene_util_FixedBitSet$FixedBitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FixedBitSet;
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

        class FixedBitSet$FixedBitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
        public:
          enum {
            mid_init$_ef674644,
            mid_init$_6ae021e7,
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

          explicit FixedBitSet$FixedBitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FixedBitSet$FixedBitSetIterator(const FixedBitSet$FixedBitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          FixedBitSet$FixedBitSetIterator(const ::org::apache::lucene::util::FixedBitSet &);
          FixedBitSet$FixedBitSetIterator(const JArray< jlong > &, jint, jint);

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
        extern PyTypeObject PY_TYPE(FixedBitSet$FixedBitSetIterator);

        class t_FixedBitSet$FixedBitSetIterator {
        public:
          PyObject_HEAD
          FixedBitSet$FixedBitSetIterator object;
          static PyObject *wrap_Object(const FixedBitSet$FixedBitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
