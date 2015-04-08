#ifndef org_apache_lucene_store_TrackingDirectoryWrapper_H
#define org_apache_lucene_store_TrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
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
    class Set;
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

        class TrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
        public:
          enum {
            mid_init$_2e261ef2,
            mid_copy_146bec62,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_getCreatedFiles_03e99967,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TrackingDirectoryWrapper(const TrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          TrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

          void copy(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::java::util::Set getCreatedFiles() const;
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
        extern PyTypeObject PY_TYPE(TrackingDirectoryWrapper);

        class t_TrackingDirectoryWrapper {
        public:
          PyObject_HEAD
          TrackingDirectoryWrapper object;
          static PyObject *wrap_Object(const TrackingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
