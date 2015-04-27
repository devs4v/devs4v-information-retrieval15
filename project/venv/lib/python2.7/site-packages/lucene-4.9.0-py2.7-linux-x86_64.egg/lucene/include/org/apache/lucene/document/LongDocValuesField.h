#ifndef org_apache_lucene_document_LongDocValuesField_H
#define org_apache_lucene_document_LongDocValuesField_H

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

        class LongDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
        public:
          enum {
            mid_init$_4372eed5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LongDocValuesField(const LongDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          LongDocValuesField(const ::java::lang::String &, jlong);
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
        extern PyTypeObject PY_TYPE(LongDocValuesField);

        class t_LongDocValuesField {
        public:
          PyObject_HEAD
          LongDocValuesField object;
          static PyObject *wrap_Object(const LongDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
