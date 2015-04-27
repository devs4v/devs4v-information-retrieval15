#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeException_H

#include "java/lang/Exception.h"

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
  namespace util {
    class Locale;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeException : public ::java::lang::Exception {
            public:
              enum {
                mid_init$_c5ec8ca4,
                mid_init$_1dde9d59,
                mid_init$_41dcc0ed,
                mid_getLocalizedMessage_14c7b5c5,
                mid_getLocalizedMessage_c0fb304e,
                mid_getMessage_14c7b5c5,
                mid_getMessageObject_1bceed44,
                mid_toString_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeException(jobject obj) : ::java::lang::Exception(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeException(const QueryNodeException& obj) : ::java::lang::Exception(obj) {}

              QueryNodeException(const ::java::lang::Throwable &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
              ::java::lang::String getMessage() const;
              ::org::apache::lucene::queryparser::flexible::messages::Message getMessageObject() const;
              ::java::lang::String toString() const;
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
            extern PyTypeObject PY_TYPE(QueryNodeException);

            class t_QueryNodeException {
            public:
              PyObject_HEAD
              QueryNodeException object;
              static PyObject *wrap_Object(const QueryNodeException&);
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
