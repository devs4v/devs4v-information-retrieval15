#ifndef org_apache_lucene_util_fst_CharSequenceOutputs_H
#define org_apache_lucene_util_fst_CharSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
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

          class CharSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
          public:
            enum {
              mid_add_8f9b8d9f,
              mid_common_8f9b8d9f,
              mid_getNoOutput_399267bb,
              mid_getSingleton_b8f978d1,
              mid_outputToString_ea1848b1,
              mid_read_cbeddd00,
              mid_skipOutput_f5d6a551,
              mid_subtract_8f9b8d9f,
              mid_write_9a0fad97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharSequenceOutputs(const CharSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::CharsRef add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef common(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef getNoOutput() const;
            static CharSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::CharsRef subtract(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            void write(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(CharSequenceOutputs);

          class t_CharSequenceOutputs {
          public:
            PyObject_HEAD
            CharSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharSequenceOutputs&, PyTypeObject *);
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
