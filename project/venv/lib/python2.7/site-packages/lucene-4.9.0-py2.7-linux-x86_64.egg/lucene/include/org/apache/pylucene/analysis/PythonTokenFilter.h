#ifndef org_apache_pylucene_analysis_PythonTokenFilter_H
#define org_apache_pylucene_analysis_PythonTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
        public:
          enum {
            mid_init$_c7c794dc,
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

          explicit PythonTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonTokenFilter(const PythonTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          PythonTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        extern PyTypeObject PY_TYPE(PythonTokenFilter);

        class t_PythonTokenFilter {
        public:
          PyObject_HEAD
          PythonTokenFilter object;
          static PyObject *wrap_Object(const PythonTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
