#ifndef org_apache_lucene_codecs_MultiLevelSkipListReader_H
#define org_apache_lucene_codecs_MultiLevelSkipListReader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class MultiLevelSkipListReader : public ::java::lang::Object {
        public:
          enum {
            mid_close_54c6a166,
            mid_getDoc_54c6a179,
            mid_init_25d05c8f,
            mid_skipTo_39c7bd23,
            mid_seekChild_39c7bd3c,
            mid_setLastSkipData_39c7bd3c,
            mid_readSkipData_5203bb2b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListReader(const MultiLevelSkipListReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          jint getDoc() const;
          void init(jlong, jint) const;
          jint skipTo(jint) const;
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
        extern PyTypeObject PY_TYPE(MultiLevelSkipListReader);

        class t_MultiLevelSkipListReader {
        public:
          PyObject_HEAD
          MultiLevelSkipListReader object;
          static PyObject *wrap_Object(const MultiLevelSkipListReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
