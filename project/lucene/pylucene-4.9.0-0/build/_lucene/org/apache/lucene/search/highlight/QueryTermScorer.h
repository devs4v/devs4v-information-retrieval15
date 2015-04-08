#ifndef org_apache_lucene_search_highlight_QueryTermScorer_H
#define org_apache_lucene_search_highlight_QueryTermScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace highlight {
          class TextFragment;
          class WeightedTerm;
          class Scorer;
        }
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryTermScorer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_0bdf9712,
              mid_init$_6e301113,
              mid_init$_036dd355,
              mid_init$_2e1f8bd4,
              mid_allFragmentsProcessed_54c6a166,
              mid_getFragmentScore_54c6a176,
              mid_getMaxTermWeight_54c6a176,
              mid_getTokenScore_54c6a176,
              mid_init_a65cd6ab,
              mid_startFragment_0335a78a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryTermScorer(const QueryTermScorer& obj) : ::java::lang::Object(obj) {}

            QueryTermScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedTerm > &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            void allFragmentsProcessed() const;
            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
        namespace highlight {
          extern PyTypeObject PY_TYPE(QueryTermScorer);

          class t_QueryTermScorer {
          public:
            PyObject_HEAD
            QueryTermScorer object;
            static PyObject *wrap_Object(const QueryTermScorer&);
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
