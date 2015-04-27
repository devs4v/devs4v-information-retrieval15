#ifndef org_apache_lucene_store_SimpleFSDirectory_H
#define org_apache_lucene_store_SimpleFSDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
        class IOContext;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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

        class SimpleFSDirectory : public ::org::apache::lucene::store::FSDirectory {
        public:
          enum {
            mid_init$_c3dacf57,
            mid_init$_5f9cf6ef,
            mid_openInput_3e1b5375,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleFSDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SimpleFSDirectory(const SimpleFSDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          SimpleFSDirectory(const ::java::io::File &);
          SimpleFSDirectory(const ::java::io::File &, const ::org::apache::lucene::store::LockFactory &);

          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyTypeObject PY_TYPE(SimpleFSDirectory);

        class t_SimpleFSDirectory {
        public:
          PyObject_HEAD
          SimpleFSDirectory object;
          static PyObject *wrap_Object(const SimpleFSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
