#ifndef org_apache_lucene_util_FieldCacheSanityChecker$InsanityType_H
#define org_apache_lucene_util_FieldCacheSanityChecker$InsanityType_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FieldCacheSanityChecker$InsanityType : public ::java::lang::Object {
        public:
          enum {
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheSanityChecker$InsanityType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheSanityChecker$InsanityType(const FieldCacheSanityChecker$InsanityType& obj) : ::java::lang::Object(obj) {}

          static FieldCacheSanityChecker$InsanityType *EXPECTED;
          static FieldCacheSanityChecker$InsanityType *SUBREADER;
          static FieldCacheSanityChecker$InsanityType *VALUEMISMATCH;

          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(FieldCacheSanityChecker$InsanityType);

        class t_FieldCacheSanityChecker$InsanityType {
        public:
          PyObject_HEAD
          FieldCacheSanityChecker$InsanityType object;
          static PyObject *wrap_Object(const FieldCacheSanityChecker$InsanityType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
