#ifndef org_apache_lucene_search_BooleanClause_H
#define org_apache_lucene_search_BooleanClause_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Query;
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

        class BooleanClause : public ::java::lang::Object {
        public:
          enum {
            mid_init$_827be425,
            mid_equals_290588e2,
            mid_getOccur_157730ed,
            mid_getQuery_97e3851a,
            mid_hashCode_54c6a179,
            mid_isProhibited_54c6a16a,
            mid_isRequired_54c6a16a,
            mid_setOccur_23bdc104,
            mid_setQuery_6e301113,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanClause(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BooleanClause(const BooleanClause& obj) : ::java::lang::Object(obj) {}

          BooleanClause(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::BooleanClause$Occur getOccur() const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
          jboolean isProhibited() const;
          jboolean isRequired() const;
          void setOccur(const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          void setQuery(const ::org::apache::lucene::search::Query &) const;
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
        extern PyTypeObject PY_TYPE(BooleanClause);

        class t_BooleanClause {
        public:
          PyObject_HEAD
          BooleanClause object;
          static PyObject *wrap_Object(const BooleanClause&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
