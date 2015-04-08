#ifndef org_apache_lucene_util_InfoStream_H
#define org_apache_lucene_util_InfoStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class InfoStream : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getDefault_1923150b,
            mid_isEnabled_5fdc3f44,
            mid_message_4a264742,
            mid_setDefault_a5e6dfa2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InfoStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          InfoStream(const InfoStream& obj) : ::java::lang::Object(obj) {}

          static InfoStream *NO_OUTPUT;

          InfoStream();

          static InfoStream getDefault();
          jboolean isEnabled(const ::java::lang::String &) const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
          static void setDefault(const InfoStream &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(InfoStream);

        class t_InfoStream {
        public:
          PyObject_HEAD
          InfoStream object;
          static PyObject *wrap_Object(const InfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
