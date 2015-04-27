#ifndef org_apache_lucene_search_highlight_SimpleHTMLEncoder_H
#define org_apache_lucene_search_highlight_SimpleHTMLEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Encoder;
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

          class SimpleHTMLEncoder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_encodeText_97a5258f,
              mid_htmlEncode_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleHTMLEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SimpleHTMLEncoder(const SimpleHTMLEncoder& obj) : ::java::lang::Object(obj) {}

            SimpleHTMLEncoder();

            ::java::lang::String encodeText(const ::java::lang::String &) const;
            static ::java::lang::String htmlEncode(const ::java::lang::String &);
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
          extern PyTypeObject PY_TYPE(SimpleHTMLEncoder);

          class t_SimpleHTMLEncoder {
          public:
            PyObject_HEAD
            SimpleHTMLEncoder object;
            static PyObject *wrap_Object(const SimpleHTMLEncoder&);
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
