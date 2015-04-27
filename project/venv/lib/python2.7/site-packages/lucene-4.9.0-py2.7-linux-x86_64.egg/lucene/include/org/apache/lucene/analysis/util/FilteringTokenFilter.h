#ifndef org_apache_lucene_analysis_util_FilteringTokenFilter_H
#define org_apache_lucene_analysis_util_FilteringTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
        namespace util {

          class FilteringTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_8f50e725,
              mid_init$_f31dee3a,
              mid_end_54c6a166,
              mid_getEnablePositionIncrements_54c6a16a,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setEnablePositionIncrements_bb0c767f,
              mid_accept_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FilteringTokenFilter(const FilteringTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            FilteringTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);
            FilteringTokenFilter(const ::org::apache::lucene::util::Version &, jboolean, const ::org::apache::lucene::analysis::TokenStream &);

            void end() const;
            jboolean getEnablePositionIncrements() const;
            jboolean incrementToken() const;
            void reset() const;
            void setEnablePositionIncrements(jboolean) const;
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
        namespace util {
          extern PyTypeObject PY_TYPE(FilteringTokenFilter);

          class t_FilteringTokenFilter {
          public:
            PyObject_HEAD
            FilteringTokenFilter object;
            static PyObject *wrap_Object(const FilteringTokenFilter&);
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
