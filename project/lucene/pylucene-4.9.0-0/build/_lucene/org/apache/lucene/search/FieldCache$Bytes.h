#ifndef org_apache_lucene_search_FieldCache$Bytes_H
#define org_apache_lucene_search_FieldCache$Bytes_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldCache$Bytes : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd28,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Bytes(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Bytes(const FieldCache$Bytes& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Bytes *EMPTY;

          FieldCache$Bytes();

          jbyte get(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(FieldCache$Bytes);

        class t_FieldCache$Bytes {
        public:
          PyObject_HEAD
          FieldCache$Bytes object;
          static PyObject *wrap_Object(const FieldCache$Bytes&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
