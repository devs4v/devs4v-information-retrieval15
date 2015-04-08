#ifndef org_apache_lucene_index_IndexReader$ReaderClosedListener_H
#define org_apache_lucene_index_IndexReader$ReaderClosedListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
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
      namespace index {

        class IndexReader$ReaderClosedListener : public ::java::lang::Object {
        public:
          enum {
            mid_onClose_7d7eaea9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader$ReaderClosedListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexReader$ReaderClosedListener(const IndexReader$ReaderClosedListener& obj) : ::java::lang::Object(obj) {}

          void onClose(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyTypeObject PY_TYPE(IndexReader$ReaderClosedListener);

        class t_IndexReader$ReaderClosedListener {
        public:
          PyObject_HEAD
          IndexReader$ReaderClosedListener object;
          static PyObject *wrap_Object(const IndexReader$ReaderClosedListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
