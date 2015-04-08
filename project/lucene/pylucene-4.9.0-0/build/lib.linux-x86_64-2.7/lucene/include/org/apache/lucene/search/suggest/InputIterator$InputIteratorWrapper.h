#ifndef org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H
#define org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class InputIterator$InputIteratorWrapper : public ::java::lang::Object {
          public:
            enum {
              mid_init$_506719fa,
              mid_contexts_03e99967,
              mid_getComparator_5a7ff2fc,
              mid_hasContexts_54c6a16a,
              mid_hasPayloads_54c6a16a,
              mid_next_4ae19461,
              mid_payload_4ae19461,
              mid_weight_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator$InputIteratorWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            InputIterator$InputIteratorWrapper(const InputIterator$InputIteratorWrapper& obj) : ::java::lang::Object(obj) {}

            InputIterator$InputIteratorWrapper(const ::org::apache::lucene::util::BytesRefIterator &);

            ::java::util::Set contexts() const;
            ::java::util::Comparator getComparator() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::util::BytesRef payload() const;
            jlong weight() const;
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
        namespace suggest {
          extern PyTypeObject PY_TYPE(InputIterator$InputIteratorWrapper);

          class t_InputIterator$InputIteratorWrapper {
          public:
            PyObject_HEAD
            InputIterator$InputIteratorWrapper object;
            static PyObject *wrap_Object(const InputIterator$InputIteratorWrapper&);
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
