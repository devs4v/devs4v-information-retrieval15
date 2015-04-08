#ifndef org_apache_lucene_search_spell_SuggestWordScoreComparator_H
#define org_apache_lucene_search_spell_SuggestWordScoreComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class SuggestWordScoreComparator : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_compare_2e903bf1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestWordScoreComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SuggestWordScoreComparator(const SuggestWordScoreComparator& obj) : ::java::lang::Object(obj) {}

            SuggestWordScoreComparator();

            jint compare(const ::org::apache::lucene::search::spell::SuggestWord &, const ::org::apache::lucene::search::spell::SuggestWord &) const;
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
          extern PyTypeObject PY_TYPE(SuggestWordScoreComparator);

          class t_SuggestWordScoreComparator {
          public:
            PyObject_HEAD
            SuggestWordScoreComparator object;
            static PyObject *wrap_Object(const SuggestWordScoreComparator&);
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
