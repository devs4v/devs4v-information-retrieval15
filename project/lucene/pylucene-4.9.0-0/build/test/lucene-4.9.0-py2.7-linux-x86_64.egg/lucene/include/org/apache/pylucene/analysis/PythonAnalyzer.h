#ifndef org_apache_pylucene_analysis_PythonAnalyzer_H
#define org_apache_pylucene_analysis_PythonAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
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
    namespace pylucene {
      namespace analysis {

        class PythonAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
        public:
          enum {
            mid_init$_54c6a166,
            mid_createComponents_1be39cae,
            mid_finalize_54c6a166,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonAnalyzer(const PythonAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          PythonAnalyzer();

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &, const ::java::io::Reader &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(PythonAnalyzer);

        class t_PythonAnalyzer {
        public:
          PyObject_HEAD
          PythonAnalyzer object;
          static PyObject *wrap_Object(const PythonAnalyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
