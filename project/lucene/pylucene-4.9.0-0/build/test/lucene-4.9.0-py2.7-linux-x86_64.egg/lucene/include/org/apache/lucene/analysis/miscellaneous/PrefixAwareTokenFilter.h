#ifndef org_apache_lucene_analysis_miscellaneous_PrefixAwareTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_PrefixAwareTokenFilter_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Token;
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
        namespace miscellaneous {

          class PrefixAwareTokenFilter : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_init$_74ceae3e,
              mid_close_54c6a166,
              mid_end_54c6a166,
              mid_getPrefix_71f550c9,
              mid_getSuffix_71f550c9,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setPrefix_c7c794dc,
              mid_setSuffix_c7c794dc,
              mid_updateSuffixToken_a810a20b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrefixAwareTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PrefixAwareTokenFilter(const PrefixAwareTokenFilter& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            PrefixAwareTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::TokenStream &);

            void close() const;
            void end() const;
            ::org::apache::lucene::analysis::TokenStream getPrefix() const;
            ::org::apache::lucene::analysis::TokenStream getSuffix() const;
            jboolean incrementToken() const;
            void reset() const;
            void setPrefix(const ::org::apache::lucene::analysis::TokenStream &) const;
            void setSuffix(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::Token updateSuffixToken(const ::org::apache::lucene::analysis::Token &, const ::org::apache::lucene::analysis::Token &) const;
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
          extern PyTypeObject PY_TYPE(PrefixAwareTokenFilter);

          class t_PrefixAwareTokenFilter {
          public:
            PyObject_HEAD
            PrefixAwareTokenFilter object;
            static PyObject *wrap_Object(const PrefixAwareTokenFilter&);
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
