#ifndef org_apache_pylucene_util_PythonIterator_H
#define org_apache_pylucene_util_PythonIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonIterator : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_finalize_54c6a166,
            mid_hasNext_54c6a16a,
            mid_next_846352c3,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_remove_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonIterator(const PythonIterator& obj) : ::java::lang::Object(obj) {}

          PythonIterator();

          void finalize() const;
          jboolean hasNext() const;
          ::java::lang::Object next() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void remove() const;
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
        extern PyTypeObject PY_TYPE(PythonIterator);

        class t_PythonIterator {
        public:
          PyObject_HEAD
          PythonIterator object;
          static PyObject *wrap_Object(const PythonIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
