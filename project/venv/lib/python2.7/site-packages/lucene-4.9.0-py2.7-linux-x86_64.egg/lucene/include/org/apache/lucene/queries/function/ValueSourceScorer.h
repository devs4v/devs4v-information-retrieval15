#ifndef org_apache_lucene_queries_function_ValueSourceScorer_H
#define org_apache_lucene_queries_function_ValueSourceScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
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
      namespace queries {
        namespace function {

          class ValueSourceScorer : public ::org::apache::lucene::search::Scorer {
          public:
            enum {
              mid_advance_39c7bd23,
              mid_cost_54c6a17a,
              mid_docID_54c6a179,
              mid_freq_54c6a179,
              mid_getReader_94bbd010,
              mid_matches_39c7bd30,
              mid_matchesValue_39c7bd30,
              mid_nextDoc_54c6a179,
              mid_score_54c6a176,
              mid_setCheckDeletes_bb0c767f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSourceScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ValueSourceScorer(const ValueSourceScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint freq() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jboolean matches(jint) const;
            jboolean matchesValue(jint) const;
            jint nextDoc() const;
            jfloat score() const;
            void setCheckDeletes(jboolean) const;
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
      namespace queries {
        namespace function {
          extern PyTypeObject PY_TYPE(ValueSourceScorer);

          class t_ValueSourceScorer {
          public:
            PyObject_HEAD
            ValueSourceScorer object;
            static PyObject *wrap_Object(const ValueSourceScorer&);
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
