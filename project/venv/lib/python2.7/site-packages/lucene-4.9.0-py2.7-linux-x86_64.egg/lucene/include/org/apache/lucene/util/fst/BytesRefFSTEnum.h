#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class BytesRefFSTEnum$InputOutput;
          class FST;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
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

          class BytesRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
          public:
            enum {
              mid_init$_d454d65c,
              mid_current_6016cb55,
              mid_next_6016cb55,
              mid_seekCeil_ec56792b,
              mid_seekExact_ec56792b,
              mid_seekFloor_ec56792b,
              mid_grow_54c6a166,
              mid_getTargetLabel_54c6a179,
              mid_getCurrentLabel_54c6a179,
              mid_setCurrentLabel_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BytesRefFSTEnum(const BytesRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            BytesRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyTypeObject PY_TYPE(BytesRefFSTEnum);

          class t_BytesRefFSTEnum {
          public:
            PyObject_HEAD
            BytesRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BytesRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BytesRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BytesRefFSTEnum&, PyTypeObject *);
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
