#ifndef org_apache_lucene_search_PrefixQuery_H
#define org_apache_lucene_search_PrefixQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
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

        class PrefixQuery : public ::org::apache::lucene::search::MultiTermQuery {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_equals_290588e2,
            mid_getPrefix_0f71f314,
            mid_hashCode_54c6a179,
            mid_toString_97a5258f,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PrefixQuery(const PrefixQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          PrefixQuery(const ::org::apache::lucene::index::Term &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getPrefix() const;
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
        extern PyTypeObject PY_TYPE(PrefixQuery);

        class t_PrefixQuery {
        public:
          PyObject_HEAD
          PrefixQuery object;
          static PyObject *wrap_Object(const PrefixQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
