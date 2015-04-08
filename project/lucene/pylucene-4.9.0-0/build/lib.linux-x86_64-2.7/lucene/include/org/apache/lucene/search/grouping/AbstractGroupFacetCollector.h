#ifndef org_apache_lucene_search_grouping_AbstractGroupFacetCollector_H
#define org_apache_lucene_search_grouping_AbstractGroupFacetCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        namespace grouping {
          class AbstractGroupFacetCollector$GroupedFacetResult;
        }
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
        namespace grouping {

          class AbstractGroupFacetCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_mergeSegmentResults_e901ef94,
              mid_setScorer_8be0880c,
              mid_createSegmentResult_d8ccc374,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractGroupFacetCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractGroupFacetCollector(const AbstractGroupFacetCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            jboolean acceptsDocsOutOfOrder() const;
            ::org::apache::lucene::search::grouping::AbstractGroupFacetCollector$GroupedFacetResult mergeSegmentResults(jint, jint, jboolean) const;
            void setScorer(const ::org::apache::lucene::search::Scorer &) const;
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
        namespace grouping {
          extern PyTypeObject PY_TYPE(AbstractGroupFacetCollector);

          class t_AbstractGroupFacetCollector {
          public:
            PyObject_HEAD
            AbstractGroupFacetCollector object;
            static PyObject *wrap_Object(const AbstractGroupFacetCollector&);
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
