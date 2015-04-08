#ifndef org_apache_lucene_util_fst_Util$Result_H
#define org_apache_lucene_util_fst_Util$Result_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$Result : public ::java::lang::Object {
          public:
            enum {
              mid_init$_52197430,
              max_mid
            };

            enum {
              fid_input,
              fid_output,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$Result(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Util$Result(const Util$Result& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::IntsRef _get_input() const;
            ::java::lang::Object _get_output() const;

            Util$Result(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &);
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
          extern PyTypeObject PY_TYPE(Util$Result);

          class t_Util$Result {
          public:
            PyObject_HEAD
            Util$Result object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$Result *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$Result&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$Result&, PyTypeObject *);
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
