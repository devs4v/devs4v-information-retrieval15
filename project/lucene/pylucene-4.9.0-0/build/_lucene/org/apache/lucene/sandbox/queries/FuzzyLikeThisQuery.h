#ifndef org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H
#define org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class FuzzyLikeThisQuery : public ::org::apache::lucene::search::Query {
          public:
            enum {
              mid_init$_374e0216,
              mid_addTerms_7066f4ef,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_isIgnoreTF_54c6a16a,
              mid_rewrite_7edcaa43,
              mid_setIgnoreTF_bb0c767f,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzyLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FuzzyLikeThisQuery(const FuzzyLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FuzzyLikeThisQuery(jint, const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &, jfloat, jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isIgnoreTF() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setIgnoreTF(jboolean) const;
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(FuzzyLikeThisQuery);

          class t_FuzzyLikeThisQuery {
          public:
            PyObject_HEAD
            FuzzyLikeThisQuery object;
            static PyObject *wrap_Object(const FuzzyLikeThisQuery&);
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
