#ifndef org_apache_lucene_index_MergePolicy$DocMap_H
#define org_apache_lucene_index_MergePolicy$DocMap_H

#include "java/lang/Object.h"

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

        class MergePolicy$DocMap : public ::java::lang::Object {
        public:
          enum {
            mid_map_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$DocMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$DocMap(const MergePolicy$DocMap& obj) : ::java::lang::Object(obj) {}

          jint map(jint) const;
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
        extern PyTypeObject PY_TYPE(MergePolicy$DocMap);

        class t_MergePolicy$DocMap {
        public:
          PyObject_HEAD
          MergePolicy$DocMap object;
          static PyObject *wrap_Object(const MergePolicy$DocMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
