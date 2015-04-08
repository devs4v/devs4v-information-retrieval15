#ifndef org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class StringBuilder;
    class Character;
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class SimpleBoundaryScanner : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_a03f060b,
              mid_init$_39c7bd3c,
              mid_init$_4d893084,
              mid_init$_ac2fcfe5,
              mid_findEndOffset_f3d950f1,
              mid_findStartOffset_f3d950f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleBoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SimpleBoundaryScanner(const SimpleBoundaryScanner& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::Character > *DEFAULT_BOUNDARY_CHARS;
            static jint DEFAULT_MAX_SCAN;

            SimpleBoundaryScanner();
            SimpleBoundaryScanner(const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint);
            SimpleBoundaryScanner(jint, const ::java::util::Set &);
            SimpleBoundaryScanner(jint, const JArray< ::java::lang::Character > &);

            jint findEndOffset(const ::java::lang::StringBuilder &, jint) const;
            jint findStartOffset(const ::java::lang::StringBuilder &, jint) const;
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
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(SimpleBoundaryScanner);

          class t_SimpleBoundaryScanner {
          public:
            PyObject_HEAD
            SimpleBoundaryScanner object;
            static PyObject *wrap_Object(const SimpleBoundaryScanner&);
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
