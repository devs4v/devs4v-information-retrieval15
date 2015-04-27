#ifndef org_apache_lucene_util_fst_PairOutputs_H
#define org_apache_lucene_util_fst_PairOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class PairOutputs$Pair;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

          class PairOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_init$_32f3530a,
              mid_add_f30532b1,
              mid_common_f30532b1,
              mid_getNoOutput_02379231,
              mid_newPair_b457b73d,
              mid_outputToString_93c1f663,
              mid_ramBytesUsed_53ec2f78,
              mid_read_49c65b36,
              mid_skipOutput_f5d6a551,
              mid_subtract_f30532b1,
              mid_toString_14c7b5c5,
              mid_write_3e3045f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PairOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PairOutputs(const PairOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            PairOutputs(const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::Outputs &);

            ::org::apache::lucene::util::fst::PairOutputs$Pair add(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair common(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair getNoOutput() const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair newPair(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair subtract(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(PairOutputs);

          class t_PairOutputs {
          public:
            PyObject_HEAD
            PairOutputs object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PairOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PairOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PairOutputs&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
