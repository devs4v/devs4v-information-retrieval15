#ifndef org_apache_lucene_document_DocumentStoredFieldVisitor_H
#define org_apache_lucene_document_DocumentStoredFieldVisitor_H

#include "org/apache/lucene/index/StoredFieldVisitor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class StoredFieldVisitor$Status;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DocumentStoredFieldVisitor : public ::org::apache::lucene::index::StoredFieldVisitor {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_4dd4540c,
            mid_init$_fb4f2b26,
            mid_binaryField_f0c94359,
            mid_doubleField_59cb8283,
            mid_floatField_04c0e245,
            mid_getDocument_005b06cf,
            mid_intField_d8ebe062,
            mid_longField_54f2c7e9,
            mid_needsField_be88ccfe,
            mid_stringField_20e02bfa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocumentStoredFieldVisitor(jobject obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocumentStoredFieldVisitor(const DocumentStoredFieldVisitor& obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {}

          DocumentStoredFieldVisitor();
          DocumentStoredFieldVisitor(const JArray< ::java::lang::String > &);
          DocumentStoredFieldVisitor(const ::java::util::Set &);

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          ::org::apache::lucene::document::Document getDocument() const;
          void intField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
          void longField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
          ::org::apache::lucene::index::StoredFieldVisitor$Status needsField(const ::org::apache::lucene::index::FieldInfo &) const;
          void stringField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(DocumentStoredFieldVisitor);

        class t_DocumentStoredFieldVisitor {
        public:
          PyObject_HEAD
          DocumentStoredFieldVisitor object;
          static PyObject *wrap_Object(const DocumentStoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
