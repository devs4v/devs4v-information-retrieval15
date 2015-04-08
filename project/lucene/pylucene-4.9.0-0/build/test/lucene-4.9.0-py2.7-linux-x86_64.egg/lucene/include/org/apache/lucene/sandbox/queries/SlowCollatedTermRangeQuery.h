#ifndef org_apache_lucene_sandbox_queries_SlowCollatedTermRangeQuery_H
#define org_apache_lucene_sandbox_queries_SlowCollatedTermRangeQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class SlowCollatedTermRangeQuery : public ::org::apache::lucene::search::MultiTermQuery {
          public:
            enum {
              mid_init$_ad38c2c0,
              mid_equals_290588e2,
              mid_field_14c7b5c5,
              mid_getCollator_44b7fa29,
              mid_getLowerTerm_14c7b5c5,
              mid_getUpperTerm_14c7b5c5,
              mid_hashCode_54c6a179,
              mid_includesLower_54c6a16a,
              mid_includesUpper_54c6a16a,
              mid_toString_97a5258f,
              mid_getTermsEnum_67b5a29a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowCollatedTermRangeQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowCollatedTermRangeQuery(const SlowCollatedTermRangeQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

            SlowCollatedTermRangeQuery(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean, const ::java::text::Collator &);

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String field() const;
            ::java::text::Collator getCollator() const;
            ::java::lang::String getLowerTerm() const;
            ::java::lang::String getUpperTerm() const;
            jint hashCode() const;
            jboolean includesLower() const;
            jboolean includesUpper() const;
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
          extern PyTypeObject PY_TYPE(SlowCollatedTermRangeQuery);

          class t_SlowCollatedTermRangeQuery {
          public:
            PyObject_HEAD
            SlowCollatedTermRangeQuery object;
            static PyObject *wrap_Object(const SlowCollatedTermRangeQuery&);
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
