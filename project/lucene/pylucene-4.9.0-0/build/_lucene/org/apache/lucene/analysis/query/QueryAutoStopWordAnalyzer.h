#ifndef org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H
#define org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace index {
        class Term;
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
    class Collection;
  }
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
      namespace analysis {
        namespace query {

          class QueryAutoStopWordAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
          public:
            enum {
              mid_init$_f0ed586e,
              mid_init$_1ec7a0cb,
              mid_init$_4a9ca32c,
              mid_init$_560944dd,
              mid_init$_2db3c3ea,
              mid_getStopWords_2b86e588,
              mid_getStopWords_1f6a174f,
              mid_getWrappedAnalyzer_29a2299f,
              mid_wrapComponents_46d74455,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryAutoStopWordAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryAutoStopWordAnalyzer(const QueryAutoStopWordAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            static jfloat defaultMaxDocFreqPercent;

            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jint);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jint);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jfloat);

            JArray< ::org::apache::lucene::index::Term > getStopWords() const;
            JArray< ::java::lang::String > getStopWords(const ::java::lang::String &) const;
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
      namespace analysis {
        namespace query {
          extern PyTypeObject PY_TYPE(QueryAutoStopWordAnalyzer);

          class t_QueryAutoStopWordAnalyzer {
          public:
            PyObject_HEAD
            QueryAutoStopWordAnalyzer object;
            static PyObject *wrap_Object(const QueryAutoStopWordAnalyzer&);
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
