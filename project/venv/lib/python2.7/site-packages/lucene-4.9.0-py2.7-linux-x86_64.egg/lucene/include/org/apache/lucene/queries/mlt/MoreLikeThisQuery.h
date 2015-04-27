#ifndef org_apache_lucene_queries_mlt_MoreLikeThisQuery_H
#define org_apache_lucene_queries_mlt_MoreLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
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
    class Object;
    class Class;
    class String;
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
        namespace mlt {

          class MoreLikeThisQuery : public ::org::apache::lucene::search::Query {
          public:
            enum {
              mid_init$_e36f88de,
              mid_equals_290588e2,
              mid_getAnalyzer_347f60a9,
              mid_getLikeText_14c7b5c5,
              mid_getMaxQueryTerms_54c6a179,
              mid_getMinDocFreq_54c6a179,
              mid_getMinTermFrequency_54c6a179,
              mid_getMoreLikeFields_2e6d5245,
              mid_getPercentTermsToMatch_54c6a176,
              mid_getStopWords_03e99967,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_setAnalyzer_31619410,
              mid_setLikeText_5fdc3f48,
              mid_setMaxQueryTerms_39c7bd3c,
              mid_setMinDocFreq_39c7bd3c,
              mid_setMinTermFrequency_39c7bd3c,
              mid_setMoreLikeFields_4dd4540c,
              mid_setPercentTermsToMatch_06298cab,
              mid_setStopWords_fb4f2b26,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThisQuery(const MoreLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            MoreLikeThisQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            ::java::lang::String getLikeText() const;
            jint getMaxQueryTerms() const;
            jint getMinDocFreq() const;
            jint getMinTermFrequency() const;
            JArray< ::java::lang::String > getMoreLikeFields() const;
            jfloat getPercentTermsToMatch() const;
            ::java::util::Set getStopWords() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setLikeText(const ::java::lang::String &) const;
            void setMaxQueryTerms(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFrequency(jint) const;
            void setMoreLikeFields(const JArray< ::java::lang::String > &) const;
            void setPercentTermsToMatch(jfloat) const;
            void setStopWords(const ::java::util::Set &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyTypeObject PY_TYPE(MoreLikeThisQuery);

          class t_MoreLikeThisQuery {
          public:
            PyObject_HEAD
            MoreLikeThisQuery object;
            static PyObject *wrap_Object(const MoreLikeThisQuery&);
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
