#ifndef org_apache_lucene_search_DisjunctionMaxQuery_H
#define org_apache_lucene_search_DisjunctionMaxQuery_H

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
    }
  }
}
namespace java {
  namespace util {
    class ArrayList;
    class Set;
    class Iterator;
    class Collection;
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

        class DisjunctionMaxQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_06298cab,
            mid_init$_30a7c9ca,
            mid_add_9bfb370d,
            mid_add_6e301113,
            mid_clone_ca9043ca,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getDisjuncts_21eb51b0,
            mid_getTieBreakerMultiplier_54c6a176,
            mid_hashCode_54c6a179,
            mid_iterator_40858c90,
            mid_rewrite_7edcaa43,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisjunctionMaxQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DisjunctionMaxQuery(const DisjunctionMaxQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DisjunctionMaxQuery(jfloat);
          DisjunctionMaxQuery(const ::java::util::Collection &, jfloat);

          void add(const ::java::util::Collection &) const;
          void add(const ::org::apache::lucene::search::Query &) const;
          DisjunctionMaxQuery clone() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          ::java::util::ArrayList getDisjuncts() const;
          jfloat getTieBreakerMultiplier() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
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
        extern PyTypeObject PY_TYPE(DisjunctionMaxQuery);

        class t_DisjunctionMaxQuery {
        public:
          PyObject_HEAD
          DisjunctionMaxQuery object;
          static PyObject *wrap_Object(const DisjunctionMaxQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
