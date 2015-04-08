#ifndef org_apache_lucene_search_highlight_GradientFormatter_H
#define org_apache_lucene_search_highlight_GradientFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Formatter;
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

          class GradientFormatter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_ecfb0f33,
              mid_hexToInt_5fdc3f57,
              mid_highlightTerm_8838cc58,
              mid_getForegroundColorString_5ded254a,
              mid_getBackgroundColorString_5ded254a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GradientFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GradientFormatter(const GradientFormatter& obj) : ::java::lang::Object(obj) {}

            GradientFormatter(jfloat, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            static jint hexToInt(const ::java::lang::String &);
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
          extern PyTypeObject PY_TYPE(GradientFormatter);

          class t_GradientFormatter {
          public:
            PyObject_HEAD
            GradientFormatter object;
            static PyObject *wrap_Object(const GradientFormatter&);
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
