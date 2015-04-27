#ifndef org_apache_lucene_search_FieldCache$Longs_H
#define org_apache_lucene_search_FieldCache$Longs_H

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

        class FieldCache$Longs : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_39c7bd20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Longs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Longs(const FieldCache$Longs& obj) : ::java::lang::Object(obj) {}

          static FieldCache$Longs *EMPTY;

          FieldCache$Longs();

          jlong get(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Longs);

        class t_FieldCache$Longs {
        public:
          PyObject_HEAD
          FieldCache$Longs object;
          static PyObject *wrap_Object(const FieldCache$Longs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
