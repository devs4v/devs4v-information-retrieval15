#ifndef org_apache_lucene_util_fst_PositiveIntOutputs_H
#define org_apache_lucene_util_fst_PositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Long;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class PositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_add_9f6e77f0,
              mid_common_9f6e77f0,
              mid_getNoOutput_c5e93900,
              mid_getSingleton_62a4b337,
              mid_outputToString_d1a33160,
              mid_ramBytesUsed_da55802d,
              mid_read_5eca7461,
              mid_subtract_9f6e77f0,
              mid_toString_14c7b5c5,
              mid_write_6466b4a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PositiveIntOutputs(const PositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Long add(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long common(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long getNoOutput() const;
            static PositiveIntOutputs getSingleton();
            ::java::lang::String outputToString(const ::java::lang::Long &) const;
            jlong ramBytesUsed(const ::java::lang::Long &) const;
            ::java::lang::Long read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Long subtract(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Long &, const ::org::apache::lucene::store::DataOutput &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyTypeObject PY_TYPE(PositiveIntOutputs);

          class t_PositiveIntOutputs {
          public:
            PyObject_HEAD
            PositiveIntOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PositiveIntOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PositiveIntOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PositiveIntOutputs&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
