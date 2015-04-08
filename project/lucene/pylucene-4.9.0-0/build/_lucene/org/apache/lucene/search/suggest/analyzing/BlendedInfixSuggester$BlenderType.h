#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester$BlenderType_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester$BlenderType_H

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
        namespace suggest {
          namespace analyzing {

            class BlendedInfixSuggester$BlenderType : public ::java::lang::Enum {
            public:
              enum {
                mid_valueOf_ff583aba,
                mid_values_c5f82234,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BlendedInfixSuggester$BlenderType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BlendedInfixSuggester$BlenderType(const BlendedInfixSuggester$BlenderType& obj) : ::java::lang::Enum(obj) {}

              static BlendedInfixSuggester$BlenderType *CUSTOM;
              static BlendedInfixSuggester$BlenderType *POSITION_LINEAR;
              static BlendedInfixSuggester$BlenderType *POSITION_RECIPROCAL;

              static BlendedInfixSuggester$BlenderType valueOf(const ::java::lang::String &);
              static JArray< BlendedInfixSuggester$BlenderType > values();
            };
          }
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
        namespace suggest {
          namespace analyzing {
            extern PyTypeObject PY_TYPE(BlendedInfixSuggester$BlenderType);

            class t_BlendedInfixSuggester$BlenderType {
            public:
              PyObject_HEAD
              BlendedInfixSuggester$BlenderType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_BlendedInfixSuggester$BlenderType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const BlendedInfixSuggester$BlenderType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const BlendedInfixSuggester$BlenderType&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
