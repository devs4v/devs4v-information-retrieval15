#ifndef org_apache_lucene_search_spell_SuggestWordQueue_H
#define org_apache_lucene_search_spell_SuggestWordQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

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

          class SuggestWordQueue : public ::org::apache::lucene::util::PriorityQueue {
          public:
            enum {
              mid_init$_39c7bd3c,
              mid_init$_4ba868a3,
              mid_lessThan_2e903be2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestWordQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SuggestWordQueue(const SuggestWordQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

            static ::java::util::Comparator *DEFAULT_COMPARATOR;

            SuggestWordQueue(jint);
            SuggestWordQueue(jint, const ::java::util::Comparator &);
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
          extern PyTypeObject PY_TYPE(SuggestWordQueue);

          class t_SuggestWordQueue {
          public:
            PyObject_HEAD
            SuggestWordQueue object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SuggestWordQueue *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SuggestWordQueue&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SuggestWordQueue&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
