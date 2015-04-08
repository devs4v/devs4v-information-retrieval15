#ifndef org_apache_lucene_search_spans_SpanWeight_H
#define org_apache_lucene_search_spans_SpanWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class IndexSearcher;
        class Query;
        class Explanation;
        class Scorer;
        namespace spans {
          class SpanQuery;
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
        namespace spans {

          class SpanWeight : public ::org::apache::lucene::search::Weight {
          public:
            enum {
              mid_init$_917aaae1,
              mid_explain_6ad94adc,
              mid_getQuery_97e3851a,
              mid_getValueForNormalization_54c6a176,
              mid_normalize_f1b0c004,
              mid_scorer_3869ad24,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanWeight(const SpanWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

            SpanWeight(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::IndexSearcher &);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::AtomicReaderContext &, jint) const;
            ::org::apache::lucene::search::Query getQuery() const;
            jfloat getValueForNormalization() const;
            void normalize(jfloat, jfloat) const;
            ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
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
        namespace spans {
          extern PyTypeObject PY_TYPE(SpanWeight);

          class t_SpanWeight {
          public:
            PyObject_HEAD
            SpanWeight object;
            static PyObject *wrap_Object(const SpanWeight&);
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
