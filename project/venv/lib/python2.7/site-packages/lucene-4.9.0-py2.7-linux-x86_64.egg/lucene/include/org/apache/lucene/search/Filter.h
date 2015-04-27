#ifndef org_apache_lucene_search_Filter_H
#define org_apache_lucene_search_Filter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class DocIdSet;
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
      namespace search {

        class Filter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getDocIdSet_ccce0897,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Filter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Filter(const Filter& obj) : ::java::lang::Object(obj) {}

          Filter();

          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(Filter);

        class t_Filter {
        public:
          PyObject_HEAD
          Filter object;
          static PyObject *wrap_Object(const Filter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
