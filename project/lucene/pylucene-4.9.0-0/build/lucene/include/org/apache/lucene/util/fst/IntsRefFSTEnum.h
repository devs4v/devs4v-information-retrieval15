#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST;
          class IntsRefFSTEnum$InputOutput;
        }
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

          class IntsRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
          public:
            enum {
              mid_init$_d454d65c,
              mid_current_4ce4ab35,
              mid_next_4ce4ab35,
              mid_seekCeil_8b422fd3,
              mid_seekExact_8b422fd3,
              mid_seekFloor_8b422fd3,
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

            explicit IntsRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IntsRefFSTEnum(const IntsRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            IntsRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyTypeObject PY_TYPE(IntsRefFSTEnum);

          class t_IntsRefFSTEnum {
          public:
            PyObject_HEAD
            IntsRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntsRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntsRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntsRefFSTEnum&, PyTypeObject *);
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
