#ifndef org_apache_lucene_analysis_shingle_ShingleFilter_H
#define org_apache_lucene_analysis_shingle_ShingleFilter_H

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
    class String;
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
        namespace shingle {

          class ShingleFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_be0a1066,
              mid_init$_d53bcf42,
              mid_init$_7f9e10a8,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setFillerToken_5fdc3f48,
              mid_setMaxShingleSize_39c7bd3c,
              mid_setMinShingleSize_39c7bd3c,
              mid_setOutputUnigrams_bb0c767f,
              mid_setOutputUnigramsIfNoShingles_bb0c767f,
              mid_setTokenSeparator_5fdc3f48,
              mid_setTokenType_5fdc3f48,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ShingleFilter(const ShingleFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *DEFAULT_FILLER_TOKEN;
            static jint DEFAULT_MAX_SHINGLE_SIZE;
            static jint DEFAULT_MIN_SHINGLE_SIZE;
            static ::java::lang::String *DEFAULT_TOKEN_SEPARATOR;
            static ::java::lang::String *DEFAULT_TOKEN_TYPE;

            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setFillerToken(const ::java::lang::String &) const;
            void setMaxShingleSize(jint) const;
            void setMinShingleSize(jint) const;
            void setOutputUnigrams(jboolean) const;
            void setOutputUnigramsIfNoShingles(jboolean) const;
            void setTokenSeparator(const ::java::lang::String &) const;
            void setTokenType(const ::java::lang::String &) const;
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
        namespace shingle {
          extern PyTypeObject PY_TYPE(ShingleFilter);

          class t_ShingleFilter {
          public:
            PyObject_HEAD
            ShingleFilter object;
            static PyObject *wrap_Object(const ShingleFilter&);
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
