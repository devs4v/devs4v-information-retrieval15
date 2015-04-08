#ifndef org_apache_lucene_util_fst_NoOutputs_H
#define org_apache_lucene_util_fst_NoOutputs_H

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
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class NoOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_add_537d5bdf,
              mid_common_537d5bdf,
              mid_getNoOutput_846352c3,
              mid_getSingleton_99c00e31,
              mid_merge_537d5bdf,
              mid_outputToString_c9db4eed,
              mid_read_7d5f44e2,
              mid_subtract_537d5bdf,
              mid_write_208ac1fb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NoOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NoOutputs(const NoOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            static NoOutputs getSingleton();
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(NoOutputs);

          class t_NoOutputs {
          public:
            PyObject_HEAD
            NoOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NoOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NoOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NoOutputs&, PyTypeObject *);
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
