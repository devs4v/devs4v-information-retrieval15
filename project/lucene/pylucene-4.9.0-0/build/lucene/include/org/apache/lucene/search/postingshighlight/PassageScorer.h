#ifndef org_apache_lucene_search_postingshighlight_PassageScorer_H
#define org_apache_lucene_search_postingshighlight_PassageScorer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace postingshighlight {

          class PassageScorer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_5348eb2d,
              mid_norm_39c7bd2c,
              mid_tf_d8d154b6,
              mid_weight_d8d154b6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PassageScorer(const PassageScorer& obj) : ::java::lang::Object(obj) {}

            PassageScorer();
            PassageScorer(jfloat, jfloat, jfloat);

            jfloat norm(jint) const;
            jfloat tf(jint, jint) const;
            jfloat weight(jint, jint) const;
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
        namespace postingshighlight {
          extern PyTypeObject PY_TYPE(PassageScorer);

          class t_PassageScorer {
          public:
            PyObject_HEAD
            PassageScorer object;
            static PyObject *wrap_Object(const PassageScorer&);
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
