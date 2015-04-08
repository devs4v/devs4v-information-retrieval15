#ifndef org_apache_lucene_document_ByteDocValuesField_H
#define org_apache_lucene_document_ByteDocValuesField_H

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

        class ByteDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
        public:
          enum {
            mid_init$_a032b77d,
            mid_setByteValue_b2271687,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ByteDocValuesField(const ByteDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          ByteDocValuesField(const ::java::lang::String &, jbyte);

          void setByteValue(jbyte) const;
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
        extern PyTypeObject PY_TYPE(ByteDocValuesField);

        class t_ByteDocValuesField {
        public:
          PyObject_HEAD
          ByteDocValuesField object;
          static PyObject *wrap_Object(const ByteDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
