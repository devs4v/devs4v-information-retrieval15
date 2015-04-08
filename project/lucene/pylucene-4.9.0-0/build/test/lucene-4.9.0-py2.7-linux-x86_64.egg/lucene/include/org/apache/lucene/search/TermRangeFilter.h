#ifndef org_apache_lucene_search_TermRangeFilter_H
#define org_apache_lucene_search_TermRangeFilter_H

#include "org/apache/lucene/search/MultiTermQueryWrapperFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class TermRangeQuery;
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

        class TermRangeFilter : public ::org::apache::lucene::search::MultiTermQueryWrapperFilter {
        public:
          enum {
            mid_init$_d3423b66,
            mid_Less_b14e87bd,
            mid_More_b14e87bd,
            mid_getLowerTerm_4ae19461,
            mid_getUpperTerm_4ae19461,
            mid_includesLower_54c6a16a,
            mid_includesUpper_54c6a16a,
            mid_newStringRange_f9802b7d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeFilter(jobject obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermRangeFilter(const TermRangeFilter& obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {}

          TermRangeFilter(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);

          static TermRangeFilter Less(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static TermRangeFilter More(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          ::org::apache::lucene::util::BytesRef getLowerTerm() const;
          ::org::apache::lucene::util::BytesRef getUpperTerm() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static TermRangeFilter newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(TermRangeFilter);

        class t_TermRangeFilter {
        public:
          PyObject_HEAD
          TermRangeFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TermRangeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TermRangeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TermRangeFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
