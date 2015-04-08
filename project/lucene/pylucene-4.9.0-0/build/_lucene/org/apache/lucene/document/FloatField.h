#ifndef org_apache_lucene_document_FloatField_H
#define org_apache_lucene_document_FloatField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class Field$Store;
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

        class FloatField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_866c7d94,
            mid_init$_49ba27a3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FloatField(const FloatField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          FloatField(const ::java::lang::String &, jfloat, const ::org::apache::lucene::document::Field$Store &);
          FloatField(const ::java::lang::String &, jfloat, const ::org::apache::lucene::document::FieldType &);
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
        extern PyTypeObject PY_TYPE(FloatField);

        class t_FloatField {
        public:
          PyObject_HEAD
          FloatField object;
          static PyObject *wrap_Object(const FloatField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
