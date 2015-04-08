#ifndef org_apache_lucene_document_Document_H
#define org_apache_lucene_document_Document_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableField;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Iterator;
  }
  namespace lang {
    class String;
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Document : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_d86aadad,
            mid_get_97a5258f,
            mid_getBinaryValue_14551a1f,
            mid_getBinaryValues_eb7e4f07,
            mid_getField_3e59ba6e,
            mid_getFields_87851566,
            mid_getFields_0aa85a96,
            mid_getValues_1f6a174f,
            mid_iterator_40858c90,
            mid_removeField_5fdc3f48,
            mid_removeFields_5fdc3f48,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Document(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Document(const Document& obj) : ::java::lang::Object(obj) {}

          Document();

          void add(const ::org::apache::lucene::index::IndexableField &) const;
          ::java::lang::String get(const ::java::lang::String &) const;
          ::org::apache::lucene::util::BytesRef getBinaryValue(const ::java::lang::String &) const;
          JArray< ::org::apache::lucene::util::BytesRef > getBinaryValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexableField getField(const ::java::lang::String &) const;
          ::java::util::List getFields() const;
          JArray< ::org::apache::lucene::index::IndexableField > getFields(const ::java::lang::String &) const;
          JArray< ::java::lang::String > getValues(const ::java::lang::String &) const;
          ::java::util::Iterator iterator() const;
          void removeField(const ::java::lang::String &) const;
          void removeFields(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(Document);

        class t_Document {
        public:
          PyObject_HEAD
          Document object;
          static PyObject *wrap_Object(const Document&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
