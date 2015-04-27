#ifndef org_apache_lucene_index_SortedDocValues_H
#define org_apache_lucene_index_SortedDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
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
      namespace index {

        class SortedDocValues : public ::org::apache::lucene::index::BinaryDocValues {
        public:
          enum {
            mid_get_b57e9c3f,
            mid_getOrd_39c7bd23,
            mid_getValueCount_54c6a179,
            mid_lookupOrd_b57e9c3f,
            mid_lookupTerm_7bc03ddb,
            mid_termsEnum_ea7afd9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortedDocValues(const SortedDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          ::org::apache::lucene::util::BytesRef get(jint) const;
          jint getOrd(jint) const;
          jint getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum termsEnum() const;
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
        extern PyTypeObject PY_TYPE(SortedDocValues);

        class t_SortedDocValues {
        public:
          PyObject_HEAD
          SortedDocValues object;
          static PyObject *wrap_Object(const SortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
