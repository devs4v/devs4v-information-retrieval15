#ifndef org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H
#define org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H

#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
      namespace document {
        class DateTools$Resolution;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
          namespace standard {
            class CommonQueryParserConfiguration;
            namespace config {
              class StandardQueryConfigHandler$Operator;
              class NumericConfig;
            }
          }
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
    class Map;
  }
  namespace lang {
    class CharSequence;
    class Float;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            class StandardQueryParser : public ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_31619410,
                mid_getAllowLeadingWildcard_54c6a16a,
                mid_getAnalyzer_347f60a9,
                mid_getDateResolution_e0474751,
                mid_getDateResolutionMap_db60befd,
                mid_getDefaultOperator_61148a0b,
                mid_getEnablePositionIncrements_54c6a16a,
                mid_getFieldsBoost_db60befd,
                mid_getFuzzyMinSim_54c6a176,
                mid_getFuzzyPrefixLength_54c6a179,
                mid_getLocale_8bb22876,
                mid_getLowercaseExpandedTerms_54c6a16a,
                mid_getMultiFields_2c0596de,
                mid_getMultiTermRewriteMethod_8919154b,
                mid_getNumericConfigMap_db60befd,
                mid_getPhraseSlop_54c6a179,
                mid_getTimeZone_6cce40e5,
                mid_parse_38d6e77e,
                mid_setAllowLeadingWildcard_bb0c767f,
                mid_setAnalyzer_31619410,
                mid_setDateResolution_285c1498,
                mid_setDateResolution_4c9e2b1c,
                mid_setDateResolutionMap_4c9e2b1c,
                mid_setDefaultOperator_3de2d36e,
                mid_setDefaultPhraseSlop_39c7bd3c,
                mid_setEnablePositionIncrements_bb0c767f,
                mid_setFieldsBoost_4c9e2b1c,
                mid_setFuzzyMinSim_06298cab,
                mid_setFuzzyPrefixLength_39c7bd3c,
                mid_setLocale_56b0e4b3,
                mid_setLowercaseExpandedTerms_bb0c767f,
                mid_setMultiFields_2c0596de,
                mid_setMultiTermRewriteMethod_c3c3909e,
                mid_setNumericConfigMap_4c9e2b1c,
                mid_setPhraseSlop_39c7bd3c,
                mid_setTimeZone_f7b32d20,
                mid_toString_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StandardQueryParser(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              StandardQueryParser(const StandardQueryParser& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {}

              StandardQueryParser();
              StandardQueryParser(const ::org::apache::lucene::analysis::Analyzer &);

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              ::org::apache::lucene::document::DateTools$Resolution getDateResolution() const;
              ::java::util::Map getDateResolutionMap() const;
              ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator getDefaultOperator() const;
              jboolean getEnablePositionIncrements() const;
              ::java::util::Map getFieldsBoost() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              jboolean getLowercaseExpandedTerms() const;
              void getMultiFields(const JArray< ::java::lang::CharSequence > &) const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              ::java::util::Map getNumericConfigMap() const;
              jint getPhraseSlop() const;
              ::java::util::TimeZone getTimeZone() const;
              ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setAllowLeadingWildcard(jboolean) const;
              void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setDateResolution(const ::java::util::Map &) const;
              void setDateResolutionMap(const ::java::util::Map &) const;
              void setDefaultOperator(const ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator &) const;
              void setDefaultPhraseSlop(jint) const;
              void setEnablePositionIncrements(jboolean) const;
              void setFieldsBoost(const ::java::util::Map &) const;
              void setFuzzyMinSim(jfloat) const;
              void setFuzzyPrefixLength(jint) const;
              void setLocale(const ::java::util::Locale &) const;
              void setLowercaseExpandedTerms(jboolean) const;
              void setMultiFields(const JArray< ::java::lang::CharSequence > &) const;
              void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
              void setNumericConfigMap(const ::java::util::Map &) const;
              void setPhraseSlop(jint) const;
              void setTimeZone(const ::java::util::TimeZone &) const;
              ::java::lang::String toString() const;
            };
          }
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
        namespace flexible {
          namespace standard {
            extern PyTypeObject PY_TYPE(StandardQueryParser);

            class t_StandardQueryParser {
            public:
              PyObject_HEAD
              StandardQueryParser object;
              static PyObject *wrap_Object(const StandardQueryParser&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
