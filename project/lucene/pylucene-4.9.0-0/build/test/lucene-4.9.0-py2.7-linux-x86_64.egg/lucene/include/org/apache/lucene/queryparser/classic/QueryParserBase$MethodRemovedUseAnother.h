#ifndef org_apache_lucene_queryparser_classic_QueryParserBase$MethodRemovedUseAnother_H
#define org_apache_lucene_queryparser_classic_QueryParserBase$MethodRemovedUseAnother_H

#include "java/lang/Throwable.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserBase$MethodRemovedUseAnother : public ::java::lang::Throwable {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParserBase$MethodRemovedUseAnother(jobject obj) : ::java::lang::Throwable(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryParserBase$MethodRemovedUseAnother(const QueryParserBase$MethodRemovedUseAnother& obj) : ::java::lang::Throwable(obj) {}

            QueryParserBase$MethodRemovedUseAnother();
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
          extern PyTypeObject PY_TYPE(QueryParserBase$MethodRemovedUseAnother);

          class t_QueryParserBase$MethodRemovedUseAnother {
          public:
            PyObject_HEAD
            QueryParserBase$MethodRemovedUseAnother object;
            static PyObject *wrap_Object(const QueryParserBase$MethodRemovedUseAnother&);
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
