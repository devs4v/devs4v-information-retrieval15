#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeError_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeError_H

#include "java/lang/Error.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class NLSException;
            class Message;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
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

            class QueryNodeError : public ::java::lang::Error {
            public:
              enum {
                mid_init$_c5ec8ca4,
                mid_init$_1dde9d59,
                mid_init$_41dcc0ed,
                mid_getMessageObject_1bceed44,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeError(jobject obj) : ::java::lang::Error(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeError(const QueryNodeError& obj) : ::java::lang::Error(obj) {}

              QueryNodeError(const ::java::lang::Throwable &);
              QueryNodeError(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeError(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              ::org::apache::lucene::queryparser::flexible::messages::Message getMessageObject() const;
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            extern PyTypeObject PY_TYPE(QueryNodeError);

            class t_QueryNodeError {
            public:
              PyObject_HEAD
              QueryNodeError object;
              static PyObject *wrap_Object(const QueryNodeError&);
              static PyObject *wrap_jobject(const jobject&);
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
