#ifndef org_apache_lucene_document_IntDocValuesField_H
#define org_apache_lucene_document_IntDocValuesField_H

#include "org/apache/lucene/document/NumericDocValuesField.h"

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

        class IntDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
        public:
          enum {
            mid_init$_6e53ccc6,
            mid_setIntValue_39c7bd3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IntDocValuesField(const IntDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          IntDocValuesField(const ::java::lang::String &, jint);

          void setIntValue(jint) const;
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
        extern PyTypeObject PY_TYPE(IntDocValuesField);

        class t_IntDocValuesField {
        public:
          PyObject_HEAD
          IntDocValuesField object;
          static PyObject *wrap_Object(const IntDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
