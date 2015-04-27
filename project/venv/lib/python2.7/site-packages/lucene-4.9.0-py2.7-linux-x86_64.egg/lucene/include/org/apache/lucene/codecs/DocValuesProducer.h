#ifndef org_apache_lucene_codecs_DocValuesProducer_H
#define org_apache_lucene_codecs_DocValuesProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
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
    class Class;
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

        class DocValuesProducer : public ::java::lang::Object {
        public:
          enum {
            mid_checkIntegrity_54c6a166,
            mid_getBinary_97c169be,
            mid_getDocsWithField_e4c7eda7,
            mid_getNumeric_9eab6241,
            mid_getSorted_984b8536,
            mid_getSortedNumeric_ccea608a,
            mid_getSortedSet_05eaac8f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesProducer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocValuesProducer(const DocValuesProducer& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::util::Bits getDocsWithField(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::FieldInfo &) const;
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
        extern PyTypeObject PY_TYPE(DocValuesProducer);

        class t_DocValuesProducer {
        public:
          PyObject_HEAD
          DocValuesProducer object;
          static PyObject *wrap_Object(const DocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
