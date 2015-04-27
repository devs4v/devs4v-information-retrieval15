#ifndef org_apache_lucene_analysis_CachingTokenFilter_H
#define org_apache_lucene_analysis_CachingTokenFilter_H

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

        class CachingTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
        public:
          enum {
            mid_init$_c7c794dc,
            mid_end_54c6a166,
            mid_incrementToken_54c6a16a,
            mid_reset_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CachingTokenFilter(const CachingTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          CachingTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jboolean incrementToken() const;
          void reset() const;
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
        extern PyTypeObject PY_TYPE(CachingTokenFilter);

        class t_CachingTokenFilter {
        public:
          PyObject_HEAD
          CachingTokenFilter object;
          static PyObject *wrap_Object(const CachingTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
