#ifndef org_apache_lucene_queries_function_BoostedQuery_H
#define org_apache_lucene_queries_function_BoostedQuery_H

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
      namespace queries {
        namespace function {
          class ValueSource;
        }
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
      namespace queries {
        namespace function {

          class BoostedQuery : public ::org::apache::lucene::search::Query {
          public:
            enum {
              mid_init$_59d41d93,
              mid_createWeight_367763cb,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_getQuery_97e3851a,
              mid_getValueSource_b62b6193,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BoostedQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BoostedQuery(const BoostedQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            BoostedQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::queries::function::ValueSource &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            ::org::apache::lucene::search::Query getQuery() const;
            ::org::apache::lucene::queries::function::ValueSource getValueSource() const;
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
      namespace queries {
        namespace function {
          extern PyTypeObject PY_TYPE(BoostedQuery);

          class t_BoostedQuery {
          public:
            PyObject_HEAD
            BoostedQuery object;
            static PyObject *wrap_Object(const BoostedQuery&);
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
