#ifndef org_apache_lucene_store_MMapDirectory_H
#define org_apache_lucene_store_MMapDirectory_H

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

        class MMapDirectory : public ::org::apache::lucene::store::FSDirectory {
        public:
          enum {
            mid_init$_c3dacf57,
            mid_init$_5f9cf6ef,
            mid_init$_4d8117f3,
            mid_getMaxChunkSize_54c6a179,
            mid_getUseUnmap_54c6a16a,
            mid_openInput_3e1b5375,
            mid_setUseUnmap_bb0c767f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MMapDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MMapDirectory(const MMapDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          static jint DEFAULT_MAX_BUFF;
          static jboolean UNMAP_SUPPORTED;

          MMapDirectory(const ::java::io::File &);
          MMapDirectory(const ::java::io::File &, const ::org::apache::lucene::store::LockFactory &);
          MMapDirectory(const ::java::io::File &, const ::org::apache::lucene::store::LockFactory &, jint);

          jint getMaxChunkSize() const;
          jboolean getUseUnmap() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setUseUnmap(jboolean) const;
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
        extern PyTypeObject PY_TYPE(MMapDirectory);

        class t_MMapDirectory {
        public:
          PyObject_HEAD
          MMapDirectory object;
          static PyObject *wrap_Object(const MMapDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
