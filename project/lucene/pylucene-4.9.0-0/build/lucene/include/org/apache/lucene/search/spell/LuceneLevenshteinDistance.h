#ifndef org_apache_lucene_search_spell_LuceneLevenshteinDistance_H
#define org_apache_lucene_search_spell_LuceneLevenshteinDistance_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class StringDistance;
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
        namespace spell {

          class LuceneLevenshteinDistance : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getDistance_4a264752,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LuceneLevenshteinDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LuceneLevenshteinDistance(const LuceneLevenshteinDistance& obj) : ::java::lang::Object(obj) {}

            LuceneLevenshteinDistance();

            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
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
        namespace spell {
          extern PyTypeObject PY_TYPE(LuceneLevenshteinDistance);

          class t_LuceneLevenshteinDistance {
          public:
            PyObject_HEAD
            LuceneLevenshteinDistance object;
            static PyObject *wrap_Object(const LuceneLevenshteinDistance&);
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
