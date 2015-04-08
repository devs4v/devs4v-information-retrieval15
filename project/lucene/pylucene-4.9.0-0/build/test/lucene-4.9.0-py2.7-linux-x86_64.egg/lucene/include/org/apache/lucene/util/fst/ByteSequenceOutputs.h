#ifndef org_apache_lucene_util_fst_ByteSequenceOutputs_H
#define org_apache_lucene_util_fst_ByteSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
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

          class ByteSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_add_0991fadd,
              mid_common_0991fadd,
              mid_getNoOutput_4ae19461,
              mid_getSingleton_f61c4f3f,
              mid_outputToString_edfda73b,
              mid_ramBytesUsed_7bc03dd8,
              mid_read_78c77a42,
              mid_skipOutput_f5d6a551,
              mid_subtract_0991fadd,
              mid_write_178211b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ByteSequenceOutputs(const ByteSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::BytesRef add(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef common(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef getNoOutput() const;
            static ByteSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::BytesRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::BytesRef subtract(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            void write(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(ByteSequenceOutputs);

          class t_ByteSequenceOutputs {
          public:
            PyObject_HEAD
            ByteSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ByteSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ByteSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ByteSequenceOutputs&, PyTypeObject *);
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
