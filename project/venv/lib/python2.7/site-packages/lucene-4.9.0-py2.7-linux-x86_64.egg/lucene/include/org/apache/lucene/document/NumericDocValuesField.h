#ifndef org_apache_lucene_document_NumericDocValuesField_H
#define org_apache_lucene_document_NumericDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
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

        class NumericDocValuesField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_4372eed5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericDocValuesField(const NumericDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          NumericDocValuesField(const ::java::lang::String &, jlong);
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
        extern PyTypeObject PY_TYPE(NumericDocValuesField);

        class t_NumericDocValuesField {
        public:
          PyObject_HEAD
          NumericDocValuesField object;
          static PyObject *wrap_Object(const NumericDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
