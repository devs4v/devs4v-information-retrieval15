#ifndef org_apache_pylucene_store_PythonDirectory_H
#define org_apache_pylucene_store_PythonDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class Lock;
        class IndexInput;
        class IOContext;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonDirectory : public ::org::apache::lucene::store::Directory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clearLock_5fdc3f48,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_fileModified_5fdc3f54,
            mid_finalize_54c6a166,
            mid_getLockFactory_e4e9c36d,
            mid_listAll_2e6d5245,
            mid_makeLock_f26bb9a8,
            mid_openInput_3e1b5375,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_setLockFactory_9892eb8c,
            mid_sync_5fdc3f48,
            mid_sync_9bfb370d,
            mid_touchFile_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonDirectory(const PythonDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          PythonDirectory();

          void clearLock(const ::java::lang::String &) const;
          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          jlong fileModified(const ::java::lang::String &) const;
          void finalize() const;
          ::org::apache::lucene::store::LockFactory getLockFactory() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void setLockFactory(const ::org::apache::lucene::store::LockFactory &) const;
          void sync(const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void touchFile(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyTypeObject PY_TYPE(PythonDirectory);

        class t_PythonDirectory {
        public:
          PyObject_HEAD
          PythonDirectory object;
          static PyObject *wrap_Object(const PythonDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
