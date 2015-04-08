#ifndef org_apache_lucene_search_BooleanQuery_H
#define org_apache_lucene_search_BooleanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class BooleanClause$Occur;
        class IndexSearcher;
        class Weight;
        class BooleanClause;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
    class Iterator;
  }
  namespace lang {
    class Object;
    class String;
    class Iterable;
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

        class BooleanQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_bb0c767f,
            mid_add_982477b6,
            mid_add_827be425,
            mid_clauses_87851566,
            mid_clone_6f9339e7,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getClauses_e6b4c83b,
            mid_getMaxClauseCount_54c6a179,
            mid_getMinimumNumberShouldMatch_54c6a179,
            mid_hashCode_54c6a179,
            mid_isCoordDisabled_54c6a16a,
            mid_iterator_40858c90,
            mid_rewrite_7edcaa43,
            mid_setMaxClauseCount_39c7bd3c,
            mid_setMinimumNumberShouldMatch_39c7bd3c,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery(const BooleanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          BooleanQuery();
          BooleanQuery(jboolean);

          void add(const ::org::apache::lucene::search::BooleanClause &) const;
          void add(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::java::util::List clauses() const;
          BooleanQuery clone() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          JArray< ::org::apache::lucene::search::BooleanClause > getClauses() const;
          static jint getMaxClauseCount();
          jint getMinimumNumberShouldMatch() const;
          jint hashCode() const;
          jboolean isCoordDisabled() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static void setMaxClauseCount(jint);
          void setMinimumNumberShouldMatch(jint) const;
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
        extern PyTypeObject PY_TYPE(BooleanQuery);

        class t_BooleanQuery {
        public:
          PyObject_HEAD
          BooleanQuery object;
          static PyObject *wrap_Object(const BooleanQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
