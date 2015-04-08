#ifndef org_apache_lucene_analysis_miscellaneous_PrefixAndSuffixAwareTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_PrefixAndSuffixAwareTokenFilter_H

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

          class PrefixAndSuffixAwareTokenFilter : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_init$_63d58924,
              mid_close_54c6a166,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_updateInputToken_a810a20b,
              mid_updateSuffixToken_a810a20b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrefixAndSuffixAwareTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PrefixAndSuffixAwareTokenFilter(const PrefixAndSuffixAwareTokenFilter& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            PrefixAndSuffixAwareTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::TokenStream &);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            ::org::apache::lucene::analysis::Token updateInputToken(const ::org::apache::lucene::analysis::Token &, const ::org::apache::lucene::analysis::Token &) const;
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
          extern PyTypeObject PY_TYPE(PrefixAndSuffixAwareTokenFilter);

          class t_PrefixAndSuffixAwareTokenFilter {
          public:
            PyObject_HEAD
            PrefixAndSuffixAwareTokenFilter object;
            static PyObject *wrap_Object(const PrefixAndSuffixAwareTokenFilter&);
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
