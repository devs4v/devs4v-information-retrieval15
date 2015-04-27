#ifndef org_apache_lucene_analysis_AnalyzerWrapper_H
#define org_apache_lucene_analysis_AnalyzerWrapper_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AnalyzerWrapper : public ::org::apache::lucene::analysis::Analyzer {
        public:
          enum {
            mid_getOffsetGap_5fdc3f57,
            mid_getPositionIncrementGap_5fdc3f57,
            mid_initReader_d8fb1c81,
            mid_wrapComponents_46d74455,
            mid_createComponents_1be39cae,
            mid_getWrappedAnalyzer_29a2299f,
            mid_wrapReader_d8fb1c81,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AnalyzerWrapper(const AnalyzerWrapper& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(AnalyzerWrapper);

        class t_AnalyzerWrapper {
        public:
          PyObject_HEAD
          AnalyzerWrapper object;
          static PyObject *wrap_Object(const AnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
