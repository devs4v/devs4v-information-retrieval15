#ifndef org_apache_lucene_document_SortedBytesDocValuesField_H
#define org_apache_lucene_document_SortedBytesDocValuesField_H

#include "org/apache/lucene/document/SortedDocValuesField.h"

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

        class SortedBytesDocValuesField : public ::org::apache::lucene::document::SortedDocValuesField {
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

          explicit SortedBytesDocValuesField(jobject obj) : ::org::apache::lucene::document::SortedDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortedBytesDocValuesField(const SortedBytesDocValuesField& obj) : ::org::apache::lucene::document::SortedDocValuesField(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_FIXED_LEN;
          static ::org::apache::lucene::document::FieldType *TYPE_VAR_LEN;

          SortedBytesDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          SortedBytesDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jboolean);
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
        extern PyTypeObject PY_TYPE(SortedBytesDocValuesField);

        class t_SortedBytesDocValuesField {
        public:
          PyObject_HEAD
          SortedBytesDocValuesField object;
          static PyObject *wrap_Object(const SortedBytesDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
