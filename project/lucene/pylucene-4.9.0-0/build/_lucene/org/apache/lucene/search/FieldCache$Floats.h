#ifndef org_apache_lucene_search_FieldCache$Floats_H
#define org_apache_lucene_search_FieldCache$Floats_H

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

        class FieldCache$Floats : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd2c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Floats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Floats(const FieldCache$Floats& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Floats *EMPTY;

          FieldCache$Floats();

          jfloat get(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Floats);

        class t_FieldCache$Floats {
        public:
          PyObject_HEAD
          FieldCache$Floats object;
          static PyObject *wrap_Object(const FieldCache$Floats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
