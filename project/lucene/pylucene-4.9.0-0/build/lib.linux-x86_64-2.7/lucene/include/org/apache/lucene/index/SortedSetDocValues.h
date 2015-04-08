#ifndef org_apache_lucene_index_SortedSetDocValues_H
#define org_apache_lucene_index_SortedSetDocValues_H

#include "java/lang/Object.h"

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

        class SortedSetDocValues : public ::java::lang::Object {
        public:
          enum {
            mid_getValueCount_54c6a17a,
            mid_lookupOrd_9c59b7f4,
            mid_lookupTerm_7bc03dd8,
            mid_nextOrd_54c6a17a,
            mid_setDocument_39c7bd3c,
            mid_termsEnum_ea7afd9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortedSetDocValues(const SortedSetDocValues& obj) : ::java::lang::Object(obj) {}

          static jlong NO_MORE_ORDS;

          jlong getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jlong nextOrd() const;
          void setDocument(jint) const;
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
        extern PyTypeObject PY_TYPE(SortedSetDocValues);

        class t_SortedSetDocValues {
        public:
          PyObject_HEAD
          SortedSetDocValues object;
          static PyObject *wrap_Object(const SortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
