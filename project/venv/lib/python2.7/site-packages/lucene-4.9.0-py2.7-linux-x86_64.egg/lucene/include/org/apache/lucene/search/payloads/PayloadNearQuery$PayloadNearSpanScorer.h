#ifndef org_apache_lucene_search_payloads_PayloadNearQuery$PayloadNearSpanScorer_H
#define org_apache_lucene_search_payloads_PayloadNearQuery$PayloadNearSpanScorer_H

#include "org/apache/lucene/search/spans/SpanScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class Spans;
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

          class PayloadNearQuery$PayloadNearSpanScorer : public ::org::apache::lucene::search::spans::SpanScorer {
          public:
            enum {
              mid_getPayloads_a306eb3e,
              mid_score_54c6a176,
              mid_setFreqCurrentDoc_54c6a16a,
              mid_processPayloads_c09a1e75,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadNearQuery$PayloadNearSpanScorer(jobject obj) : ::org::apache::lucene::search::spans::SpanScorer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadNearQuery$PayloadNearSpanScorer(const PayloadNearQuery$PayloadNearSpanScorer& obj) : ::org::apache::lucene::search::spans::SpanScorer(obj) {}

            void getPayloads(const JArray< ::org::apache::lucene::search::spans::Spans > &) const;
            jfloat score() const;
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
          extern PyTypeObject PY_TYPE(PayloadNearQuery$PayloadNearSpanScorer);

          class t_PayloadNearQuery$PayloadNearSpanScorer {
          public:
            PyObject_HEAD
            PayloadNearQuery$PayloadNearSpanScorer object;
            static PyObject *wrap_Object(const PayloadNearQuery$PayloadNearSpanScorer&);
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
