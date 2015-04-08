#ifndef org_apache_lucene_document_LongField_H
#define org_apache_lucene_document_LongField_H

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

        class LongField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_45798648,
            mid_init$_4cb133a7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LongField(const LongField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          LongField(const ::java::lang::String &, jlong, const ::org::apache::lucene::document::Field$Store &);
          LongField(const ::java::lang::String &, jlong, const ::org::apache::lucene::document::FieldType &);
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
        extern PyTypeObject PY_TYPE(LongField);

        class t_LongField {
        public:
          PyObject_HEAD
          LongField object;
          static PyObject *wrap_Object(const LongField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
