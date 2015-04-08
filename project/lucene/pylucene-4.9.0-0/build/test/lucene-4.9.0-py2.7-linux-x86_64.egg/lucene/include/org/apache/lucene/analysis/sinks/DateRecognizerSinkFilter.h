#ifndef org_apache_lucene_analysis_sinks_DateRecognizerSinkFilter_H
#define org_apache_lucene_analysis_sinks_DateRecognizerSinkFilter_H

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
  namespace text {
    class DateFormat;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {

          class DateRecognizerSinkFilter : public ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_0105dadb,
              mid_accept_aea2d6e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateRecognizerSinkFilter(jobject obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DateRecognizerSinkFilter(const DateRecognizerSinkFilter& obj) : ::org::apache::lucene::analysis::sinks::TeeSinkTokenFilter$SinkFilter(obj) {}

            static ::java::lang::String *DATE_TYPE;

            DateRecognizerSinkFilter();
            DateRecognizerSinkFilter(const ::java::text::DateFormat &);

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
          extern PyTypeObject PY_TYPE(DateRecognizerSinkFilter);

          class t_DateRecognizerSinkFilter {
          public:
            PyObject_HEAD
            DateRecognizerSinkFilter object;
            static PyObject *wrap_Object(const DateRecognizerSinkFilter&);
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
