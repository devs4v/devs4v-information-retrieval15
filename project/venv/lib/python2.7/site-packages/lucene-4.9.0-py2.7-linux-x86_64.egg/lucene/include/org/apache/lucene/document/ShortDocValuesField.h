#ifndef org_apache_lucene_document_ShortDocValuesField_H
#define org_apache_lucene_document_ShortDocValuesField_H

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

        class ShortDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
        public:
          enum {
            mid_init$_20464280,
            mid_setShortValue_3bc40c6a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShortDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ShortDocValuesField(const ShortDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          ShortDocValuesField(const ::java::lang::String &, jshort);

          void setShortValue(jshort) const;
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
        extern PyTypeObject PY_TYPE(ShortDocValuesField);

        class t_ShortDocValuesField {
        public:
          PyObject_HEAD
          ShortDocValuesField object;
          static PyObject *wrap_Object(const ShortDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
