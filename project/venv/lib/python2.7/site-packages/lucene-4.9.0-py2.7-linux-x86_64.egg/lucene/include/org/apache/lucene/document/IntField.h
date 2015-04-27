#ifndef org_apache_lucene_document_IntField_H
#define org_apache_lucene_document_IntField_H

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

        class IntField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_80deeaab,
            mid_init$_919d88bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IntField(const IntField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          IntField(const ::java::lang::String &, jint, const ::org::apache::lucene::document::Field$Store &);
          IntField(const ::java::lang::String &, jint, const ::org::apache::lucene::document::FieldType &);
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
        extern PyTypeObject PY_TYPE(IntField);

        class t_IntField {
        public:
          PyObject_HEAD
          IntField object;
          static PyObject *wrap_Object(const IntField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
