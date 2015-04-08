#ifndef org_apache_lucene_queries_FilterClause_H
#define org_apache_lucene_queries_FilterClause_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Filter;
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
      namespace queries {

        class FilterClause : public ::java::lang::Object {
        public:
          enum {
            mid_init$_7373f548,
            mid_equals_290588e2,
            mid_getFilter_b40f961f,
            mid_getOccur_157730ed,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterClause(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterClause(const FilterClause& obj) : ::java::lang::Object(obj) {}

          FilterClause(const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::BooleanClause$Occur &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Filter getFilter() const;
          ::org::apache::lucene::search::BooleanClause$Occur getOccur() const;
          jint hashCode() const;
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
      namespace queries {
        extern PyTypeObject PY_TYPE(FilterClause);

        class t_FilterClause {
        public:
          PyObject_HEAD
          FilterClause object;
          static PyObject *wrap_Object(const FilterClause&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
