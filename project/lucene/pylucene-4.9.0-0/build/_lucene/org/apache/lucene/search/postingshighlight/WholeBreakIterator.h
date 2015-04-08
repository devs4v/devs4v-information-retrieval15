#ifndef org_apache_lucene_search_postingshighlight_WholeBreakIterator_H
#define org_apache_lucene_search_postingshighlight_WholeBreakIterator_H

#include "java/text/BreakIterator.h"

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

          class WholeBreakIterator : public ::java::text::BreakIterator {
          public:
            enum {
              mid_init$_54c6a166,
              mid_current_54c6a179,
              mid_first_54c6a179,
              mid_following_39c7bd23,
              mid_last_54c6a179,
              mid_next_54c6a179,
              mid_next_39c7bd23,
              mid_preceding_39c7bd23,
              mid_previous_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WholeBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WholeBreakIterator(const WholeBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            WholeBreakIterator();

            jint current() const;
            jint first() const;
            jint following(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
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
          extern PyTypeObject PY_TYPE(WholeBreakIterator);

          class t_WholeBreakIterator {
          public:
            PyObject_HEAD
            WholeBreakIterator object;
            static PyObject *wrap_Object(const WholeBreakIterator&);
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
