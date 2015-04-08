#ifndef org_apache_lucene_util_BytesRefIterator_H
#define org_apache_lucene_util_BytesRefIterator_H

#include "java/lang/Object.h"

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
      namespace util {

        class BytesRefIterator : public ::java::lang::Object {
        public:
          enum {
            mid_getComparator_5a7ff2fc,
            mid_next_4ae19461,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefIterator(const BytesRefIterator& obj) : ::java::lang::Object(obj) {}

          static BytesRefIterator *EMPTY;

          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::util::BytesRef next() const;
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
        extern PyTypeObject PY_TYPE(BytesRefIterator);

        class t_BytesRefIterator {
        public:
          PyObject_HEAD
          BytesRefIterator object;
          static PyObject *wrap_Object(const BytesRefIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
