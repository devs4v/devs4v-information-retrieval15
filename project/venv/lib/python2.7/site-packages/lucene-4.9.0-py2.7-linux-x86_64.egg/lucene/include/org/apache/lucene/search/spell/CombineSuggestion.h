#ifndef org_apache_lucene_search_spell_CombineSuggestion_H
#define org_apache_lucene_search_spell_CombineSuggestion_H

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

          class CombineSuggestion : public ::java::lang::Object {
          public:
            enum {
              mid_init$_e7d3559a,
              max_mid
            };

            enum {
              fid_originalTermIndexes,
              fid_suggestion,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombineSuggestion(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CombineSuggestion(const CombineSuggestion& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_originalTermIndexes() const;
            ::org::apache::lucene::search::spell::SuggestWord _get_suggestion() const;

            CombineSuggestion(const ::org::apache::lucene::search::spell::SuggestWord &, const JArray< jint > &);
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
          extern PyTypeObject PY_TYPE(CombineSuggestion);

          class t_CombineSuggestion {
          public:
            PyObject_HEAD
            CombineSuggestion object;
            static PyObject *wrap_Object(const CombineSuggestion&);
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
