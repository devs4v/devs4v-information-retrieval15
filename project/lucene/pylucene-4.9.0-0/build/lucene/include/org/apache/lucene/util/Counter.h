#ifndef org_apache_lucene_util_Counter_H
#define org_apache_lucene_util_Counter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Counter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_addAndGet_0ee6df33,
            mid_get_54c6a17a,
            mid_newCounter_781dd30a,
            mid_newCounter_aad2ede1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Counter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Counter(const Counter& obj) : ::java::lang::Object(obj) {}

          Counter();

          jlong addAndGet(jlong) const;
          jlong get() const;
          static Counter newCounter();
          static Counter newCounter(jboolean);
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
        extern PyTypeObject PY_TYPE(Counter);

        class t_Counter {
        public:
          PyObject_HEAD
          Counter object;
          static PyObject *wrap_Object(const Counter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
