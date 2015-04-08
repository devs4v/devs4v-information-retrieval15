#ifndef org_apache_lucene_codecs_StoredFieldsReader_H
#define org_apache_lucene_codecs_StoredFieldsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class StoredFieldVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class StoredFieldsReader : public ::java::lang::Object {
        public:
          enum {
            mid_checkIntegrity_54c6a166,
            mid_clone_ef585f0d,
            mid_visitDocument_a2ea3ebe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsReader(const StoredFieldsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          StoredFieldsReader clone() const;
          void visitDocument(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(StoredFieldsReader);

        class t_StoredFieldsReader {
        public:
          PyObject_HEAD
          StoredFieldsReader object;
          static PyObject *wrap_Object(const StoredFieldsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
