#ifndef org_apache_lucene_search_PrefixFilter_H
#define org_apache_lucene_search_PrefixFilter_H

#include "org/apache/lucene/search/MultiTermQueryWrapperFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class PrefixQuery;
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
      namespace search {

        class PrefixFilter : public ::org::apache::lucene::search::MultiTermQueryWrapperFilter {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_getPrefix_0f71f314,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixFilter(jobject obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PrefixFilter(const PrefixFilter& obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {}

          PrefixFilter(const ::org::apache::lucene::index::Term &);

          ::org::apache::lucene::index::Term getPrefix() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(PrefixFilter);

        class t_PrefixFilter {
        public:
          PyObject_HEAD
          PrefixFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PrefixFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PrefixFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PrefixFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
