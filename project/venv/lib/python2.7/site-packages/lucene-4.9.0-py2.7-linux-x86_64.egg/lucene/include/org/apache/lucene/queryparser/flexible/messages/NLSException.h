#ifndef org_apache_lucene_queryparser_flexible_messages_NLSException_H
#define org_apache_lucene_queryparser_flexible_messages_NLSException_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
          }
        }
      }
    }
  }
}
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
        namespace flexible {
          namespace messages {

            class NLSException : public ::java::lang::Object {
            public:
              enum {
                mid_getMessageObject_1bceed44,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NLSException(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NLSException(const NLSException& obj) : ::java::lang::Object(obj) {}

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
          namespace messages {
            extern PyTypeObject PY_TYPE(NLSException);

            class t_NLSException {
            public:
              PyObject_HEAD
              NLSException object;
              static PyObject *wrap_Object(const NLSException&);
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
