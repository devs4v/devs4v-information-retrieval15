#ifndef org_apache_lucene_search_FieldCache$Ints_H
#define org_apache_lucene_search_FieldCache$Ints_H

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

        class FieldCache$Ints : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Ints(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Ints(const FieldCache$Ints& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Ints *EMPTY;

          FieldCache$Ints();

          jint get(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Ints);

        class t_FieldCache$Ints {
        public:
          PyObject_HEAD
          FieldCache$Ints object;
          static PyObject *wrap_Object(const FieldCache$Ints&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
