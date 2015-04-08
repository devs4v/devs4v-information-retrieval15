#ifndef org_apache_lucene_util_IOUtils_H
#define org_apache_lucene_util_IOUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Iterable;
    class String;
  }
  namespace io {
    class InputStream;
    class IOException;
    class Closeable;
    class File;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOUtils : public ::java::lang::Object {
        public:
          enum {
            mid_close_d1cac205,
            mid_close_ddf1c8f2,
            mid_closeWhileHandlingException_d1cac205,
            mid_closeWhileHandlingException_ddf1c8f2,
            mid_copy_ffd62126,
            mid_deleteFilesIgnoringExceptions_d7029dd8,
            mid_fsync_9e00f624,
            mid_reThrow_c5ec8ca4,
            mid_reThrowUnchecked_c5ec8ca4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IOUtils(const IOUtils& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *UTF_8;

          static void close(const ::java::lang::Iterable &);
          static void close(const JArray< ::java::io::Closeable > &);
          static void closeWhileHandlingException(const ::java::lang::Iterable &);
          static void closeWhileHandlingException(const JArray< ::java::io::Closeable > &);
          static void copy(const ::java::io::File &, const ::java::io::File &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const JArray< ::java::lang::String > &);
          static void fsync(const ::java::io::File &, jboolean);
          static void reThrow(const ::java::lang::Throwable &);
          static void reThrowUnchecked(const ::java::lang::Throwable &);
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
        extern PyTypeObject PY_TYPE(IOUtils);

        class t_IOUtils {
        public:
          PyObject_HEAD
          IOUtils object;
          static PyObject *wrap_Object(const IOUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
