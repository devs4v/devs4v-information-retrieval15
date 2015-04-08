#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

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

        class MultiDocValues$MultiSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
        public:
          enum {
            mid_getOrd_39c7bd23,
            mid_getValueCount_54c6a179,
            mid_lookupOrd_b57e9c3f,
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

          explicit MultiDocValues$MultiSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedDocValues(const MultiDocValues$MultiSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::MultiDocValues$OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedDocValues > _get_values() const;

          jint getOrd(jint) const;
          jint getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
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
        extern PyTypeObject PY_TYPE(MultiDocValues$MultiSortedDocValues);

        class t_MultiDocValues$MultiSortedDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
