#ifndef org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H
#define org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H

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
          class WeightedSpanTerm;
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
    class Class;
    class String;
  }
  namespace util {
    class Map;
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

          class WeightedSpanTermExtractor : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_5fdc3f48,
              mid_getExpandMultiTermQuery_54c6a16a,
              mid_getTokenStream_71f550c9,
              mid_getWeightedSpanTerms_2b00c132,
              mid_getWeightedSpanTerms_4bedc0dc,
              mid_getWeightedSpanTermsWithScores_d44049f9,
              mid_isCachedTokenStream_54c6a16a,
              mid_setExpandMultiTermQuery_bb0c767f,
              mid_setWrapIfNotCachingTokenFilter_bb0c767f,
              mid_extract_1ecdc9cb,
              mid_extractUnknownQuery_1ecdc9cb,
              mid_extractWeightedSpanTerms_66aae95d,
              mid_mustRewriteQuery_056c189b,
              mid_extractWeightedTerms_f386227d,
              mid_fieldNameComparator_5fdc3f44,
              mid_getLeafContext_c2ef2576,
              mid_collectSpanQueryFields_33bf20d1,
              mid_setMaxDocCharsToAnalyze_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTermExtractor(const WeightedSpanTermExtractor& obj) : ::java::lang::Object(obj) {}

            WeightedSpanTermExtractor();
            WeightedSpanTermExtractor(const ::java::lang::String &);

            jboolean getExpandMultiTermQuery() const;
            ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::util::Map getWeightedSpanTermsWithScores(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &) const;
            jboolean isCachedTokenStream() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
          extern PyTypeObject PY_TYPE(WeightedSpanTermExtractor);

          class t_WeightedSpanTermExtractor {
          public:
            PyObject_HEAD
            WeightedSpanTermExtractor object;
            static PyObject *wrap_Object(const WeightedSpanTermExtractor&);
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
