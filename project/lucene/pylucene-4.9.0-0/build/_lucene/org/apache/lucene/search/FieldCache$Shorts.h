#ifndef org_apache_lucene_search_FieldCache$Shorts_H
#define org_apache_lucene_search_FieldCache$Shorts_H

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

        class FieldCache$Shorts : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Shorts(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Shorts(const FieldCache$Shorts& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Shorts *EMPTY;

          FieldCache$Shorts();

          jshort get(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Shorts);

        class t_FieldCache$Shorts {
        public:
          PyObject_HEAD
          FieldCache$Shorts object;
          static PyObject *wrap_Object(const FieldCache$Shorts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
