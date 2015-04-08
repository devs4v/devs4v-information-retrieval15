#ifndef org_apache_lucene_document_StoredField_H
#define org_apache_lucene_document_StoredField_H

#include "org/apache/lucene/document/Field.h"

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

        class StoredField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_6e53ccc6,
            mid_init$_f0649ce1,
            mid_init$_4372eed5,
            mid_init$_493fce5f,
            mid_init$_97e62b21,
            mid_init$_43cce44e,
            mid_init$_4a264742,
            mid_init$_eab5cd19,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StoredField(const StoredField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          StoredField(const ::java::lang::String &, jint);
          StoredField(const ::java::lang::String &, jfloat);
          StoredField(const ::java::lang::String &, jlong);
          StoredField(const ::java::lang::String &, jdouble);
          StoredField(const ::java::lang::String &, const JArray< jbyte > &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          StoredField(const ::java::lang::String &, const ::java::lang::String &);
          StoredField(const ::java::lang::String &, const JArray< jbyte > &, jint, jint);
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
        extern PyTypeObject PY_TYPE(StoredField);

        class t_StoredField {
        public:
          PyObject_HEAD
          StoredField object;
          static PyObject *wrap_Object(const StoredField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
