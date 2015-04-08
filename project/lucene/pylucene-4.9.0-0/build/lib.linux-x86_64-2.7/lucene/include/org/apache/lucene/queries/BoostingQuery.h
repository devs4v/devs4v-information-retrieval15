#ifndef org_apache_lucene_queries_BoostingQuery_H
#define org_apache_lucene_queries_BoostingQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
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
      namespace queries {

        class BoostingQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_7f23a8a3,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostingQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BoostingQuery(const BoostingQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          BoostingQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(BoostingQuery);

        class t_BoostingQuery {
        public:
          PyObject_HEAD
          BoostingQuery object;
          static PyObject *wrap_Object(const BoostingQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
