#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes;
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

        class PagedBytes$PagedBytesDataOutput : public ::org::apache::lucene::store::DataOutput {
        public:
          enum {
            mid_init$_2279e4ea,
            mid_getPosition_54c6a17a,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataOutput(const PagedBytes$PagedBytesDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          PagedBytes$PagedBytesDataOutput(const ::org::apache::lucene::util::PagedBytes &);

          jlong getPosition() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(PagedBytes$PagedBytesDataOutput);

        class t_PagedBytes$PagedBytesDataOutput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataOutput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
