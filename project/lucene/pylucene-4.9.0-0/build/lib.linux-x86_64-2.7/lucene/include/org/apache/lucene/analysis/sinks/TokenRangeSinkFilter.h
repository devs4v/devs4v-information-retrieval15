#ifndef org_apache_lucene_analysis_sinks_TokenRangeSinkFilter_H
#define org_apache_lucene_analysis_sinks_TokenRangeSinkFilter_H

#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter$SinkFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
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

          class TokenRangeSinkFilter : public ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter {
          public:
            enum {
              mid_init$_d8d154a6,
              mid_accept_aea2d6e6,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenRangeSinkFilter(jobject obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenRangeSinkFilter(const TokenRangeSinkFilter& obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {}

            TokenRangeSinkFilter(jint, jint);

            jboolean accept(const ::org::apache::lucene::util::AttributeSource &) const;
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
          extern PyTypeObject PY_TYPE(TokenRangeSinkFilter);

          class t_TokenRangeSinkFilter {
          public:
            PyObject_HEAD
            TokenRangeSinkFilter object;
            static PyObject *wrap_Object(const TokenRangeSinkFilter&);
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
