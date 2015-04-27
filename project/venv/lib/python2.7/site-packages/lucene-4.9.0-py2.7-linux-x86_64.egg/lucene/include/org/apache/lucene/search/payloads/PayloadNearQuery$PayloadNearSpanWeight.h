#ifndef org_apache_lucene_search_payloads_PayloadNearQuery$PayloadNearSpanWeight_H
#define org_apache_lucene_search_payloads_PayloadNearQuery$PayloadNearSpanWeight_H

#include "org/apache/lucene/search/spans/SpanWeight.h"

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
        class Explanation;
        class Scorer;
        namespace spans {
          class SpanQuery;
        }
        namespace payloads {
          class PayloadNearQuery;
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
        namespace payloads {

          class PayloadNearQuery$PayloadNearSpanWeight : public ::org::apache::lucene::search::spans::SpanWeight {
          public:
            enum {
              mid_init$_a7d11f1c,
              mid_explain_6ad94adc,
              mid_scorer_3869ad24,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadNearQuery$PayloadNearSpanWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadNearQuery$PayloadNearSpanWeight(const PayloadNearQuery$PayloadNearSpanWeight& obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {}

            PayloadNearQuery$PayloadNearSpanWeight(const ::org::apache::lucene::search::payloads::PayloadNearQuery &, const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::IndexSearcher &);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::AtomicReaderContext &, jint) const;
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
        namespace payloads {
          extern PyTypeObject PY_TYPE(PayloadNearQuery$PayloadNearSpanWeight);

          class t_PayloadNearQuery$PayloadNearSpanWeight {
          public:
            PyObject_HEAD
            PayloadNearQuery$PayloadNearSpanWeight object;
            static PyObject *wrap_Object(const PayloadNearQuery$PayloadNearSpanWeight&);
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
