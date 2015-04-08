#ifndef org_apache_lucene_index_BufferedUpdatesStream$ApplyDeletesResult_H
#define org_apache_lucene_index_BufferedUpdatesStream$ApplyDeletesResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BufferedUpdatesStream$ApplyDeletesResult : public ::java::lang::Object {
        public:

          enum {
            fid_allDeleted,
            fid_anyDeletes,
            fid_gen,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedUpdatesStream$ApplyDeletesResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BufferedUpdatesStream$ApplyDeletesResult(const BufferedUpdatesStream$ApplyDeletesResult& obj) : ::java::lang::Object(obj) {}

          ::java::util::List _get_allDeleted() const;
          jboolean _get_anyDeletes() const;
          jlong _get_gen() const;
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
        extern PyTypeObject PY_TYPE(BufferedUpdatesStream$ApplyDeletesResult);

        class t_BufferedUpdatesStream$ApplyDeletesResult {
        public:
          PyObject_HEAD
          BufferedUpdatesStream$ApplyDeletesResult object;
          static PyObject *wrap_Object(const BufferedUpdatesStream$ApplyDeletesResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
