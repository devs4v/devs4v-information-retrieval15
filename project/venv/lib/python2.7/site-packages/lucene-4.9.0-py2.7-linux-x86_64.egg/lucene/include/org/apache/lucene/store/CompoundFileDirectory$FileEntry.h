#ifndef org_apache_lucene_store_CompoundFileDirectory$FileEntry_H
#define org_apache_lucene_store_CompoundFileDirectory$FileEntry_H

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
      namespace store {

        class CompoundFileDirectory$FileEntry : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundFileDirectory$FileEntry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CompoundFileDirectory$FileEntry(const CompoundFileDirectory$FileEntry& obj) : ::java::lang::Object(obj) {}

          CompoundFileDirectory$FileEntry();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(CompoundFileDirectory$FileEntry);

        class t_CompoundFileDirectory$FileEntry {
        public:
          PyObject_HEAD
          CompoundFileDirectory$FileEntry object;
          static PyObject *wrap_Object(const CompoundFileDirectory$FileEntry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
