#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace sinks {
          class TeeSinkTokenFilter$SinkFilter;
          class TeeSinkTokenFilter$SinkTokenStream;
        }
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
        namespace sinks {

          class TeeSinkTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_addSinkTokenStream_4bcd0017,
              mid_consumeAllTokens_54c6a166,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_newSinkTokenStream_17f71d86,
              mid_newSinkTokenStream_714b7637,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter(const TeeSinkTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TeeSinkTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

            void addSinkTokenStream(const ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkTokenStream &) const;
            void consumeAllTokens() const;
            void end() const;
            jboolean incrementToken() const;
            ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkTokenStream newSinkTokenStream() const;
            ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkTokenStream newSinkTokenStream(const ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter &) const;
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
        namespace sinks {
          extern PyTypeObject PY_TYPE(TeeSinkTokenFilter);

          class t_TeeSinkTokenFilter {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter&);
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
