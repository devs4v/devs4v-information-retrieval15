#ifndef org_apache_lucene_search_join_ToChildBlockJoinQuery_H
#define org_apache_lucene_search_join_ToChildBlockJoinQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class Filter;
        class IndexSearcher;
        class Weight;
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
        namespace join {

          class ToChildBlockJoinQuery : public ::org::apache::lucene::search::Query {
          public:
            enum {
              mid_init$_4a597592,
              mid_clone_c3569be0,
              mid_createWeight_367763cb,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToChildBlockJoinQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ToChildBlockJoinQuery(const ToChildBlockJoinQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ToChildBlockJoinQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jboolean);

            ToChildBlockJoinQuery clone() const;
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          extern PyTypeObject PY_TYPE(ToChildBlockJoinQuery);

          class t_ToChildBlockJoinQuery {
          public:
            PyObject_HEAD
            ToChildBlockJoinQuery object;
            static PyObject *wrap_Object(const ToChildBlockJoinQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
