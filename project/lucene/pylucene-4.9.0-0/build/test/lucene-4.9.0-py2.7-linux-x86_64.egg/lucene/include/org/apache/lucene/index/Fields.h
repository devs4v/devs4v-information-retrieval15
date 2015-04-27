#ifndef org_apache_lucene_index_Fields_H
#define org_apache_lucene_index_Fields_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Fields : public ::java::lang::Object {
        public:
          enum {
            mid_getUniqueTermCount_54c6a17a,
            mid_iterator_40858c90,
            mid_size_54c6a179,
            mid_terms_ee262ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Fields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Fields(const Fields& obj) : ::java::lang::Object(obj) {}

          static JArray< Fields > *EMPTY_ARRAY;

          jlong getUniqueTermCount() const;
          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(Fields);

        class t_Fields {
        public:
          PyObject_HEAD
          Fields object;
          static PyObject *wrap_Object(const Fields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
