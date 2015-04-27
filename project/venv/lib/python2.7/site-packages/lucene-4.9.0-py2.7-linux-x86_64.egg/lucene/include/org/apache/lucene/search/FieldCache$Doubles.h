#ifndef org_apache_lucene_search_FieldCache$Doubles_H
#define org_apache_lucene_search_FieldCache$Doubles_H

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

        class FieldCache$Doubles : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd2e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Doubles(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Doubles(const FieldCache$Doubles& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Doubles *EMPTY;

          FieldCache$Doubles();

          jdouble get(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Doubles);

        class t_FieldCache$Doubles {
        public:
          PyObject_HEAD
          FieldCache$Doubles object;
          static PyObject *wrap_Object(const FieldCache$Doubles&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
