#ifndef org_apache_lucene_util_fst_Util$FSTPath_H
#define org_apache_lucene_util_fst_Util$FSTPath_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST$Arc;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$FSTPath : public ::java::lang::Object {
          public:
            enum {
              mid_init$_24ce56ea,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_arc,
              fid_cost,
              fid_input,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$FSTPath(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Util$FSTPath(const Util$FSTPath& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::fst::FST$Arc _get_arc() const;
            void _set_arc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            ::java::lang::Object _get_cost() const;
            void _set_cost(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::IntsRef _get_input() const;

            Util$FSTPath(const ::java::lang::Object &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::IntsRef &);

            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(Util$FSTPath);

          class t_Util$FSTPath {
          public:
            PyObject_HEAD
            Util$FSTPath object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$FSTPath *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$FSTPath&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$FSTPath&, PyTypeObject *);
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
