#ifndef org_apache_lucene_search_postingshighlight_Passage_H
#define org_apache_lucene_search_postingshighlight_Passage_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
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

          class Passage : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getEndOffset_54c6a179,
              mid_getMatchEnds_dab10e75,
              mid_getMatchStarts_dab10e75,
              mid_getMatchTerms_19d1f84d,
              mid_getNumMatches_54c6a179,
              mid_getScore_54c6a176,
              mid_getStartOffset_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Passage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Passage(const Passage& obj) : ::java::lang::Object(obj) {}

            Passage();

            jint getEndOffset() const;
            JArray< jint > getMatchEnds() const;
            JArray< jint > getMatchStarts() const;
            JArray< ::org::apache::lucene::util::BytesRef > getMatchTerms() const;
            jint getNumMatches() const;
            jfloat getScore() const;
            jint getStartOffset() const;
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
          extern PyTypeObject PY_TYPE(Passage);

          class t_Passage {
          public:
            PyObject_HEAD
            Passage object;
            static PyObject *wrap_Object(const Passage&);
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
