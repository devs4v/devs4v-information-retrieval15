#ifndef org_apache_lucene_search_spell_SuggestWord_H
#define org_apache_lucene_search_spell_SuggestWord_H

#include "java/lang/Object.h"

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

          class SuggestWord : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            enum {
              fid_freq,
              fid_score,
              fid_string,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestWord(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SuggestWord(const SuggestWord& obj) : ::java::lang::Object(obj) {}

            jint _get_freq() const;
            void _set_freq(jint) const;
            jfloat _get_score() const;
            void _set_score(jfloat) const;
            ::java::lang::String _get_string() const;
            void _set_string(const ::java::lang::String &) const;

            SuggestWord();
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
          extern PyTypeObject PY_TYPE(SuggestWord);

          class t_SuggestWord {
          public:
            PyObject_HEAD
            SuggestWord object;
            static PyObject *wrap_Object(const SuggestWord&);
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
