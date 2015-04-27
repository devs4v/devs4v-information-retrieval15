#ifndef org_apache_lucene_queries_mlt_MoreLikeThis_H
#define org_apache_lucene_queries_mlt_MoreLikeThis_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PriorityQueue;
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace similarities {
          class TFIDFSimilarity;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThis : public ::java::lang::Object {
          public:
            enum {
              mid_init$_7d7eaea9,
              mid_init$_ac25be47,
              mid_describeParams_14c7b5c5,
              mid_getAnalyzer_347f60a9,
              mid_getBoostFactor_54c6a176,
              mid_getFieldNames_2e6d5245,
              mid_getMaxDocFreq_54c6a179,
              mid_getMaxNumTokensParsed_54c6a179,
              mid_getMaxQueryTerms_54c6a179,
              mid_getMaxWordLen_54c6a179,
              mid_getMinDocFreq_54c6a179,
              mid_getMinTermFreq_54c6a179,
              mid_getMinWordLen_54c6a179,
              mid_getSimilarity_41a9d5af,
              mid_getStopWords_03e99967,
              mid_isBoost_54c6a16a,
              mid_like_2ad233cc,
              mid_like_8dd03cea,
              mid_like_e557659a,
              mid_retrieveInterestingTerms_d74df9a3,
              mid_retrieveInterestingTerms_bf65abe1,
              mid_retrieveTerms_df466ac9,
              mid_retrieveTerms_ed0c2893,
              mid_setAnalyzer_31619410,
              mid_setBoost_bb0c767f,
              mid_setBoostFactor_06298cab,
              mid_setFieldNames_4dd4540c,
              mid_setMaxDocFreq_39c7bd3c,
              mid_setMaxDocFreqPct_39c7bd3c,
              mid_setMaxNumTokensParsed_39c7bd3c,
              mid_setMaxQueryTerms_39c7bd3c,
              mid_setMaxWordLen_39c7bd3c,
              mid_setMinDocFreq_39c7bd3c,
              mid_setMinTermFreq_39c7bd3c,
              mid_setMinWordLen_39c7bd3c,
              mid_setSimilarity_8af31e2e,
              mid_setStopWords_fb4f2b26,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThis(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThis(const MoreLikeThis& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_BOOST;
            static JArray< ::java::lang::String > *DEFAULT_FIELD_NAMES;
            static jint DEFAULT_MAX_DOC_FREQ;
            static jint DEFAULT_MAX_NUM_TOKENS_PARSED;
            static jint DEFAULT_MAX_QUERY_TERMS;
            static jint DEFAULT_MAX_WORD_LENGTH;
            static jint DEFAULT_MIN_DOC_FREQ;
            static jint DEFAULT_MIN_TERM_FREQ;
            static jint DEFAULT_MIN_WORD_LENGTH;
            static ::java::util::Set *DEFAULT_STOP_WORDS;

            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &);
            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::TFIDFSimilarity &);

            ::java::lang::String describeParams() const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            jfloat getBoostFactor() const;
            JArray< ::java::lang::String > getFieldNames() const;
            jint getMaxDocFreq() const;
            jint getMaxNumTokensParsed() const;
            jint getMaxQueryTerms() const;
            jint getMaxWordLen() const;
            jint getMinDocFreq() const;
            jint getMinTermFreq() const;
            jint getMinWordLen() const;
            ::org::apache::lucene::search::similarities::TFIDFSimilarity getSimilarity() const;
            ::java::util::Set getStopWords() const;
            jboolean isBoost() const;
            ::org::apache::lucene::search::Query like(jint) const;
            ::org::apache::lucene::search::Query like(const ::java::io::Reader &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query like(const ::java::lang::String &, const JArray< ::java::io::Reader > &) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(jint) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(const ::java::io::Reader &, const ::java::lang::String &) const;
            ::org::apache::lucene::util::PriorityQueue retrieveTerms(jint) const;
            ::org::apache::lucene::util::PriorityQueue retrieveTerms(const ::java::io::Reader &, const ::java::lang::String &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setBoost(jboolean) const;
            void setBoostFactor(jfloat) const;
            void setFieldNames(const JArray< ::java::lang::String > &) const;
            void setMaxDocFreq(jint) const;
            void setMaxDocFreqPct(jint) const;
            void setMaxNumTokensParsed(jint) const;
            void setMaxQueryTerms(jint) const;
            void setMaxWordLen(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFreq(jint) const;
            void setMinWordLen(jint) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::TFIDFSimilarity &) const;
            void setStopWords(const ::java::util::Set &) const;
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
        namespace mlt {
          extern PyTypeObject PY_TYPE(MoreLikeThis);

          class t_MoreLikeThis {
          public:
            PyObject_HEAD
            MoreLikeThis object;
            static PyObject *wrap_Object(const MoreLikeThis&);
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
