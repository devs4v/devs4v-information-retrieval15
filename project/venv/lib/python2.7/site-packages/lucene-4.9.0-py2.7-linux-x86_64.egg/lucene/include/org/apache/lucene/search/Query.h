#ifndef org_apache_lucene_search_Query_H
#define org_apache_lucene_search_Query_H

#include "java/lang/Object.h"

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
    class Class;
    class Cloneable;
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

        class Query : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clone_97e3851a,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getBoost_54c6a176,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_setBoost_06298cab,
            mid_toString_14c7b5c5,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Query(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Query(const Query& obj) : ::java::lang::Object(obj) {}

          Query();

          Query clone() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          jfloat getBoost() const;
          jint hashCode() const;
          Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setBoost(jfloat) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(Query);

        class t_Query {
        public:
          PyObject_HEAD
          Query object;
          static PyObject *wrap_Object(const Query&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
