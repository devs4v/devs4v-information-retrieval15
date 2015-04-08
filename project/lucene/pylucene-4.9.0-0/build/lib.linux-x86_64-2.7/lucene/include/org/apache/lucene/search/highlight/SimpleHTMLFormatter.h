#ifndef org_apache_lucene_search_highlight_SimpleHTMLFormatter_H
#define org_apache_lucene_search_highlight_SimpleHTMLFormatter_H

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

          class SimpleHTMLFormatter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_4a264742,
              mid_highlightTerm_8838cc58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleHTMLFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SimpleHTMLFormatter(const SimpleHTMLFormatter& obj) : ::java::lang::Object(obj) {}

            SimpleHTMLFormatter();
            SimpleHTMLFormatter(const ::java::lang::String &, const ::java::lang::String &);

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
          extern PyTypeObject PY_TYPE(SimpleHTMLFormatter);

          class t_SimpleHTMLFormatter {
          public:
            PyObject_HEAD
            SimpleHTMLFormatter object;
            static PyObject *wrap_Object(const SimpleHTMLFormatter&);
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
