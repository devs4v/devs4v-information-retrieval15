#ifndef org_apache_lucene_search_NumericRangeQuery_H
#define org_apache_lucene_search_NumericRangeQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace java {
  namespace lang {
    class Float;
    class String;
    class Double;
    class Object;
    class Number;
    class Long;
    class Integer;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class NumericRangeQuery : public ::org::apache::lucene::search::MultiTermQuery {
        public:
          enum {
            mid_equals_290588e2,
            mid_getMax_ee47e3e1,
            mid_getMin_ee47e3e1,
            mid_getPrecisionStep_54c6a179,
            mid_hashCode_54c6a179,
            mid_includesMax_54c6a16a,
            mid_includesMin_54c6a16a,
            mid_newDoubleRange_132cc8c2,
            mid_newDoubleRange_b1350bd0,
            mid_newFloatRange_ff7ed1ca,
            mid_newFloatRange_3f37d14c,
            mid_newIntRange_dfaf9ce2,
            mid_newIntRange_25dc6448,
            mid_newLongRange_8e5c5fbe,
            mid_newLongRange_d325b43c,
            mid_toString_97a5258f,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericRangeQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericRangeQuery(const NumericRangeQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::Number getMax() const;
          ::java::lang::Number getMin() const;
          jint getPrecisionStep() const;
          jint hashCode() const;
          jboolean includesMax() const;
          jboolean includesMin() const;
          static NumericRangeQuery newDoubleRange(const ::java::lang::String &, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static NumericRangeQuery newDoubleRange(const ::java::lang::String &, jint, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static NumericRangeQuery newFloatRange(const ::java::lang::String &, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static NumericRangeQuery newFloatRange(const ::java::lang::String &, jint, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static NumericRangeQuery newIntRange(const ::java::lang::String &, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static NumericRangeQuery newIntRange(const ::java::lang::String &, jint, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static NumericRangeQuery newLongRange(const ::java::lang::String &, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
          static NumericRangeQuery newLongRange(const ::java::lang::String &, jint, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(NumericRangeQuery);

        class t_NumericRangeQuery {
        public:
          PyObject_HEAD
          NumericRangeQuery object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NumericRangeQuery *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NumericRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NumericRangeQuery&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
