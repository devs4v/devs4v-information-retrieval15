#ifndef org_apache_lucene_store_FileSwitchDirectory_H
#define org_apache_lucene_store_FileSwitchDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class IndexInput;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class Collection;
  }
  namespace lang {
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
    namespace lucene {
      namespace store {

        class FileSwitchDirectory : public ::org::apache::lucene::store::BaseDirectory {
        public:
          enum {
            mid_init$_4575167f,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getExtension_97a5258f,
            mid_getPrimaryDir_1f3934bb,
            mid_getSecondaryDir_1f3934bb,
            mid_listAll_2e6d5245,
            mid_openInput_3e1b5375,
            mid_sync_9bfb370d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileSwitchDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FileSwitchDirectory(const FileSwitchDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          FileSwitchDirectory(const ::java::util::Set &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, jboolean);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          static ::java::lang::String getExtension(const ::java::lang::String &);
          ::org::apache::lucene::store::Directory getPrimaryDir() const;
          ::org::apache::lucene::store::Directory getSecondaryDir() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyTypeObject PY_TYPE(FileSwitchDirectory);

        class t_FileSwitchDirectory {
        public:
          PyObject_HEAD
          FileSwitchDirectory object;
          static PyObject *wrap_Object(const FileSwitchDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
