#ifndef org_apache_lucene_queries_CustomScoreQuery_H
#define org_apache_lucene_queries_CustomScoreQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class Weight;
      }
      namespace queries {
        namespace function {
          class FunctionQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Set;
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

        class CustomScoreQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_6e301113,
            mid_init$_bf3fc62f,
            mid_init$_02f9eae9,
            mid_clone_c1341b71,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getScoringQueries_e66abcfa,
            mid_getSubQuery_97e3851a,
            mid_hashCode_54c6a179,
            mid_isStrict_54c6a16a,
            mid_name_14c7b5c5,
            mid_rewrite_7edcaa43,
            mid_setStrict_bb0c767f,
            mid_toString_97a5258f,
            mid_getCustomScoreProvider_a7245052,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CustomScoreQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CustomScoreQuery(const CustomScoreQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          CustomScoreQuery(const ::org::apache::lucene::search::Query &);
          CustomScoreQuery(const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::queries::function::FunctionQuery > &);
          CustomScoreQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::queries::function::FunctionQuery &);

          CustomScoreQuery clone() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          JArray< ::org::apache::lucene::search::Query > getScoringQueries() const;
          ::org::apache::lucene::search::Query getSubQuery() const;
          jint hashCode() const;
          jboolean isStrict() const;
          ::java::lang::String name() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setStrict(jboolean) const;
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
        extern PyTypeObject PY_TYPE(CustomScoreQuery);

        class t_CustomScoreQuery {
        public:
          PyObject_HEAD
          CustomScoreQuery object;
          static PyObject *wrap_Object(const CustomScoreQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
