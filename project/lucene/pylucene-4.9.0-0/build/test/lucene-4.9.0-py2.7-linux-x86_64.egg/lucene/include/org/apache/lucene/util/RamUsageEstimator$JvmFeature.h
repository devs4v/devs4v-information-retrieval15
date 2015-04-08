#ifndef org_apache_lucene_util_RamUsageEstimator$JvmFeature_H
#define org_apache_lucene_util_RamUsageEstimator$JvmFeature_H

#include "java/lang/Enum.h"

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

        class RamUsageEstimator$JvmFeature : public ::java::lang::Enum {
        public:
          enum {
            mid_toString_14c7b5c5,
            mid_valueOf_435c0e75,
            mid_values_6bc6c637,
            max_mid
          };

          enum {
            fid_description,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RamUsageEstimator$JvmFeature(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RamUsageEstimator$JvmFeature(const RamUsageEstimator$JvmFeature& obj) : ::java::lang::Enum(obj) {}

          static RamUsageEstimator$JvmFeature *ARRAY_HEADER_SIZE;
          static RamUsageEstimator$JvmFeature *FIELD_OFFSETS;
          static RamUsageEstimator$JvmFeature *OBJECT_ALIGNMENT;
          static RamUsageEstimator$JvmFeature *OBJECT_REFERENCE_SIZE;

          ::java::lang::String _get_description() const;

          ::java::lang::String toString() const;
          static RamUsageEstimator$JvmFeature valueOf(const ::java::lang::String &);
          static JArray< RamUsageEstimator$JvmFeature > values();
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
        extern PyTypeObject PY_TYPE(RamUsageEstimator$JvmFeature);

        class t_RamUsageEstimator$JvmFeature {
        public:
          PyObject_HEAD
          RamUsageEstimator$JvmFeature object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RamUsageEstimator$JvmFeature *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RamUsageEstimator$JvmFeature&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RamUsageEstimator$JvmFeature&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
