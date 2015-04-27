#ifndef org_apache_lucene_search_suggest_SortedInputIterator_H
#define org_apache_lucene_search_suggest_SortedInputIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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

          class SortedInputIterator : public ::java::lang::Object {
          public:
            enum {
              mid_init$_1754a234,
              mid_init$_a76164a7,
              mid_contexts_03e99967,
              mid_getComparator_5a7ff2fc,
              mid_hasContexts_54c6a16a,
              mid_hasPayloads_54c6a16a,
              mid_next_4ae19461,
              mid_payload_4ae19461,
              mid_weight_54c6a17a,
              mid_decode_b368866d,
              mid_encode_f3a12df5,
              mid_decodeContexts_8a3417ec,
              mid_decodePayload_62b5ed46,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedInputIterator(const SortedInputIterator& obj) : ::java::lang::Object(obj) {}

            SortedInputIterator(const ::org::apache::lucene::search::suggest::InputIterator &);
            SortedInputIterator(const ::org::apache::lucene::search::suggest::InputIterator &, const ::java::util::Comparator &);

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
          extern PyTypeObject PY_TYPE(SortedInputIterator);

          class t_SortedInputIterator {
          public:
            PyObject_HEAD
            SortedInputIterator object;
            static PyObject *wrap_Object(const SortedInputIterator&);
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
