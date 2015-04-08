#ifndef org_apache_lucene_util_fst_Util$TopNSearcher_H
#define org_apache_lucene_util_fst_Util$TopNSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST$Arc;
          class FST;
          class Util$TopResults;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
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

          class Util$TopNSearcher : public ::java::lang::Object {
          public:
            enum {
              mid_init$_95a8ae3f,
              mid_addStartPaths_9e8aa683,
              mid_search_c06b4353,
              mid_acceptResult_5219743c,
              mid_addIfCompetitive_175f8fc8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$TopNSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Util$TopNSearcher(const Util$TopNSearcher& obj) : ::java::lang::Object(obj) {}

            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &);

            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::Util$TopResults search() const;
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
          extern PyTypeObject PY_TYPE(Util$TopNSearcher);

          class t_Util$TopNSearcher {
          public:
            PyObject_HEAD
            Util$TopNSearcher object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$TopNSearcher *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$TopNSearcher&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$TopNSearcher&, PyTypeObject *);
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
