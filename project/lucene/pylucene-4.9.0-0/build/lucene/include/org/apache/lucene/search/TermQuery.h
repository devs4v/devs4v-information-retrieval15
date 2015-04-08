#ifndef org_apache_lucene_search_TermQuery_H
#define org_apache_lucene_search_TermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermContext;
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
    class Class;
    class String;
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

        class TermQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_init$_ec3f6ef2,
            mid_init$_05555589,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getTerm_0f71f314,
            mid_hashCode_54c6a179,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermQuery(const TermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermQuery(const ::org::apache::lucene::index::Term &);
          TermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermContext &);
          TermQuery(const ::org::apache::lucene::index::Term &, jint);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          ::org::apache::lucene::index::Term getTerm() const;
          jint hashCode() const;
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
        extern PyTypeObject PY_TYPE(TermQuery);

        class t_TermQuery {
        public:
          PyObject_HEAD
          TermQuery object;
          static PyObject *wrap_Object(const TermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
