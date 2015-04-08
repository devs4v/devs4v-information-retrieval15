#ifndef org_apache_lucene_util_fst_Builder$FreezeTail_H
#define org_apache_lucene_util_fst_Builder$FreezeTail_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class Builder$UnCompiledNode;
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

          class Builder$FreezeTail : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_freeze_d975a767,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Builder$FreezeTail(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Builder$FreezeTail(const Builder$FreezeTail& obj) : ::java::lang::Object(obj) {}

            Builder$FreezeTail();

            void freeze(const JArray< ::org::apache::lucene::util::fst::Builder$UnCompiledNode > &, jint, const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyTypeObject PY_TYPE(Builder$FreezeTail);

          class t_Builder$FreezeTail {
          public:
            PyObject_HEAD
            Builder$FreezeTail object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Builder$FreezeTail *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Builder$FreezeTail&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Builder$FreezeTail&, PyTypeObject *);
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
