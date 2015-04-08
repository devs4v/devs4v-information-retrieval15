#ifndef org_apache_lucene_util_packed_EliasFanoDocIdSet_H
#define org_apache_lucene_util_packed_EliasFanoDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
      namespace util {
        namespace packed {

          class EliasFanoDocIdSet : public ::org::apache::lucene::search::DocIdSet {
          public:
            enum {
              mid_init$_d8d154a6,
              mid_encodeFromDisi_c2b5607d,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_isCacheable_54c6a16a,
              mid_iterator_dc23660c,
              mid_ramBytesUsed_54c6a17a,
              mid_sufficientlySmallerThanBitSet_a7e12ca8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EliasFanoDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EliasFanoDocIdSet(const EliasFanoDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

            EliasFanoDocIdSet(jint, jint);

            void encodeFromDisi(const ::org::apache::lucene::search::DocIdSetIterator &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isCacheable() const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jlong ramBytesUsed() const;
            static jboolean sufficientlySmallerThanBitSet(jlong, jlong);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          extern PyTypeObject PY_TYPE(EliasFanoDocIdSet);

          class t_EliasFanoDocIdSet {
          public:
            PyObject_HEAD
            EliasFanoDocIdSet object;
            static PyObject *wrap_Object(const EliasFanoDocIdSet&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
