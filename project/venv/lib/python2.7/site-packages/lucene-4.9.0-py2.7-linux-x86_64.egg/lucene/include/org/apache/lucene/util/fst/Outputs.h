#ifndef org_apache_lucene_util_fst_Outputs_H
#define org_apache_lucene_util_fst_Outputs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

          class Outputs : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_add_537d5bdf,
              mid_common_537d5bdf,
              mid_getNoOutput_846352c3,
              mid_merge_537d5bdf,
              mid_outputToString_c9db4eed,
              mid_ramBytesUsed_290588f2,
              mid_read_7d5f44e2,
              mid_readFinalOutput_7d5f44e2,
              mid_skipFinalOutput_f5d6a551,
              mid_skipOutput_f5d6a551,
              mid_subtract_537d5bdf,
              mid_write_208ac1fb,
              mid_writeFinalOutput_208ac1fb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Outputs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Outputs(const Outputs& obj) : ::java::lang::Object(obj) {}

            Outputs();

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object readFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(Outputs);

          class t_Outputs {
          public:
            PyObject_HEAD
            Outputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Outputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Outputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Outputs&, PyTypeObject *);
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
