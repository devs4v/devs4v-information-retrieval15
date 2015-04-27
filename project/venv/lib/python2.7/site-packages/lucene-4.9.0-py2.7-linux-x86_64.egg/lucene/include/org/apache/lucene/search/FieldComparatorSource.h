#ifndef org_apache_lucene_search_FieldComparatorSource_H
#define org_apache_lucene_search_FieldComparatorSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

        class FieldComparatorSource : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_newComparator_0c7e6c91,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparatorSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparatorSource(const FieldComparatorSource& obj) : ::java::lang::Object(obj) {}

          FieldComparatorSource();

          ::org::apache::lucene::search::FieldComparator newComparator(const ::java::lang::String &, jint, jint, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(FieldComparatorSource);

        class t_FieldComparatorSource {
        public:
          PyObject_HEAD
          FieldComparatorSource object;
          static PyObject *wrap_Object(const FieldComparatorSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
