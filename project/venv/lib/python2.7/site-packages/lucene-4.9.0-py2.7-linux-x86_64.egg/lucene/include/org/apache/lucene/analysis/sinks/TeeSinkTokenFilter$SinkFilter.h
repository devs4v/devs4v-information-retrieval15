#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkFilter_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkFilter_H

#include "java/lang/Object.h"

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

          class TeeSinkTokenFilter$SinkFilter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_accept_aea2d6e6,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter$SinkFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter$SinkFilter(const TeeSinkTokenFilter$SinkFilter& obj) : ::java::lang::Object(obj) {}

            TeeSinkTokenFilter$SinkFilter();

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
          extern PyTypeObject PY_TYPE(TeeSinkTokenFilter$SinkFilter);

          class t_TeeSinkTokenFilter$SinkFilter {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter$SinkFilter object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter$SinkFilter&);
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
