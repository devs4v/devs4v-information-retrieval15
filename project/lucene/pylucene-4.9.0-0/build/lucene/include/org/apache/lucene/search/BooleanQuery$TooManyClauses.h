#ifndef org_apache_lucene_search_BooleanQuery$TooManyClauses_H
#define org_apache_lucene_search_BooleanQuery$TooManyClauses_H

#include "java/lang/RuntimeException.h"

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

        class BooleanQuery$TooManyClauses : public ::java::lang::RuntimeException {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery$TooManyClauses(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery$TooManyClauses(const BooleanQuery$TooManyClauses& obj) : ::java::lang::RuntimeException(obj) {}

          BooleanQuery$TooManyClauses();
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
        extern PyTypeObject PY_TYPE(BooleanQuery$TooManyClauses);

        class t_BooleanQuery$TooManyClauses {
        public:
          PyObject_HEAD
          BooleanQuery$TooManyClauses object;
          static PyObject *wrap_Object(const BooleanQuery$TooManyClauses&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
