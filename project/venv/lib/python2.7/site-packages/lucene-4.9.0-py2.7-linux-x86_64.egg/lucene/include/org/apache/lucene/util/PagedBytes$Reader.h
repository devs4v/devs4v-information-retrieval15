#ifndef org_apache_lucene_util_PagedBytes$Reader_H
#define org_apache_lucene_util_PagedBytes$Reader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes$Reader : public ::java::lang::Object {
        public:
          enum {
            mid_fill_9e70a0dd,
            mid_fillSlice_8caa1345,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$Reader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$Reader(const PagedBytes$Reader& obj) : ::java::lang::Object(obj) {}

          void fill(const ::org::apache::lucene::util::BytesRef &, jlong) const;
          void fillSlice(const ::org::apache::lucene::util::BytesRef &, jlong, jint) const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(PagedBytes$Reader);

        class t_PagedBytes$Reader {
        public:
          PyObject_HEAD
          PagedBytes$Reader object;
          static PyObject *wrap_Object(const PagedBytes$Reader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
