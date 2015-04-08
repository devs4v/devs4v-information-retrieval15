#ifndef org_apache_lucene_util_WAH8DocIdSet_H
#define org_apache_lucene_util_WAH8DocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class WAH8DocIdSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_cardinality_54c6a179,
            mid_intersect_b06562c3,
            mid_intersect_8ad105f3,
            mid_isCacheable_54c6a16a,
            mid_ramBytesUsed_54c6a17a,
            mid_union_b06562c3,
            mid_union_8ad105f3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WAH8DocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          WAH8DocIdSet(const WAH8DocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          static jint DEFAULT_INDEX_INTERVAL;

          jint cardinality() const;
          static WAH8DocIdSet intersect(const ::java::util::Collection &);
          static WAH8DocIdSet intersect(const ::java::util::Collection &, jint);
          jboolean isCacheable() const;
          jlong ramBytesUsed() const;
          static WAH8DocIdSet union$(const ::java::util::Collection &);
          static WAH8DocIdSet union$(const ::java::util::Collection &, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(WAH8DocIdSet);

        class t_WAH8DocIdSet {
        public:
          PyObject_HEAD
          WAH8DocIdSet object;
          static PyObject *wrap_Object(const WAH8DocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
