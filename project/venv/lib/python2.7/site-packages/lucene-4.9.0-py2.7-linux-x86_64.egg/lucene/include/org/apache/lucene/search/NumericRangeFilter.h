#ifndef org_apache_lucene_search_NumericRangeFilter_H
#define org_apache_lucene_search_NumericRangeFilter_H

#include "org/apache/lucene/search/MultiTermQueryWrapperFilter.h"

namespace java {
  namespace lang {
    class String;
    class Double;
    class Float;
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

        class NumericRangeFilter : public ::org::apache::lucene::search::MultiTermQueryWrapperFilter {
        public:
          enum {
            mid_getMax_ee47e3e1,
            mid_getMin_ee47e3e1,
            mid_getPrecisionStep_54c6a179,
            mid_includesMax_54c6a16a,
            mid_includesMin_54c6a16a,
            mid_newDoubleRange_dba8ce37,
            mid_newDoubleRange_086f57c9,
            mid_newFloatRange_a2bb5c27,
            mid_newFloatRange_ba518bd5,
            mid_newIntRange_0551a8cf,
            mid_newIntRange_eeb70fc1,
            mid_newLongRange_557bc96b,
            mid_newLongRange_b95b6e4d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericRangeFilter(jobject obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericRangeFilter(const NumericRangeFilter& obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {}

          ::java::lang::Number getMax() const;
          ::java::lang::Number getMin() const;
          jint getPrecisionStep() const;
          jboolean includesMax() const;
          jboolean includesMin() const;
          static NumericRangeFilter newDoubleRange(const ::java::lang::String &, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static NumericRangeFilter newDoubleRange(const ::java::lang::String &, jint, const ::java::lang::Double &, const ::java::lang::Double &, jboolean, jboolean);
          static NumericRangeFilter newFloatRange(const ::java::lang::String &, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static NumericRangeFilter newFloatRange(const ::java::lang::String &, jint, const ::java::lang::Float &, const ::java::lang::Float &, jboolean, jboolean);
          static NumericRangeFilter newIntRange(const ::java::lang::String &, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static NumericRangeFilter newIntRange(const ::java::lang::String &, jint, const ::java::lang::Integer &, const ::java::lang::Integer &, jboolean, jboolean);
          static NumericRangeFilter newLongRange(const ::java::lang::String &, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
          static NumericRangeFilter newLongRange(const ::java::lang::String &, jint, const ::java::lang::Long &, const ::java::lang::Long &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(NumericRangeFilter);

        class t_NumericRangeFilter {
        public:
          PyObject_HEAD
          NumericRangeFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NumericRangeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NumericRangeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NumericRangeFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
