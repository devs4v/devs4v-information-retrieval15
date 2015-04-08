#ifndef org_apache_lucene_index_IndexCommit_H
#define org_apache_lucene_index_IndexCommit_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class Comparable;
    class String;
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

        class IndexCommit : public ::java::lang::Object {
        public:
          enum {
            mid_compareTo_fecc65cc,
            mid_delete_54c6a166,
            mid_equals_290588e2,
            mid_getDirectory_1f3934bb,
            mid_getFileNames_2d2d7de4,
            mid_getGeneration_54c6a17a,
            mid_getSegmentCount_54c6a179,
            mid_getSegmentsFileName_14c7b5c5,
            mid_getUserData_db60befd,
            mid_hashCode_54c6a179,
            mid_isDeleted_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexCommit(const IndexCommit& obj) : ::java::lang::Object(obj) {}

          jint compareTo(const IndexCommit &) const;
          void delete$() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::util::Collection getFileNames() const;
          jlong getGeneration() const;
          jint getSegmentCount() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jint hashCode() const;
          jboolean isDeleted() const;
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
        extern PyTypeObject PY_TYPE(IndexCommit);

        class t_IndexCommit {
        public:
          PyObject_HEAD
          IndexCommit object;
          static PyObject *wrap_Object(const IndexCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
