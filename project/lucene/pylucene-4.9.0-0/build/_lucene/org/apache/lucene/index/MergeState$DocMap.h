#ifndef org_apache_lucene_index_MergeState$DocMap_H
#define org_apache_lucene_index_MergeState$DocMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReader;
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

        class MergeState$DocMap : public ::java::lang::Object {
        public:
          enum {
            mid_build_a4668aa1,
            mid_get_39c7bd23,
            mid_hasDeletions_54c6a16a,
            mid_maxDoc_54c6a179,
            mid_numDeletedDocs_54c6a179,
            mid_numDocs_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeState$DocMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergeState$DocMap(const MergeState$DocMap& obj) : ::java::lang::Object(obj) {}

          static MergeState$DocMap build(const ::org::apache::lucene::index::AtomicReader &);
          jint get(jint) const;
          jboolean hasDeletions() const;
          jint maxDoc() const;
          jint numDeletedDocs() const;
          jint numDocs() const;
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
        extern PyTypeObject PY_TYPE(MergeState$DocMap);

        class t_MergeState$DocMap {
        public:
          PyObject_HEAD
          MergeState$DocMap object;
          static PyObject *wrap_Object(const MergeState$DocMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
