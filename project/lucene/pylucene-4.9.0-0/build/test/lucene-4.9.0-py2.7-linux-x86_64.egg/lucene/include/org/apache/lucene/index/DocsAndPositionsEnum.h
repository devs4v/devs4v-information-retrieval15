#ifndef org_apache_lucene_index_DocsAndPositionsEnum_H
#define org_apache_lucene_index_DocsAndPositionsEnum_H

#include "org/apache/lucene/index/DocsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace index {

        class DocsAndPositionsEnum : public ::org::apache::lucene::index::DocsEnum {
        public:
          enum {
            mid_endOffset_54c6a179,
            mid_getPayload_4ae19461,
            mid_nextPosition_54c6a179,
            mid_startOffset_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocsAndPositionsEnum(jobject obj) : ::org::apache::lucene::index::DocsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocsAndPositionsEnum(const DocsAndPositionsEnum& obj) : ::org::apache::lucene::index::DocsEnum(obj) {}

          static jint FLAG_OFFSETS;
          static jint FLAG_PAYLOADS;

          jint endOffset() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextPosition() const;
          jint startOffset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(DocsAndPositionsEnum);

        class t_DocsAndPositionsEnum {
        public:
          PyObject_HEAD
          DocsAndPositionsEnum object;
          static PyObject *wrap_Object(const DocsAndPositionsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
