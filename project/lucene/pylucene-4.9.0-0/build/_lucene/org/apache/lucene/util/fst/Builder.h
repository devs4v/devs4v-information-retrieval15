#ifndef org_apache_lucene_util_fst_Builder_H
#define org_apache_lucene_util_fst_Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST$INPUT_TYPE;
          class Outputs;
          class Builder$FreezeTail;
          class FST;
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

          class Builder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_024447c3,
              mid_init$_bbea4f98,
              mid_add_52197430,
              mid_finish_917b3659,
              mid_fstRamBytesUsed_54c6a17a,
              mid_getMappedStateCount_54c6a17a,
              mid_getTermCount_54c6a17a,
              mid_getTotStateCount_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Builder(const Builder& obj) : ::java::lang::Object(obj) {}

            Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &);
            Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, jint, jint, jboolean, jboolean, jint, const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::Builder$FreezeTail &, jboolean, jfloat, jboolean, jint);

            void add(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &) const;
            ::org::apache::lucene::util::fst::FST finish() const;
            jlong fstRamBytesUsed() const;
            jlong getMappedStateCount() const;
            jlong getTermCount() const;
            jlong getTotStateCount() const;
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
          extern PyTypeObject PY_TYPE(Builder);

          class t_Builder {
          public:
            PyObject_HEAD
            Builder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Builder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Builder&, PyTypeObject *);
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
