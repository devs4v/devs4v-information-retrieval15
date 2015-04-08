#ifndef org_apache_lucene_index_CheckIndex$Status$DocValuesStatus_H
#define org_apache_lucene_index_CheckIndex$Status$DocValuesStatus_H

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

        class CheckIndex$Status$DocValuesStatus : public ::java::lang::Object {
        public:

          enum {
            fid_error,
            fid_totalBinaryFields,
            fid_totalNumericFields,
            fid_totalSortedFields,
            fid_totalSortedNumericFields,
            fid_totalSortedSetFields,
            fid_totalValueFields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$DocValuesStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$DocValuesStatus(const CheckIndex$Status$DocValuesStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jlong _get_totalBinaryFields() const;
          void _set_totalBinaryFields(jlong) const;
          jlong _get_totalNumericFields() const;
          void _set_totalNumericFields(jlong) const;
          jlong _get_totalSortedFields() const;
          void _set_totalSortedFields(jlong) const;
          jlong _get_totalSortedNumericFields() const;
          void _set_totalSortedNumericFields(jlong) const;
          jlong _get_totalSortedSetFields() const;
          void _set_totalSortedSetFields(jlong) const;
          jlong _get_totalValueFields() const;
          void _set_totalValueFields(jlong) const;
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
        extern PyTypeObject PY_TYPE(CheckIndex$Status$DocValuesStatus);

        class t_CheckIndex$Status$DocValuesStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$DocValuesStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$DocValuesStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
