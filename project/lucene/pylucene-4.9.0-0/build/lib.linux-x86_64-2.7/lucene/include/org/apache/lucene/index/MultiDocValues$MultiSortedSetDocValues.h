#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class MultiDocValues$OrdinalMap;
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

        class MultiDocValues$MultiSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
        public:
          enum {
            mid_getValueCount_54c6a17a,
            mid_lookupOrd_9c59b7f4,
            mid_nextOrd_54c6a17a,
            mid_setDocument_39c7bd3c,
            max_mid
          };

          enum {
            fid_docStarts,
            fid_mapping,
            fid_values,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues$MultiSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedSetDocValues(const MultiDocValues$MultiSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::MultiDocValues$OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedSetDocValues > _get_values() const;

          jlong getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong nextOrd() const;
          void setDocument(jint) const;
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
        extern PyTypeObject PY_TYPE(MultiDocValues$MultiSortedSetDocValues);

        class t_MultiDocValues$MultiSortedSetDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedSetDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
