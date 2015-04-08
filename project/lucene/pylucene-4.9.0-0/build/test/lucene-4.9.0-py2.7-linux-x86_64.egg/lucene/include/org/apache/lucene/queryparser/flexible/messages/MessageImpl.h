#ifndef org_apache_lucene_queryparser_flexible_messages_MessageImpl_H
#define org_apache_lucene_queryparser_flexible_messages_MessageImpl_H

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
    class String;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {

            class MessageImpl : public ::java::lang::Object {
            public:
              enum {
                mid_init$_5fdc3f48,
                mid_init$_ddea115c,
                mid_getArguments_94e49c77,
                mid_getKey_14c7b5c5,
                mid_getLocalizedMessage_14c7b5c5,
                mid_getLocalizedMessage_c0fb304e,
                mid_toString_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageImpl(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              MessageImpl(const MessageImpl& obj) : ::java::lang::Object(obj) {}

              MessageImpl(const ::java::lang::String &);
              MessageImpl(const ::java::lang::String &, const JArray< ::java::lang::Object > &);

              JArray< ::java::lang::Object > getArguments() const;
              ::java::lang::String getKey() const;
              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
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
          namespace messages {
            extern PyTypeObject PY_TYPE(MessageImpl);

            class t_MessageImpl {
            public:
              PyObject_HEAD
              MessageImpl object;
              static PyObject *wrap_Object(const MessageImpl&);
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
