#ifndef org_apache_lucene_util_fst_IntSequenceOutputs_H
#define org_apache_lucene_util_fst_IntSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
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

          class IntSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_add_d1486e01,
              mid_common_d1486e01,
              mid_getNoOutput_5b734841,
              mid_getSingleton_5d304c4b,
              mid_outputToString_6c8ec0cf,
              mid_read_7ae3e2dc,
              mid_skipOutput_f5d6a551,
              mid_subtract_d1486e01,
              mid_write_e1973ab5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IntSequenceOutputs(const IntSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::IntsRef add(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef common(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef getNoOutput() const;
            static IntSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::IntsRef subtract(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            void write(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(IntSequenceOutputs);

          class t_IntSequenceOutputs {
          public:
            PyObject_HEAD
            IntSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntSequenceOutputs&, PyTypeObject *);
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
