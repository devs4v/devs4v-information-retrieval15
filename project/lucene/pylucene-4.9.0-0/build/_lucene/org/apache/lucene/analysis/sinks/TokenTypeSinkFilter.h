#ifndef org_apache_lucene_analysis_sinks_TokenTypeSinkFilter_H
#define org_apache_lucene_analysis_sinks_TokenTypeSinkFilter_H

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {

          class TokenTypeSinkFilter : public ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter {
          public:
            enum {
              mid_init$_5fdc3f48,
              mid_accept_aea2d6e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenTypeSinkFilter(jobject obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenTypeSinkFilter(const TokenTypeSinkFilter& obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {}

            TokenTypeSinkFilter(const ::java::lang::String &);

            jboolean accept(const ::org::apache::lucene::util::AttributeSource &) const;
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
          extern PyTypeObject PY_TYPE(TokenTypeSinkFilter);

          class t_TokenTypeSinkFilter {
          public:
            PyObject_HEAD
            TokenTypeSinkFilter object;
            static PyObject *wrap_Object(const TokenTypeSinkFilter&);
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
