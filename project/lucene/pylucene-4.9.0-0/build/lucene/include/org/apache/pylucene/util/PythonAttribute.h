#ifndef org_apache_pylucene_util_PythonAttribute_H
#define org_apache_pylucene_util_PythonAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonAttribute : public ::org::apache::lucene::util::Attribute {
        public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonAttribute(const PythonAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyTypeObject PY_TYPE(PythonAttribute);

        class t_PythonAttribute {
        public:
          PyObject_HEAD
          PythonAttribute object;
          static PyObject *wrap_Object(const PythonAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
