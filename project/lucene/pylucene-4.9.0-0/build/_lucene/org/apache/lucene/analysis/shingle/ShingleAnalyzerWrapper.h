#ifndef org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H
#define org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        class Analyzer;
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
      namespace analysis {
        namespace shingle {

          class ShingleAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
          public:
            enum {
              mid_init$_0d96cf33,
              mid_init$_31619410,
              mid_init$_e882998a,
              mid_init$_e55e5adf,
              mid_init$_ad527988,
              mid_init$_05cde3fa,
              mid_getFillerToken_14c7b5c5,
              mid_getMaxShingleSize_54c6a179,
              mid_getMinShingleSize_54c6a179,
              mid_getTokenSeparator_14c7b5c5,
              mid_getWrappedAnalyzer_29a2299f,
              mid_isOutputUnigrams_54c6a16a,
              mid_isOutputUnigramsIfNoShingles_54c6a16a,
              mid_wrapComponents_46d74455,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ShingleAnalyzerWrapper(const ShingleAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            ShingleAnalyzerWrapper(const ::org::apache::lucene::util::Version &);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::util::Version &, jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint, const ::java::lang::String &, jboolean, jboolean, const ::java::lang::String &);

            ::java::lang::String getFillerToken() const;
            jint getMaxShingleSize() const;
            jint getMinShingleSize() const;
            ::java::lang::String getTokenSeparator() const;
            ::org::apache::lucene::analysis::Analyzer getWrappedAnalyzer(const ::java::lang::String &) const;
            jboolean isOutputUnigrams() const;
            jboolean isOutputUnigramsIfNoShingles() const;
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
        namespace shingle {
          extern PyTypeObject PY_TYPE(ShingleAnalyzerWrapper);

          class t_ShingleAnalyzerWrapper {
          public:
            PyObject_HEAD
            ShingleAnalyzerWrapper object;
            static PyObject *wrap_Object(const ShingleAnalyzerWrapper&);
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
