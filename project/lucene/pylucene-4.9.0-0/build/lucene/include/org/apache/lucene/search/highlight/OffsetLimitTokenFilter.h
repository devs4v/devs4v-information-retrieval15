#ifndef org_apache_lucene_search_highlight_OffsetLimitTokenFilter_H
#define org_apache_lucene_search_highlight_OffsetLimitTokenFilter_H

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
      namespace search {
        namespace highlight {

          class OffsetLimitTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_d53bcf42,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetLimitTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OffsetLimitTokenFilter(const OffsetLimitTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            OffsetLimitTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

            jboolean incrementToken() const;
            void reset() const;
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
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(OffsetLimitTokenFilter);

          class t_OffsetLimitTokenFilter {
          public:
            PyObject_HEAD
            OffsetLimitTokenFilter object;
            static PyObject *wrap_Object(const OffsetLimitTokenFilter&);
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
