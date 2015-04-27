#ifndef org_apache_lucene_store_FSDirectory_H
#define org_apache_lucene_store_FSDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class LockFactory;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSDirectory : public ::org::apache::lucene::store::BaseDirectory {
        public:
          enum {
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getDirectory_a8eb7bbe,
            mid_getLockID_14c7b5c5,
            mid_getReadChunkSize_54c6a179,
            mid_listAll_2e6d5245,
            mid_listAll_10b06d64,
            mid_open_89cf4235,
            mid_open_588132c1,
            mid_setLockFactory_9892eb8c,
            mid_setReadChunkSize_39c7bd3c,
            mid_sync_9bfb370d,
            mid_toString_14c7b5c5,
            mid_ensureCanWrite_5fdc3f48,
            mid_onIndexOutputClosed_5fdc3f48,
            mid_fsync_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FSDirectory(const FSDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          static jint DEFAULT_READ_CHUNK_SIZE;

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::io::File getDirectory() const;
          ::java::lang::String getLockID() const;
          jint getReadChunkSize() const;
          JArray< ::java::lang::String > listAll() const;
          static JArray< ::java::lang::String > listAll(const ::java::io::File &);
          static FSDirectory open(const ::java::io::File &);
          static FSDirectory open(const ::java::io::File &, const ::org::apache::lucene::store::LockFactory &);
          void setLockFactory(const ::org::apache::lucene::store::LockFactory &) const;
          void setReadChunkSize(jint) const;
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
        extern PyTypeObject PY_TYPE(FSDirectory);

        class t_FSDirectory {
        public:
          PyObject_HEAD
          FSDirectory object;
          static PyObject *wrap_Object(const FSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
