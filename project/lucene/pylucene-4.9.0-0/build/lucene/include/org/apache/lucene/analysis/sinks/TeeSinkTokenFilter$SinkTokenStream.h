#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkTokenStream_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

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
        namespace sinks {

          class TeeSinkTokenFilter$SinkTokenStream : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter$SinkTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter$SinkTokenStream(const TeeSinkTokenFilter$SinkTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            void end() const;
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
      namespace analysis {
        namespace sinks {
          extern PyTypeObject PY_TYPE(TeeSinkTokenFilter$SinkTokenStream);

          class t_TeeSinkTokenFilter$SinkTokenStream {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter$SinkTokenStream object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter$SinkTokenStream&);
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
