#ifndef org_apache_lucene_search_highlight_SpanGradientFormatter_H
#define org_apache_lucene_search_highlight_SpanGradientFormatter_H

#include "org/apache/lucene/search/highlight/GradientFormatter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TokenGroup;
        }
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
      namespace search {
        namespace highlight {

          class SpanGradientFormatter : public ::org::apache::lucene::search::highlight::GradientFormatter {
          public:
            enum {
              mid_init$_ecfb0f33,
              mid_highlightTerm_8838cc58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanGradientFormatter(jobject obj) : ::org::apache::lucene::search::highlight::GradientFormatter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanGradientFormatter(const SpanGradientFormatter& obj) : ::org::apache::lucene::search::highlight::GradientFormatter(obj) {}

            SpanGradientFormatter(jfloat, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            ::java::lang::String highlightTerm(const ::java::lang::String &, const ::org::apache::lucene::search::highlight::TokenGroup &) const;
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
          extern PyTypeObject PY_TYPE(SpanGradientFormatter);

          class t_SpanGradientFormatter {
          public:
            PyObject_HEAD
            SpanGradientFormatter object;
            static PyObject *wrap_Object(const SpanGradientFormatter&);
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
