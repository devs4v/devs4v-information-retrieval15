#ifndef org_apache_lucene_queryparser_classic_QueryParser$Operator_H
#define org_apache_lucene_queryparser_classic_QueryParser$Operator_H

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
      namespace queryparser {
        namespace classic {

          class QueryParser$Operator : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_7436fa4b,
              mid_values_6ed7a6cd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParser$Operator(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryParser$Operator(const QueryParser$Operator& obj) : ::java::lang::Enum(obj) {}

            static QueryParser$Operator *AND;
            static QueryParser$Operator *OR;

            static QueryParser$Operator valueOf(const ::java::lang::String &);
            static JArray< QueryParser$Operator > values();
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
      namespace queryparser {
        namespace classic {
          extern PyTypeObject PY_TYPE(QueryParser$Operator);

          class t_QueryParser$Operator {
          public:
            PyObject_HEAD
            QueryParser$Operator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_QueryParser$Operator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const QueryParser$Operator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const QueryParser$Operator&, PyTypeObject *);
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
