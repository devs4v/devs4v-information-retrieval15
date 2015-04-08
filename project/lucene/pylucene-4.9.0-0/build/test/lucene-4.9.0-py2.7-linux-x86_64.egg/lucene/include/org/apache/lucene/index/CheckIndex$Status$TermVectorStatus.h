#ifndef org_apache_lucene_index_CheckIndex$Status$TermVectorStatus_H
#define org_apache_lucene_index_CheckIndex$Status$TermVectorStatus_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status$TermVectorStatus : public ::java::lang::Object {
        public:

          enum {
            fid_docCount,
            fid_error,
            fid_totVectors,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$TermVectorStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$TermVectorStatus(const CheckIndex$Status$TermVectorStatus& obj) : ::java::lang::Object(obj) {}

          jint _get_docCount() const;
          void _set_docCount(jint) const;
          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jlong _get_totVectors() const;
          void _set_totVectors(jlong) const;
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
        extern PyTypeObject PY_TYPE(CheckIndex$Status$TermVectorStatus);

        class t_CheckIndex$Status$TermVectorStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$TermVectorStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$TermVectorStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
