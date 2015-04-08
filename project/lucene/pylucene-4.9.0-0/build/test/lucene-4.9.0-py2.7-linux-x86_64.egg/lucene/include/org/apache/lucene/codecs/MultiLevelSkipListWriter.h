#ifndef org_apache_lucene_codecs_MultiLevelSkipListWriter_H
#define org_apache_lucene_codecs_MultiLevelSkipListWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
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
      namespace codecs {

        class MultiLevelSkipListWriter : public ::java::lang::Object {
        public:
          enum {
            mid_bufferSkip_39c7bd3c,
            mid_writeSkip_faad6216,
            mid_init_54c6a166,
            mid_resetSkip_54c6a166,
            mid_writeSkipData_a31eeaec,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListWriter(const MultiLevelSkipListWriter& obj) : ::java::lang::Object(obj) {}

          void bufferSkip(jint) const;
          jlong writeSkip(const ::org::apache::lucene::store::IndexOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(MultiLevelSkipListWriter);

        class t_MultiLevelSkipListWriter {
        public:
          PyObject_HEAD
          MultiLevelSkipListWriter object;
          static PyObject *wrap_Object(const MultiLevelSkipListWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
