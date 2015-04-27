#ifndef org_apache_lucene_store_CompoundFileDirectory_H
#define org_apache_lucene_store_CompoundFileDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class Directory;
        class IndexInput;
        class IOContext;
        class Lock;
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

        class CompoundFileDirectory : public ::org::apache::lucene::store::BaseDirectory {
        public:
          enum {
            mid_init$_f1dc2b71,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getDirectory_1f3934bb,
            mid_getName_14c7b5c5,
            mid_listAll_2e6d5245,
            mid_makeLock_f26bb9a8,
            mid_openInput_3e1b5375,
            mid_renameFile_4a264742,
            mid_sync_9bfb370d,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundFileDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CompoundFileDirectory(const CompoundFileDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          CompoundFileDirectory(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &, jboolean);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::lang::String getName() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void renameFile(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(CompoundFileDirectory);

        class t_CompoundFileDirectory {
        public:
          PyObject_HEAD
          CompoundFileDirectory object;
          static PyObject *wrap_Object(const CompoundFileDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
