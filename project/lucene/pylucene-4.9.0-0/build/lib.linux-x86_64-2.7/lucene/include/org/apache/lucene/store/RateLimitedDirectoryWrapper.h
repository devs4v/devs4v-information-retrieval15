#ifndef org_apache_lucene_store_RateLimitedDirectoryWrapper_H
#define org_apache_lucene_store_RateLimitedDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class IOContext;
        class RateLimiter;
        class IOContext$Context;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Double;
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

        class RateLimitedDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
        public:
          enum {
            mid_init$_2e261ef2,
            mid_copy_146bec62,
            mid_createOutput_5ad5358d,
            mid_getMaxWriteMBPerSec_c79e30dc,
            mid_setMaxWriteMBPerSec_947ec9bf,
            mid_setRateLimiter_6afce4a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RateLimitedDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RateLimitedDirectoryWrapper(const RateLimitedDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          RateLimitedDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

          void copy(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::java::lang::Double getMaxWriteMBPerSec(const ::org::apache::lucene::store::IOContext$Context &) const;
          void setMaxWriteMBPerSec(const ::java::lang::Double &, const ::org::apache::lucene::store::IOContext$Context &) const;
          void setRateLimiter(const ::org::apache::lucene::store::RateLimiter &, const ::org::apache::lucene::store::IOContext$Context &) const;
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
        extern PyTypeObject PY_TYPE(RateLimitedDirectoryWrapper);

        class t_RateLimitedDirectoryWrapper {
        public:
          PyObject_HEAD
          RateLimitedDirectoryWrapper object;
          static PyObject *wrap_Object(const RateLimitedDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
