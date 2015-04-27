#ifndef org_apache_lucene_search_ConstantScoreQuery_H
#define org_apache_lucene_search_ConstantScoreQuery_H

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
        class Filter;
        class Weight;
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
      namespace search {

        class ConstantScoreQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_6e301113,
            mid_init$_9bb37152,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getFilter_b40f961f,
            mid_getQuery_97e3851a,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreQuery(const ConstantScoreQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ConstantScoreQuery(const ::org::apache::lucene::search::Query &);
          ConstantScoreQuery(const ::org::apache::lucene::search::Filter &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          ::org::apache::lucene::search::Filter getFilter() const;
          ::org::apache::lucene::search::Query getQuery() const;
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
      namespace search {
        extern PyTypeObject PY_TYPE(ConstantScoreQuery);

        class t_ConstantScoreQuery {
        public:
          PyObject_HEAD
          ConstantScoreQuery object;
          static PyObject *wrap_Object(const ConstantScoreQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
