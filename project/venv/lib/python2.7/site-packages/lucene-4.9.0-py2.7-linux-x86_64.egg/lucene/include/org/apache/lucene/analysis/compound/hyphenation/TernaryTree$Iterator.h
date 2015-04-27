#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree$Iterator_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree$Iterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class TernaryTree;
          }
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
  namespace util {
    class Enumeration;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class TernaryTree$Iterator : public ::java::lang::Object {
            public:
              enum {
                mid_init$_fe795a01,
                mid_getValue_54c6a173,
                mid_hasMoreElements_54c6a16a,
                mid_nextElement_14c7b5c5,
                mid_rewind_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree$Iterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree$Iterator(const TernaryTree$Iterator& obj) : ::java::lang::Object(obj) {}

              TernaryTree$Iterator(const ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree &);

              jchar getValue() const;
              jboolean hasMoreElements() const;
              ::java::lang::String nextElement() const;
              void rewind() const;
            };
          }
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
        namespace compound {
          namespace hyphenation {
            extern PyTypeObject PY_TYPE(TernaryTree$Iterator);

            class t_TernaryTree$Iterator {
            public:
              PyObject_HEAD
              TernaryTree$Iterator object;
              static PyObject *wrap_Object(const TernaryTree$Iterator&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
