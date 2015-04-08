#ifndef org_apache_lucene_store_IOContext_H
#define org_apache_lucene_store_IOContext_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class MergeInfo;
        class FlushInfo;
        class IOContext$Context;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IOContext : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_b5b0f361,
            mid_init$_080fbf4f,
            mid_init$_caa57ead,
            mid_init$_617520cb,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_context,
            fid_flushInfo,
            fid_mergeInfo,
            fid_readOnce,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IOContext(const IOContext& obj) : ::java::lang::Object(obj) {}

          static IOContext *DEFAULT;
          static IOContext *READ;
          static IOContext *READONCE;

          ::org::apache::lucene::store::IOContext$Context _get_context() const;
          ::org::apache::lucene::store::FlushInfo _get_flushInfo() const;
          ::org::apache::lucene::store::MergeInfo _get_mergeInfo() const;
          jboolean _get_readOnce() const;

          IOContext();
          IOContext(const ::org::apache::lucene::store::MergeInfo &);
          IOContext(const ::org::apache::lucene::store::FlushInfo &);
          IOContext(const ::org::apache::lucene::store::IOContext$Context &);
          IOContext(const IOContext &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyTypeObject PY_TYPE(IOContext);

        class t_IOContext {
        public:
          PyObject_HEAD
          IOContext object;
          static PyObject *wrap_Object(const IOContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
