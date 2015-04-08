#ifndef org_apache_lucene_sandbox_queries_SlowFuzzyQuery_H
#define org_apache_lucene_sandbox_queries_SlowFuzzyQuery_H

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
      namespace sandbox {
        namespace queries {

          class SlowFuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
          public:
            enum {
              mid_init$_7eca6a81,
              mid_init$_286d05ee,
              mid_init$_6199618c,
              mid_init$_b597dde2,
              mid_equals_290588e2,
              mid_getMinSimilarity_54c6a176,
              mid_getPrefixLength_54c6a179,
              mid_getTerm_0f71f314,
              mid_hashCode_54c6a179,
              mid_toString_97a5258f,
              mid_getTermsEnum_67b5a29a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowFuzzyQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowFuzzyQuery(const SlowFuzzyQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

            static jint defaultMaxExpansions;
            static jfloat defaultMinSimilarity;
            static jint defaultPrefixLength;

            SlowFuzzyQuery(const ::org::apache::lucene::index::Term &);
            SlowFuzzyQuery(const ::org::apache::lucene::index::Term &, jfloat);
            SlowFuzzyQuery(const ::org::apache::lucene::index::Term &, jfloat, jint);
            SlowFuzzyQuery(const ::org::apache::lucene::index::Term &, jfloat, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getMinSimilarity() const;
            jint getPrefixLength() const;
            ::org::apache::lucene::index::Term getTerm() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(SlowFuzzyQuery);

          class t_SlowFuzzyQuery {
          public:
            PyObject_HEAD
            SlowFuzzyQuery object;
            static PyObject *wrap_Object(const SlowFuzzyQuery&);
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
