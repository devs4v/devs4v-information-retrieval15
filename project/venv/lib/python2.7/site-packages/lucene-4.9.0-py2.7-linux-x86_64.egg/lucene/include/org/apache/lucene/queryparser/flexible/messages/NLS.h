#ifndef org_apache_lucene_queryparser_flexible_messages_NLS_H
#define org_apache_lucene_queryparser_flexible_messages_NLS_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
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
          namespace messages {

            class NLS : public ::java::lang::Object {
            public:
              enum {
                mid_getLocalizedMessage_97a5258f,
                mid_getLocalizedMessage_6ffeebd8,
                mid_getLocalizedMessage_0fb26e3b,
                mid_getLocalizedMessage_c901cda2,
                mid_initializeMessages_c13be9ce,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NLS(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NLS(const NLS& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String getLocalizedMessage(const ::java::lang::String &);
              static ::java::lang::String getLocalizedMessage(const ::java::lang::String &, const ::java::util::Locale &);
              static ::java::lang::String getLocalizedMessage(const ::java::lang::String &, const JArray< ::java::lang::Object > &);
              static ::java::lang::String getLocalizedMessage(const ::java::lang::String &, const ::java::util::Locale &, const JArray< ::java::lang::Object > &);
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
            extern PyTypeObject PY_TYPE(NLS);

            class t_NLS {
            public:
              PyObject_HEAD
              NLS object;
              static PyObject *wrap_Object(const NLS&);
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
