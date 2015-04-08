#ifndef org_apache_lucene_store_Directory_H
#define org_apache_lucene_store_Directory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class ChecksumIndexInput;
        class Lock;
        class LockFactory;
        class IndexOutput;
        class IndexInput;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class Directory : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clearLock_5fdc3f48,
            mid_close_54c6a166,
            mid_copy_146bec62,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getLockFactory_e4e9c36d,
            mid_getLockID_14c7b5c5,
            mid_listAll_2e6d5245,
            mid_makeLock_f26bb9a8,
            mid_openChecksumInput_dab98306,
            mid_openInput_3e1b5375,
            mid_setLockFactory_9892eb8c,
            mid_sync_9bfb370d,
            mid_toString_14c7b5c5,
            mid_ensureOpen_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Directory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Directory(const Directory& obj) : ::java::lang::Object(obj) {}

          Directory();

          void clearLock(const ::java::lang::String &) const;
          void close() const;
          void copy(const Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::org::apache::lucene::store::LockFactory getLockFactory() const;
          ::java::lang::String getLockID() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::ChecksumIndexInput openChecksumInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setLockFactory(const ::org::apache::lucene::store::LockFactory &) const;
          void sync(const ::java::util::Collection &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(Directory);

        class t_Directory {
        public:
          PyObject_HEAD
          Directory object;
          static PyObject *wrap_Object(const Directory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
