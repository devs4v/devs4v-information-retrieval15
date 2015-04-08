#ifndef org_apache_lucene_index_RandomAccessOrds_H
#define org_apache_lucene_index_RandomAccessOrds_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class RandomAccessOrds : public ::org::apache::lucene::index::SortedSetDocValues {
        public:
          enum {
            mid_cardinality_54c6a179,
            mid_ordAt_39c7bd20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomAccessOrds(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RandomAccessOrds(const RandomAccessOrds& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          jint cardinality() const;
          jlong ordAt(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(RandomAccessOrds);

        class t_RandomAccessOrds {
        public:
          PyObject_HEAD
          RandomAccessOrds object;
          static PyObject *wrap_Object(const RandomAccessOrds&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
