#ifndef org_apache_pylucene_analysis_PythonFilteringTokenFilter_H
#define org_apache_pylucene_analysis_PythonFilteringTokenFilter_H

#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
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

        class PythonFilteringTokenFilter : public ::org::apache::lucene::analysis::util::FilteringTokenFilter {
        public:
          enum {
            mid_init$_8f50e725,
            mid_accept_54c6a16a,
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

          explicit PythonFilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonFilteringTokenFilter(const PythonFilteringTokenFilter& obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {}

          PythonFilteringTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);

          jboolean accept() const;
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
        extern PyTypeObject PY_TYPE(PythonFilteringTokenFilter);

        class t_PythonFilteringTokenFilter {
        public:
          PyObject_HEAD
          PythonFilteringTokenFilter object;
          static PyObject *wrap_Object(const PythonFilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
