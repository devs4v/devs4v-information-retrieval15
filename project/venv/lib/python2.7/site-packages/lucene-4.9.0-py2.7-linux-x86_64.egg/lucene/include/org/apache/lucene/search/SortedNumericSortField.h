#ifndef org_apache_lucene_search_SortedNumericSortField_H
#define org_apache_lucene_search_SortedNumericSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField$Type;
        class SortedNumericSelector$Type;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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

        class SortedNumericSortField : public ::org::apache::lucene::search::SortField {
        public:
          enum {
            mid_init$_b65c884e,
            mid_init$_28dc1d67,
            mid_init$_f03d0044,
            mid_equals_290588e2,
            mid_getComparator_f38637f4,
            mid_getSelector_26022dee,
            mid_hashCode_54c6a179,
            mid_setMissingValue_290588ee,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSortField(const SortedNumericSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
          ::org::apache::lucene::search::SortedNumericSelector$Type getSelector() const;
          jint hashCode() const;
          void setMissingValue(const ::java::lang::Object &) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(SortedNumericSortField);

        class t_SortedNumericSortField {
        public:
          PyObject_HEAD
          SortedNumericSortField object;
          static PyObject *wrap_Object(const SortedNumericSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
