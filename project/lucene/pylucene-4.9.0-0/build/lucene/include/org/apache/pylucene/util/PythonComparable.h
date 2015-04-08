#ifndef org_apache_pylucene_util_PythonComparable_H
#define org_apache_pylucene_util_PythonComparable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonComparable : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_compareTo_290588f1,
            mid_finalize_54c6a166,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonComparable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonComparable(const PythonComparable& obj) : ::java::lang::Object(obj) {}

          PythonComparable();

          jint compareTo(const ::java::lang::Object &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyTypeObject PY_TYPE(PythonComparable);

        class t_PythonComparable {
        public:
          PyObject_HEAD
          PythonComparable object;
          static PyObject *wrap_Object(const PythonComparable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
