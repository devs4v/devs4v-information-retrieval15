#ifndef org_apache_lucene_search_join_FixedBitSetCachingWrapperFilter_H
#define org_apache_lucene_search_join_FixedBitSetCachingWrapperFilter_H

#include "org/apache/lucene/search/CachingWrapperFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
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
        namespace join {

          class FixedBitSetCachingWrapperFilter : public ::org::apache::lucene::search::CachingWrapperFilter {
          public:
            enum {
              mid_init$_9bb37152,
              mid_docIdSetToCache_5fee2a54,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedBitSetCachingWrapperFilter(jobject obj) : ::org::apache::lucene::search::CachingWrapperFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FixedBitSetCachingWrapperFilter(const FixedBitSetCachingWrapperFilter& obj) : ::org::apache::lucene::search::CachingWrapperFilter(obj) {}

            FixedBitSetCachingWrapperFilter(const ::org::apache::lucene::search::Filter &);
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
      namespace search {
        namespace join {
          extern PyTypeObject PY_TYPE(FixedBitSetCachingWrapperFilter);

          class t_FixedBitSetCachingWrapperFilter {
          public:
            PyObject_HEAD
            FixedBitSetCachingWrapperFilter object;
            static PyObject *wrap_Object(const FixedBitSetCachingWrapperFilter&);
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
