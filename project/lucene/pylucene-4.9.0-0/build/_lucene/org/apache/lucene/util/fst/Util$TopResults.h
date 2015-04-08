#ifndef org_apache_lucene_util_fst_Util$TopResults_H
#define org_apache_lucene_util_fst_Util$TopResults_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Util$Result;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Iterable;
  }
  namespace util {
    class List;
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$TopResults : public ::java::lang::Object {
          public:
            enum {
              mid_iterator_40858c90,
              max_mid
            };

            enum {
              fid_isComplete,
              fid_topN,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$TopResults(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Util$TopResults(const Util$TopResults& obj) : ::java::lang::Object(obj) {}

            jboolean _get_isComplete() const;
            ::java::util::List _get_topN() const;

            ::java::util::Iterator iterator() const;
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
          extern PyTypeObject PY_TYPE(Util$TopResults);

          class t_Util$TopResults {
          public:
            PyObject_HEAD
            Util$TopResults object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$TopResults *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$TopResults&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$TopResults&, PyTypeObject *);
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
