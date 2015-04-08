#ifndef org_apache_lucene_analysis_util_CharArrayIterator_H
#define org_apache_lucene_analysis_util_CharArrayIterator_H

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
      namespace analysis {
        namespace util {

          class CharArrayIterator : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clone_18028ee5,
              mid_current_54c6a173,
              mid_first_54c6a173,
              mid_getBeginIndex_54c6a179,
              mid_getEndIndex_54c6a179,
              mid_getIndex_54c6a179,
              mid_getLength_54c6a179,
              mid_getStart_54c6a179,
              mid_getText_dab10e7f,
              mid_last_54c6a173,
              mid_newSentenceInstance_18028ee5,
              mid_newWordInstance_18028ee5,
              mid_next_54c6a173,
              mid_previous_54c6a173,
              mid_setIndex_39c7bd29,
              mid_setText_6f0bb356,
              mid_jreBugWorkaround_87fd544f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharArrayIterator(const CharArrayIterator& obj) : ::java::lang::Object(obj) {}

            static jboolean HAS_BUGGY_BREAKITERATORS;

            CharArrayIterator();

            CharArrayIterator clone() const;
            jchar current() const;
            jchar first() const;
            jint getBeginIndex() const;
            jint getEndIndex() const;
            jint getIndex() const;
            jint getLength() const;
            jint getStart() const;
            JArray< jchar > getText() const;
            jchar last() const;
            static CharArrayIterator newSentenceInstance();
            static CharArrayIterator newWordInstance();
            jchar next() const;
            jchar previous() const;
            jchar setIndex(jint) const;
            void setText(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(CharArrayIterator);

          class t_CharArrayIterator {
          public:
            PyObject_HEAD
            CharArrayIterator object;
            static PyObject *wrap_Object(const CharArrayIterator&);
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
