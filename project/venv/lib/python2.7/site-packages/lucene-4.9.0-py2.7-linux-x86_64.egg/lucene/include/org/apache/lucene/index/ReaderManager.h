#ifndef org_apache_lucene_index_ReaderManager_H
#define org_apache_lucene_index_ReaderManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class DirectoryReader;
      }
      namespace store {
        class Directory;
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

        class ReaderManager : public ::org::apache::lucene::search::ReferenceManager {
        public:
          enum {
            mid_init$_2e261ef2,
            mid_init$_7015519a,
            mid_decRef_1e43081e,
            mid_getRefCount_1e430801,
            mid_tryIncRef_1e430812,
            mid_refreshIfNeeded_5bb3c60f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ReaderManager(const ReaderManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          ReaderManager(const ::org::apache::lucene::store::Directory &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &, jboolean);
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
        extern PyTypeObject PY_TYPE(ReaderManager);

        class t_ReaderManager {
        public:
          PyObject_HEAD
          ReaderManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReaderManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReaderManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReaderManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
