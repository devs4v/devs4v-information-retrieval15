#ifndef org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter$Side_H
#define org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter$Side_H

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
      namespace analysis {
        namespace ngram {

          class EdgeNGramTokenFilter$Side : public ::java::lang::Enum {
          public:
            enum {
              mid_getLabel_14c7b5c5,
              mid_getSide_e04ee6cc,
              mid_valueOf_e04ee6cc,
              mid_values_16957b8a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EdgeNGramTokenFilter$Side(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EdgeNGramTokenFilter$Side(const EdgeNGramTokenFilter$Side& obj) : ::java::lang::Enum(obj) {}

            static EdgeNGramTokenFilter$Side *BACK;
            static EdgeNGramTokenFilter$Side *FRONT;

            ::java::lang::String getLabel() const;
            static EdgeNGramTokenFilter$Side getSide(const ::java::lang::String &);
            static EdgeNGramTokenFilter$Side valueOf(const ::java::lang::String &);
            static JArray< EdgeNGramTokenFilter$Side > values();
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
      namespace analysis {
        namespace ngram {
          extern PyTypeObject PY_TYPE(EdgeNGramTokenFilter$Side);

          class t_EdgeNGramTokenFilter$Side {
          public:
            PyObject_HEAD
            EdgeNGramTokenFilter$Side object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_EdgeNGramTokenFilter$Side *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const EdgeNGramTokenFilter$Side&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const EdgeNGramTokenFilter$Side&, PyTypeObject *);
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
