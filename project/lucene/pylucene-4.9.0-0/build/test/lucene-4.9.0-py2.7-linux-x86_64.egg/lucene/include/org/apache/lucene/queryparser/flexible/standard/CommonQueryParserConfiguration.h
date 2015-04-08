#ifndef org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H
#define org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
      namespace document {
        class DateTools$Resolution;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            class CommonQueryParserConfiguration : public ::java::lang::Object {
            public:
              enum {
                mid_getAllowLeadingWildcard_54c6a16a,
                mid_getAnalyzer_347f60a9,
                mid_getEnablePositionIncrements_54c6a16a,
                mid_getFuzzyMinSim_54c6a176,
                mid_getFuzzyPrefixLength_54c6a179,
                mid_getLocale_8bb22876,
                mid_getLowercaseExpandedTerms_54c6a16a,
                mid_getMultiTermRewriteMethod_8919154b,
                mid_getPhraseSlop_54c6a179,
                mid_getTimeZone_6cce40e5,
                mid_setAllowLeadingWildcard_bb0c767f,
                mid_setDateResolution_285c1498,
                mid_setEnablePositionIncrements_bb0c767f,
                mid_setFuzzyMinSim_06298cab,
                mid_setFuzzyPrefixLength_39c7bd3c,
                mid_setLocale_56b0e4b3,
                mid_setLowercaseExpandedTerms_bb0c767f,
                mid_setMultiTermRewriteMethod_c3c3909e,
                mid_setPhraseSlop_39c7bd3c,
                mid_setTimeZone_f7b32d20,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonQueryParserConfiguration(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              CommonQueryParserConfiguration(const CommonQueryParserConfiguration& obj) : ::java::lang::Object(obj) {}

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jboolean getEnablePositionIncrements() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              jboolean getLowercaseExpandedTerms() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::TimeZone getTimeZone() const;
              void setAllowLeadingWildcard(jboolean) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setEnablePositionIncrements(jboolean) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            extern PyTypeObject PY_TYPE(CommonQueryParserConfiguration);

            class t_CommonQueryParserConfiguration {
            public:
              PyObject_HEAD
              CommonQueryParserConfiguration object;
              static PyObject *wrap_Object(const CommonQueryParserConfiguration&);
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
