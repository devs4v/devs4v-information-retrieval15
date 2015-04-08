#ifndef org_apache_lucene_search_join_ScoreMode_H
#define org_apache_lucene_search_join_ScoreMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class ScoreMode : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_0d6e5195,
              mid_values_dbd87c7b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScoreMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ScoreMode(const ScoreMode& obj) : ::java::lang::Enum(obj) {}

            static ScoreMode *Avg;
            static ScoreMode *Max;
            static ScoreMode *None;
            static ScoreMode *Total;

            static ScoreMode valueOf(const ::java::lang::String &);
            static JArray< ScoreMode > values();
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
        namespace join {
          extern PyTypeObject PY_TYPE(ScoreMode);

          class t_ScoreMode {
          public:
            PyObject_HEAD
            ScoreMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ScoreMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ScoreMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ScoreMode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
