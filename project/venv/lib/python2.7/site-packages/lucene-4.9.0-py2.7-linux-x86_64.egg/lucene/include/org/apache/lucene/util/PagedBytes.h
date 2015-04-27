#ifndef org_apache_lucene_util_PagedBytes_H
#define org_apache_lucene_util_PagedBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$Reader;
        class PagedBytes$PagedBytesDataOutput;
        class Accountable;
        class BytesRef;
        class PagedBytes$PagedBytesDataInput;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace util {

        class PagedBytes : public ::java::lang::Object {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_copy_ec9e0593,
            mid_copy_594e5ee6,
            mid_copyUsingLengthPrefix_7bc03dd8,
            mid_freeze_6c94cff0,
            mid_getDataInput_da9ab8b7,
            mid_getDataOutput_279c2d0b,
            mid_getPointer_54c6a17a,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PagedBytes(const PagedBytes& obj) : ::java::lang::Object(obj) {}

          PagedBytes(jint);

          void copy(const ::org::apache::lucene::store::IndexInput &, jlong) const;
          void copy(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong copyUsingLengthPrefix(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::PagedBytes$Reader freeze(jboolean) const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataInput getDataInput() const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataOutput getDataOutput() const;
          jlong getPointer() const;
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
        extern PyTypeObject PY_TYPE(PagedBytes);

        class t_PagedBytes {
        public:
          PyObject_HEAD
          PagedBytes object;
          static PyObject *wrap_Object(const PagedBytes&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
