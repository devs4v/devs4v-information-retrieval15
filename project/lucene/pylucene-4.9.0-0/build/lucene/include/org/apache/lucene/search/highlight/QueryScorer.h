#ifndef org_apache_lucene_search_highlight_QueryScorer_H
#define org_apache_lucene_search_highlight_QueryScorer_H

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
          class WeightedSpanTerm;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryScorer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_848b72aa,
              mid_init$_6e301113,
              mid_init$_036dd355,
              mid_init$_19eb1b37,
              mid_init$_2e1f8bd4,
              mid_init$_b85926ce,
              mid_getFragmentScore_54c6a176,
              mid_getMaxTermWeight_54c6a176,
              mid_getTokenScore_54c6a176,
              mid_getWeightedSpanTerm_0ac17355,
              mid_init_a65cd6ab,
              mid_isExpandMultiTermQuery_54c6a16a,
              mid_setExpandMultiTermQuery_bb0c767f,
              mid_setMaxDocCharsToAnalyze_39c7bd3c,
              mid_setWrapIfNotCachingTokenFilter_bb0c767f,
              mid_startFragment_0335a78a,
              mid_newTermExtractor_109a36a0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryScorer(const QueryScorer& obj) : ::java::lang::Object(obj) {}

            QueryScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedSpanTerm > &);
            QueryScorer(const ::org::apache::lucene::search::Query &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);

            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::search::highlight::WeightedSpanTerm getWeightedSpanTerm(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            jboolean isExpandMultiTermQuery() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
          extern PyTypeObject PY_TYPE(QueryScorer);

          class t_QueryScorer {
          public:
            PyObject_HEAD
            QueryScorer object;
            static PyObject *wrap_Object(const QueryScorer&);
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
