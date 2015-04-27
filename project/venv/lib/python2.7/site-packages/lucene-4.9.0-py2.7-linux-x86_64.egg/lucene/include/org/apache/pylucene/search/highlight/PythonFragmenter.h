#ifndef org_apache_pylucene_search_highlight_PythonFragmenter_H
#define org_apache_pylucene_search_highlight_PythonFragmenter_H

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
    class Throwable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {

          class PythonFragmenter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_finalize_54c6a166,
              mid_isNewFragment_54c6a16a,
              mid_pythonDecRef_54c6a166,
              mid_pythonExtension_54c6a17a,
              mid_pythonExtension_0ee6df2f,
              mid_start_7d0c5392,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PythonFragmenter(const PythonFragmenter& obj) : ::java::lang::Object(obj) {}

            PythonFragmenter();

            void finalize() const;
            jboolean isNewFragment() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
    namespace pylucene {
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(PythonFragmenter);

          class t_PythonFragmenter {
          public:
            PyObject_HEAD
            PythonFragmenter object;
            static PyObject *wrap_Object(const PythonFragmenter&);
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
