#ifndef org_apache_lucene_search_CachingCollector_H
#define org_apache_lucene_search_CachingCollector_H

#include "org/apache/lucene/search/Collector.h"

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CachingCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_create_e449836e,
            mid_create_69c8fe09,
            mid_create_e9d072d8,
            mid_isCached_54c6a16a,
            mid_replay_77379ce0,
            mid_setNextReader_a6f59947,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CachingCollector(const CachingCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          jboolean acceptsDocsOutOfOrder() const;
          static CachingCollector create(jboolean, jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jint);
          jboolean isCached() const;
          void replay(const ::org::apache::lucene::search::Collector &) const;
          void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
        extern PyTypeObject PY_TYPE(CachingCollector);

        class t_CachingCollector {
        public:
          PyObject_HEAD
          CachingCollector object;
          static PyObject *wrap_Object(const CachingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
