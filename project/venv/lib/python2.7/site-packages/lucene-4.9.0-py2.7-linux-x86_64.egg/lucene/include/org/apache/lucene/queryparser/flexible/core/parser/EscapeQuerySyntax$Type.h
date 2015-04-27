#ifndef org_apache_lucene_queryparser_flexible_core_parser_EscapeQuerySyntax$Type_H
#define org_apache_lucene_queryparser_flexible_core_parser_EscapeQuerySyntax$Type_H

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
        namespace flexible {
          namespace core {
            namespace parser {

              class EscapeQuerySyntax$Type : public ::java::lang::Enum {
              public:
                enum {
                  mid_valueOf_870295fe,
                  mid_values_4eb00ec4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EscapeQuerySyntax$Type(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                EscapeQuerySyntax$Type(const EscapeQuerySyntax$Type& obj) : ::java::lang::Enum(obj) {}

                static EscapeQuerySyntax$Type *NORMAL;
                static EscapeQuerySyntax$Type *STRING;

                static EscapeQuerySyntax$Type valueOf(const ::java::lang::String &);
                static JArray< EscapeQuerySyntax$Type > values();
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              extern PyTypeObject PY_TYPE(EscapeQuerySyntax$Type);

              class t_EscapeQuerySyntax$Type {
              public:
                PyObject_HEAD
                EscapeQuerySyntax$Type object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_EscapeQuerySyntax$Type *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const EscapeQuerySyntax$Type&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const EscapeQuerySyntax$Type&, PyTypeObject *);
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
}

#endif
