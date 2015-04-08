#ifndef org_apache_lucene_util_PrintStreamInfoStream_H
#define org_apache_lucene_util_PrintStreamInfoStream_H

#include "org/apache/lucene/util/InfoStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PrintStreamInfoStream : public ::org::apache::lucene::util::InfoStream {
        public:
          enum {
            mid_init$_1b7c898b,
            mid_init$_be16aeab,
            mid_close_54c6a166,
            mid_isEnabled_5fdc3f44,
            mid_isSystemStream_54c6a16a,
            mid_message_4a264742,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrintStreamInfoStream(jobject obj) : ::org::apache::lucene::util::InfoStream(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PrintStreamInfoStream(const PrintStreamInfoStream& obj) : ::org::apache::lucene::util::InfoStream(obj) {}

          PrintStreamInfoStream(const ::java::io::PrintStream &);
          PrintStreamInfoStream(const ::java::io::PrintStream &, jint);

          void close() const;
          jboolean isEnabled(const ::java::lang::String &) const;
          jboolean isSystemStream() const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(PrintStreamInfoStream);

        class t_PrintStreamInfoStream {
        public:
          PyObject_HEAD
          PrintStreamInfoStream object;
          static PyObject *wrap_Object(const PrintStreamInfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
