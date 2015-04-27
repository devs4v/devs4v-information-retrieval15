#ifndef org_apache_lucene_index_CompositeReader_H
#define org_apache_lucene_index_CompositeReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CompositeReaderContext;
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
      namespace index {

        class CompositeReader : public ::org::apache::lucene::index::IndexReader {
        public:
          enum {
            mid_getContext_00eb2977,
            mid_toString_14c7b5c5,
            mid_getSequentialSubReaders_87851566,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompositeReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CompositeReader(const CompositeReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          ::org::apache::lucene::index::CompositeReaderContext getContext() const;
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
      namespace index {
        extern PyTypeObject PY_TYPE(CompositeReader);

        class t_CompositeReader {
        public:
          PyObject_HEAD
          CompositeReader object;
          static PyObject *wrap_Object(const CompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
