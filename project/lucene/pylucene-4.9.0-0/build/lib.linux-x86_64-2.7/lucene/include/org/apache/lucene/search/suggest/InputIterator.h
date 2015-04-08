#ifndef org_apache_lucene_search_suggest_InputIterator_H
#define org_apache_lucene_search_suggest_InputIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

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
  namespace util {
    class Set;
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
        namespace suggest {

          class InputIterator : public ::org::apache::lucene::util::BytesRefIterator {
          public:
            enum {
              mid_contexts_03e99967,
              mid_hasContexts_54c6a16a,
              mid_hasPayloads_54c6a16a,
              mid_payload_4ae19461,
              mid_weight_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            InputIterator(const InputIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

            static InputIterator *EMPTY;

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
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
          extern PyTypeObject PY_TYPE(InputIterator);

          class t_InputIterator {
          public:
            PyObject_HEAD
            InputIterator object;
            static PyObject *wrap_Object(const InputIterator&);
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
