#ifndef org_apache_lucene_search_highlight_PositionSpan_H
#define org_apache_lucene_search_highlight_PositionSpan_H

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
        namespace highlight {

          class PositionSpan : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d8d154a6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionSpan(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PositionSpan(const PositionSpan& obj) : ::java::lang::Object(obj) {}

            PositionSpan(jint, jint);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(PositionSpan);

          class t_PositionSpan {
          public:
            PyObject_HEAD
            PositionSpan object;
            static PyObject *wrap_Object(const PositionSpan&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
