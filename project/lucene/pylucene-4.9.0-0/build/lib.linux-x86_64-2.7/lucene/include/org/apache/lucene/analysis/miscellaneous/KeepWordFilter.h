#ifndef org_apache_lucene_analysis_miscellaneous_KeepWordFilter_H
#define org_apache_lucene_analysis_miscellaneous_KeepWordFilter_H

#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class KeepWordFilter : public ::org::apache::lucene::analysis::util::FilteringTokenFilter {
          public:
            enum {
              mid_init$_e67dd59e,
              mid_init$_c97b7f85,
              mid_accept_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeepWordFilter(jobject obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            KeepWordFilter(const KeepWordFilter& obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {}

            KeepWordFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            KeepWordFilter(const ::org::apache::lucene::util::Version &, jboolean, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            jboolean accept() const;
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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(KeepWordFilter);

          class t_KeepWordFilter {
          public:
            PyObject_HEAD
            KeepWordFilter object;
            static PyObject *wrap_Object(const KeepWordFilter&);
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
