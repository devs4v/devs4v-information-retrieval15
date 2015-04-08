#ifndef org_apache_lucene_search_spans_SpanScorer_H
#define org_apache_lucene_search_spans_SpanScorer_H

#include "org/apache/lucene/search/Scorer.h"

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

          class SpanScorer : public ::org::apache::lucene::search::Scorer {
          public:
            enum {
              mid_advance_39c7bd23,
              mid_cost_54c6a17a,
              mid_docID_54c6a179,
              mid_freq_54c6a179,
              mid_nextDoc_54c6a179,
              mid_score_54c6a176,
              mid_sloppyFreq_54c6a176,
              mid_setFreqCurrentDoc_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanScorer(const SpanScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint freq() const;
            jint nextDoc() const;
            jfloat score() const;
            jfloat sloppyFreq() const;
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
          extern PyTypeObject PY_TYPE(SpanScorer);

          class t_SpanScorer {
          public:
            PyObject_HEAD
            SpanScorer object;
            static PyObject *wrap_Object(const SpanScorer&);
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
