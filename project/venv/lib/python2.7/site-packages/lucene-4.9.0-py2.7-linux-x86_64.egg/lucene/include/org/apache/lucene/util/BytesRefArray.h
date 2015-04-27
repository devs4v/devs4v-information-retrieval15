#ifndef org_apache_lucene_util_BytesRefArray_H
#define org_apache_lucene_util_BytesRefArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
        class Counter;
        class BytesRef;
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
      namespace util {

        class BytesRefArray : public ::java::lang::Object {
        public:
          enum {
            mid_init$_4ae88947,
            mid_append_7bc03ddb,
            mid_clear_54c6a166,
            mid_get_708d2c55,
            mid_iterator_534dea83,
            mid_iterator_8d21877c,
            mid_size_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray(const BytesRefArray& obj) : ::java::lang::Object(obj) {}

          BytesRefArray(const ::org::apache::lucene::util::Counter &);

          jint append(const ::org::apache::lucene::util::BytesRef &) const;
          void clear() const;
          ::org::apache::lucene::util::BytesRef get(const ::org::apache::lucene::util::BytesRef &, jint) const;
          ::org::apache::lucene::util::BytesRefIterator iterator() const;
          ::org::apache::lucene::util::BytesRefIterator iterator(const ::java::util::Comparator &) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(BytesRefArray);

        class t_BytesRefArray {
        public:
          PyObject_HEAD
          BytesRefArray object;
          static PyObject *wrap_Object(const BytesRefArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
