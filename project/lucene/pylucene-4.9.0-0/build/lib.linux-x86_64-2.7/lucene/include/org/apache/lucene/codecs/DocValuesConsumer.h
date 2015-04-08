#ifndef org_apache_lucene_codecs_DocValuesConsumer_H
#define org_apache_lucene_codecs_DocValuesConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BytesRef;
      }
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class MergeState;
        class BinaryDocValues;
        class NumericDocValues;
        class FieldInfo;
        class SortedNumericDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Iterable;
    class Class;
  }
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class DocValuesConsumer : public ::java::lang::Object {
        public:
          enum {
            mid_addBinaryField_1dd3fb83,
            mid_addNumericField_1dd3fb83,
            mid_addSortedField_4e727c10,
            mid_addSortedNumericField_4e727c10,
            mid_addSortedSetField_eef27e8b,
            mid_isSingleValued_d1cac209,
            mid_mergeBinaryField_1705fbe6,
            mid_mergeNumericField_1705fbe6,
            mid_mergeSortedField_eba53503,
            mid_mergeSortedNumericField_eba53503,
            mid_mergeSortedSetField_eba53503,
            mid_singletonView_0e65223a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocValuesConsumer(const DocValuesConsumer& obj) : ::java::lang::Object(obj) {}

          void addBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Iterable &) const;
          void addNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Iterable &) const;
          void addSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Iterable &, const ::java::lang::Iterable &) const;
          void addSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Iterable &, const ::java::lang::Iterable &) const;
          void addSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Iterable &, const ::java::lang::Iterable &, const ::java::lang::Iterable &) const;
          static jboolean isSingleValued(const ::java::lang::Iterable &);
          void mergeBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &, const ::java::util::List &, const ::java::util::List &) const;
          void mergeNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &, const ::java::util::List &, const ::java::util::List &) const;
          void mergeSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &, const ::java::util::List &) const;
          void mergeSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &, const ::java::util::List &) const;
          void mergeSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &, const ::java::util::List &) const;
          static ::java::lang::Iterable singletonView(const ::java::lang::Iterable &, const ::java::lang::Iterable &, const ::java::lang::Number &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(DocValuesConsumer);

        class t_DocValuesConsumer {
        public:
          PyObject_HEAD
          DocValuesConsumer object;
          static PyObject *wrap_Object(const DocValuesConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
