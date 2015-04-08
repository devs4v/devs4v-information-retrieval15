#ifndef org_apache_lucene_search_IndexSearcher$LeafSlice_H
#define org_apache_lucene_search_IndexSearcher$LeafSlice_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
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
      namespace search {

        class IndexSearcher$LeafSlice : public ::java::lang::Object {
        public:
          enum {
            mid_init$_683a6c7f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher$LeafSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher$LeafSlice(const IndexSearcher$LeafSlice& obj) : ::java::lang::Object(obj) {}

          IndexSearcher$LeafSlice(const JArray< ::org::apache::lucene::index::AtomicReaderContext > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(IndexSearcher$LeafSlice);

        class t_IndexSearcher$LeafSlice {
        public:
          PyObject_HEAD
          IndexSearcher$LeafSlice object;
          static PyObject *wrap_Object(const IndexSearcher$LeafSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
