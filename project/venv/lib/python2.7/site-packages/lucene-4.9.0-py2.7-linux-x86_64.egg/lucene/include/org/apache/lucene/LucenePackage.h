#ifndef org_apache_lucene_LucenePackage_H
#define org_apache_lucene_LucenePackage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Package;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {

      class LucenePackage : public ::java::lang::Object {
      public:
        enum {
          mid_get_b0f2f7bb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LucenePackage(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        LucenePackage(const LucenePackage& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::Package get();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      extern PyTypeObject PY_TYPE(LucenePackage);

      class t_LucenePackage {
      public:
        PyObject_HEAD
        LucenePackage object;
        static PyObject *wrap_Object(const LucenePackage&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
