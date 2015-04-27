#ifndef org_apache_lucene_index_BufferedUpdatesStream$QueryAndLimit_H
#define org_apache_lucene_index_BufferedUpdatesStream$QueryAndLimit_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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

        class BufferedUpdatesStream$QueryAndLimit : public ::java::lang::Object {
        public:
          enum {
            mid_init$_e29027ff,
            max_mid
          };

          enum {
            fid_limit,
            fid_query,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedUpdatesStream$QueryAndLimit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BufferedUpdatesStream$QueryAndLimit(const BufferedUpdatesStream$QueryAndLimit& obj) : ::java::lang::Object(obj) {}

          jint _get_limit() const;
          ::org::apache::lucene::search::Query _get_query() const;

          BufferedUpdatesStream$QueryAndLimit(const ::org::apache::lucene::search::Query &, jint);
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
        extern PyTypeObject PY_TYPE(BufferedUpdatesStream$QueryAndLimit);

        class t_BufferedUpdatesStream$QueryAndLimit {
        public:
          PyObject_HEAD
          BufferedUpdatesStream$QueryAndLimit object;
          static PyObject *wrap_Object(const BufferedUpdatesStream$QueryAndLimit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
