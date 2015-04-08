#ifndef org_apache_lucene_document_StraightBytesDocValuesField_H
#define org_apache_lucene_document_StraightBytesDocValuesField_H

#include "org/apache/lucene/document/BinaryDocValuesField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
        class FieldType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StraightBytesDocValuesField : public ::org::apache::lucene::document::BinaryDocValuesField {
        public:
          enum {
            mid_init$_43cce44e,
            mid_init$_6c8dc377,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StraightBytesDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StraightBytesDocValuesField(const StraightBytesDocValuesField& obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_FIXED_LEN;
          static ::org::apache::lucene::document::FieldType *TYPE_VAR_LEN;

          StraightBytesDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          StraightBytesDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyTypeObject PY_TYPE(StraightBytesDocValuesField);

        class t_StraightBytesDocValuesField {
        public:
          PyObject_HEAD
          StraightBytesDocValuesField object;
          static PyObject *wrap_Object(const StraightBytesDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
