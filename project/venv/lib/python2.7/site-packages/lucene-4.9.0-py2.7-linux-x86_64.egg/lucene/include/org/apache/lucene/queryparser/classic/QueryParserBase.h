#ifndef org_apache_lucene_queryparser_classic_QueryParserBase_H
#define org_apache_lucene_queryparser_classic_QueryParserBase_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
      namespace document {
        class DateTools$Resolution;
      }
      namespace queryparser {
        namespace flexible {
          namespace standard {
            class CommonQueryParserConfiguration;
          }
        }
        namespace classic {
          class QueryParser$Operator;
          class CharStream;
          class ParseException;
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
    class Locale;
    class TimeZone;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserBase : public ::org::apache::lucene::util::QueryBuilder {
          public:
            enum {
              mid_ReInit_24bde9d3,
              mid_TopLevelQuery_fbed2634,
              mid_escape_97a5258f,
              mid_getAllowLeadingWildcard_54c6a16a,
              mid_getAnalyzeRangeTerms_54c6a16a,
              mid_getAutoGeneratePhraseQueries_54c6a16a,
              mid_getDateResolution_65edc44f,
              mid_getDefaultOperator_cb1232dd,
              mid_getField_14c7b5c5,
              mid_getFuzzyMinSim_54c6a176,
              mid_getFuzzyPrefixLength_54c6a179,
              mid_getLocale_8bb22876,
              mid_getLowercaseExpandedTerms_54c6a16a,
              mid_getMultiTermRewriteMethod_8919154b,
              mid_getPhraseSlop_54c6a179,
              mid_getTimeZone_6cce40e5,
              mid_init_504c192d,
              mid_parse_fbed2634,
              mid_setAllowLeadingWildcard_bb0c767f,
              mid_setAnalyzeRangeTerms_bb0c767f,
              mid_setAutoGeneratePhraseQueries_bb0c767f,
              mid_setDateResolution_285c1498,
              mid_setDateResolution_04dea022,
              mid_setDefaultOperator_67ef4614,
              mid_setFuzzyMinSim_06298cab,
              mid_setFuzzyPrefixLength_39c7bd3c,
              mid_setLocale_56b0e4b3,
              mid_setLowercaseExpandedTerms_bb0c767f,
              mid_setMultiTermRewriteMethod_c3c3909e,
              mid_setPhraseSlop_39c7bd3c,
              mid_setTimeZone_f7b32d20,
              mid_getFieldQuery_bd696f55,
              mid_getFieldQuery_c7c8d9a8,
              mid_getRangeQuery_75fd45b6,
              mid_newRangeQuery_75fd45b6,
              mid_getFuzzyQuery_45995161,
              mid_getWildcardQuery_38d6e77e,
              mid_addClause_fea8e09e,
              mid_getBooleanQuery_3d190f1c,
              mid_getBooleanQuery_bdd36d85,
              mid_newFieldQuery_1840ef4b,
              mid_newBooleanClause_e4ef4efe,
              mid_newPrefixQuery_c8bbbdc7,
              mid_newRegexpQuery_c8bbbdc7,
              mid_newFuzzyQuery_6ce03264,
              mid_analyzeMultitermTerm_e6160577,
              mid_newMatchAllDocsQuery_97e3851a,
              mid_newWildcardQuery_c8bbbdc7,
              mid_getRegexpQuery_38d6e77e,
              mid_getPrefixQuery_38d6e77e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParserBase(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryParserBase(const QueryParserBase& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *AND_OPERATOR;
            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *OR_OPERATOR;

            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            static ::java::lang::String escape(const ::java::lang::String &);
            jboolean getAllowLeadingWildcard() const;
            jboolean getAnalyzeRangeTerms() const;
            jboolean getAutoGeneratePhraseQueries() const;
            ::org::apache::lucene::document::DateTools$Resolution getDateResolution(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::classic::QueryParser$Operator getDefaultOperator() const;
            ::java::lang::String getField() const;
            jfloat getFuzzyMinSim() const;
            jint getFuzzyPrefixLength() const;
            ::java::util::Locale getLocale() const;
            jboolean getLowercaseExpandedTerms() const;
            ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
            jint getPhraseSlop() const;
            ::java::util::TimeZone getTimeZone() const;
            void init(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setAllowLeadingWildcard(jboolean) const;
            void setAnalyzeRangeTerms(jboolean) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDateResolution(const ::java::lang::String &, const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDefaultOperator(const ::org::apache::lucene::queryparser::classic::QueryParser$Operator &) const;
            void setFuzzyMinSim(jfloat) const;
            void setFuzzyPrefixLength(jint) const;
            void setLocale(const ::java::util::Locale &) const;
            void setLowercaseExpandedTerms(jboolean) const;
            void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
            void setPhraseSlop(jint) const;
            void setTimeZone(const ::java::util::TimeZone &) const;
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
      namespace queryparser {
        namespace classic {
          extern PyTypeObject PY_TYPE(QueryParserBase);

          class t_QueryParserBase {
          public:
            PyObject_HEAD
            QueryParserBase object;
            static PyObject *wrap_Object(const QueryParserBase&);
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
