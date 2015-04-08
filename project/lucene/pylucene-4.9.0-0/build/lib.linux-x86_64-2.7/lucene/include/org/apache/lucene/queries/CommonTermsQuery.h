#ifndef org_apache_lucene_queries_CommonTermsQuery_H
#define org_apache_lucene_queries_CommonTermsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermContext;
        class Term;
        class AtomicReaderContext;
        class IndexReader;
      }
      namespace search {
        class BooleanClause$Occur;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
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
      namespace queries {

        class CommonTermsQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_689325ef,
            mid_init$_5975764c,
            mid_add_7eca6a81,
            mid_collectTermContext_ca4f0fd0,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getHighFreqMinimumNumberShouldMatch_54c6a176,
            mid_getLowFreqMinimumNumberShouldMatch_54c6a176,
            mid_hashCode_54c6a179,
            mid_isCoordDisabled_54c6a16a,
            mid_rewrite_7edcaa43,
            mid_setHighFreqMinimumNumberShouldMatch_06298cab,
            mid_setLowFreqMinimumNumberShouldMatch_06298cab,
            mid_toString_97a5258f,
            mid_newTermQuery_516e731e,
            mid_calcLowFreqMinimumNumberShouldMatch_39c7bd23,
            mid_calcHighFreqMinimumNumberShouldMatch_39c7bd23,
            mid_buildQuery_4123263c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommonTermsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CommonTermsQuery(const CommonTermsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          CommonTermsQuery(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::BooleanClause$Occur &, jfloat);
          CommonTermsQuery(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::BooleanClause$Occur &, jfloat, jboolean);

          void add(const ::org::apache::lucene::index::Term &) const;
          void collectTermContext(const ::org::apache::lucene::index::IndexReader &, const ::java::util::List &, const JArray< ::org::apache::lucene::index::TermContext > &, const JArray< ::org::apache::lucene::index::Term > &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          jfloat getHighFreqMinimumNumberShouldMatch() const;
          jfloat getLowFreqMinimumNumberShouldMatch() const;
          jint hashCode() const;
          jboolean isCoordDisabled() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setHighFreqMinimumNumberShouldMatch(jfloat) const;
          void setLowFreqMinimumNumberShouldMatch(jfloat) const;
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
        extern PyTypeObject PY_TYPE(CommonTermsQuery);

        class t_CommonTermsQuery {
        public:
          PyObject_HEAD
          CommonTermsQuery object;
          static PyObject *wrap_Object(const CommonTermsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
