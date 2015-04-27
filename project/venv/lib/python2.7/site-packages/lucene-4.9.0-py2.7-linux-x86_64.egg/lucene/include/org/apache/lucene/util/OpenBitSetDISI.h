#ifndef org_apache_lucene_util_OpenBitSetDISI_H
#define org_apache_lucene_util_OpenBitSetDISI_H

#include "org/apache/lucene/util/OpenBitSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
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

        class OpenBitSetDISI : public ::org::apache::lucene::util::OpenBitSet {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_init$_3742065d,
            mid_inPlaceAnd_c2b5607d,
            mid_inPlaceNot_c2b5607d,
            mid_inPlaceOr_c2b5607d,
            mid_inPlaceXor_c2b5607d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OpenBitSetDISI(jobject obj) : ::org::apache::lucene::util::OpenBitSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OpenBitSetDISI(const OpenBitSetDISI& obj) : ::org::apache::lucene::util::OpenBitSet(obj) {}

          OpenBitSetDISI(jint);
          OpenBitSetDISI(const ::org::apache::lucene::search::DocIdSetIterator &, jint);

          void inPlaceAnd(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void inPlaceNot(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void inPlaceOr(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void inPlaceXor(const ::org::apache::lucene::search::DocIdSetIterator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(OpenBitSetDISI);

        class t_OpenBitSetDISI {
        public:
          PyObject_HEAD
          OpenBitSetDISI object;
          static PyObject *wrap_Object(const OpenBitSetDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
