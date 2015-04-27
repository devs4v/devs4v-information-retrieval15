#ifndef org_apache_lucene_search_MultiPhraseQuery_H
#define org_apache_lucene_search_MultiPhraseQuery_H

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
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class List;
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

        class MultiPhraseQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_c9f85e01,
            mid_add_7eca6a81,
            mid_add_8f4de701,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getPositions_dab10e75,
            mid_getSlop_54c6a179,
            mid_getTermArrays_87851566,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_setSlop_39c7bd3c,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery(const MultiPhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          MultiPhraseQuery();

          void add(const JArray< ::org::apache::lucene::index::Term > &) const;
          void add(const ::org::apache::lucene::index::Term &) const;
          void add(const JArray< ::org::apache::lucene::index::Term > &, jint) const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          JArray< jint > getPositions() const;
          jint getSlop() const;
          ::java::util::List getTermArrays() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setSlop(jint) const;
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
        extern PyTypeObject PY_TYPE(MultiPhraseQuery);

        class t_MultiPhraseQuery {
        public:
          PyObject_HEAD
          MultiPhraseQuery object;
          static PyObject *wrap_Object(const MultiPhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
