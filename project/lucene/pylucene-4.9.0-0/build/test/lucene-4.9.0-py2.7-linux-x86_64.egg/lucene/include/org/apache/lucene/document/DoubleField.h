#ifndef org_apache_lucene_document_DoubleField_H
#define org_apache_lucene_document_DoubleField_H

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

        class DoubleField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_d4f106f2,
            mid_init$_1922fa29,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DoubleField(const DoubleField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          DoubleField(const ::java::lang::String &, jdouble, const ::org::apache::lucene::document::Field$Store &);
          DoubleField(const ::java::lang::String &, jdouble, const ::org::apache::lucene::document::FieldType &);
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
        extern PyTypeObject PY_TYPE(DoubleField);

        class t_DoubleField {
        public:
          PyObject_HEAD
          DoubleField object;
          static PyObject *wrap_Object(const DoubleField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
