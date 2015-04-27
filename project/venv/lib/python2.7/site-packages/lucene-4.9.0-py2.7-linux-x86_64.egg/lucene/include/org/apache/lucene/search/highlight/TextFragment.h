#ifndef org_apache_lucene_search_highlight_TextFragment_H
#define org_apache_lucene_search_highlight_TextFragment_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TextFragment : public ::java::lang::Object {
          public:
            enum {
              mid_init$_6cc8d7e2,
              mid_follows_0335a786,
              mid_getFragNum_54c6a179,
              mid_getScore_54c6a176,
              mid_merge_0335a78a,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TextFragment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TextFragment(const TextFragment& obj) : ::java::lang::Object(obj) {}

            TextFragment(const ::java::lang::CharSequence &, jint, jint);

            jboolean follows(const TextFragment &) const;
            jint getFragNum() const;
            jfloat getScore() const;
            void merge(const TextFragment &) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(TextFragment);

          class t_TextFragment {
          public:
            PyObject_HEAD
            TextFragment object;
            static PyObject *wrap_Object(const TextFragment&);
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
