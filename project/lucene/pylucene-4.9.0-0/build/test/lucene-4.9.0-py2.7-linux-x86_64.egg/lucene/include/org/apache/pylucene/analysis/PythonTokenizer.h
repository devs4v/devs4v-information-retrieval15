#ifndef org_apache_pylucene_analysis_PythonTokenizer_H
#define org_apache_pylucene_analysis_PythonTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
        public:
          enum {
            mid_init$_cf2e3c10,
            mid_finalize_54c6a166,
            mid_incrementToken_54c6a16a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonTokenizer(const PythonTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

          PythonTokenizer(const ::java::io::Reader &);

          void finalize() const;
          jboolean incrementToken() const;
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
        extern PyTypeObject PY_TYPE(PythonTokenizer);

        class t_PythonTokenizer {
        public:
          PyObject_HEAD
          PythonTokenizer object;
          static PyObject *wrap_Object(const PythonTokenizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
