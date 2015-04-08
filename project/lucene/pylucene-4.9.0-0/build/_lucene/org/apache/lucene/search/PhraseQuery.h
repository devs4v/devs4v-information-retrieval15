#ifndef org_apache_lucene_search_PhraseQuery_H
#define org_apache_lucene_search_PhraseQuery_H

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
    class Set;
  }
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
      namespace search {

        class PhraseQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_7eca6a81,
            mid_add_05555589,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getPositions_dab10e75,
            mid_getSlop_54c6a179,
            mid_getTerms_2b86e588,
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

          explicit PhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery(const PhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          PhraseQuery();

          void add(const ::org::apache::lucene::index::Term &) const;
          void add(const ::org::apache::lucene::index::Term &, jint) const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          JArray< jint > getPositions() const;
          jint getSlop() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
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
        extern PyTypeObject PY_TYPE(PhraseQuery);

        class t_PhraseQuery {
        public:
          PyObject_HEAD
          PhraseQuery object;
          static PyObject *wrap_Object(const PhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
