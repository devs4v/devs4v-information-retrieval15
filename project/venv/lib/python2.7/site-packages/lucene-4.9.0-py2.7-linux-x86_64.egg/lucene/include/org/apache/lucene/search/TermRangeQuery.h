#ifndef org_apache_lucene_search_TermRangeQuery_H
#define org_apache_lucene_search_TermRangeQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermRangeQuery : public ::org::apache::lucene::search::MultiTermQuery {
        public:
          enum {
            mid_init$_d3423b66,
            mid_equals_290588e2,
            mid_getLowerTerm_4ae19461,
            mid_getUpperTerm_4ae19461,
            mid_hashCode_54c6a179,
            mid_includesLower_54c6a16a,
            mid_includesUpper_54c6a16a,
            mid_newStringRange_ae529bcc,
            mid_toString_97a5258f,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermRangeQuery(const TermRangeQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef getLowerTerm() const;
          ::org::apache::lucene::util::BytesRef getUpperTerm() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(TermRangeQuery);

        class t_TermRangeQuery {
        public:
          PyObject_HEAD
          TermRangeQuery object;
          static PyObject *wrap_Object(const TermRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
