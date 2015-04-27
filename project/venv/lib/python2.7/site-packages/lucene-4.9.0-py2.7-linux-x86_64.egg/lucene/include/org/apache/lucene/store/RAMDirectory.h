#ifndef org_apache_lucene_store_RAMDirectory_H
#define org_apache_lucene_store_RAMDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class IndexOutput;
        class Directory;
        class IndexInput;
        class IOContext;
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
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RAMDirectory : public ::org::apache::lucene::store::BaseDirectory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_7b526946,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getLockID_14c7b5c5,
            mid_listAll_2e6d5245,
            mid_openInput_3e1b5375,
            mid_ramBytesUsed_54c6a17a,
            mid_sync_9bfb370d,
            mid_newRAMFile_a5af5448,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RAMDirectory(const RAMDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          RAMDirectory();
          RAMDirectory(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::IOContext &);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::lang::String getLockID() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
          void sync(const ::java::util::Collection &) const;
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
        extern PyTypeObject PY_TYPE(RAMDirectory);

        class t_RAMDirectory {
        public:
          PyObject_HEAD
          RAMDirectory object;
          static PyObject *wrap_Object(const RAMDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
