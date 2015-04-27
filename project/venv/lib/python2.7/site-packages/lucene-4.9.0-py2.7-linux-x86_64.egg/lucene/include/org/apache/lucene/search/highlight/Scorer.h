#ifndef org_apache_lucene_search_highlight_Scorer_H
#define org_apache_lucene_search_highlight_Scorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
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
      namespace search {
        namespace highlight {

          class Scorer : public ::java::lang::Object {
          public:
            enum {
              mid_getFragmentScore_54c6a176,
              mid_getTokenScore_54c6a176,
              mid_init_a65cd6ab,
              mid_startFragment_0335a78a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Scorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Scorer(const Scorer& obj) : ::java::lang::Object(obj) {}

            jfloat getFragmentScore() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
          extern PyTypeObject PY_TYPE(Scorer);

          class t_Scorer {
          public:
            PyObject_HEAD
            Scorer object;
            static PyObject *wrap_Object(const Scorer&);
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
