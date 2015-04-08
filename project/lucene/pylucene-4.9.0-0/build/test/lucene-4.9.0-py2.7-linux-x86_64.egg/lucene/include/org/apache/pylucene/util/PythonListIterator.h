#ifndef org_apache_pylucene_util_PythonListIterator_H
#define org_apache_pylucene_util_PythonListIterator_H

#include "org/apache/pylucene/util/PythonIterator.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class ListIterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonListIterator : public ::org::apache::pylucene::util::PythonIterator {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_290588ee,
            mid_hasPrevious_54c6a16a,
            mid_nextIndex_54c6a179,
            mid_previous_846352c3,
            mid_previousIndex_54c6a179,
            mid_remove_54c6a166,
            mid_set_290588ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonListIterator(jobject obj) : ::org::apache::pylucene::util::PythonIterator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonListIterator(const PythonListIterator& obj) : ::org::apache::pylucene::util::PythonIterator(obj) {}

          PythonListIterator();

          void add(const ::java::lang::Object &) const;
          jboolean hasPrevious() const;
          jint nextIndex() const;
          ::java::lang::Object previous() const;
          jint previousIndex() const;
          void remove() const;
          void set(const ::java::lang::Object &) const;
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
        extern PyTypeObject PY_TYPE(PythonListIterator);

        class t_PythonListIterator {
        public:
          PyObject_HEAD
          PythonListIterator object;
          static PyObject *wrap_Object(const PythonListIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
