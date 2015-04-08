#ifndef org_apache_lucene_search_highlight_NullFragmenter_H
#define org_apache_lucene_search_highlight_NullFragmenter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Fragmenter;
        }
      }
      namespace analysis {
        class TokenStream;
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

          class NullFragmenter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_isNewFragment_54c6a16a,
              mid_start_7d0c5392,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NullFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NullFragmenter(const NullFragmenter& obj) : ::java::lang::Object(obj) {}

            NullFragmenter();

            jboolean isNewFragment() const;
            void start(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyTypeObject PY_TYPE(NullFragmenter);

          class t_NullFragmenter {
          public:
            PyObject_HEAD
            NullFragmenter object;
            static PyObject *wrap_Object(const NullFragmenter&);
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
