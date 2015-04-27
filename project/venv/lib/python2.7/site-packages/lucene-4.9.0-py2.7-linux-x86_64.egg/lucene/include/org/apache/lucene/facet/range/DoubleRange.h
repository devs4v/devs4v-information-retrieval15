#ifndef org_apache_lucene_facet_range_DoubleRange_H
#define org_apache_lucene_facet_range_DoubleRange_H

#include "org/apache/lucene/facet/range/Range.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DoubleRange : public ::org::apache::lucene::facet::range::Range {
          public:
            enum {
              mid_init$_1ac9f76c,
              mid_accept_5d1c7649,
              mid_getFilter_fc904367,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_max,
              fid_maxInclusive,
              fid_min,
              fid_minInclusive,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DoubleRange(const DoubleRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jdouble _get_max() const;
            jboolean _get_maxInclusive() const;
            jdouble _get_min() const;
            jboolean _get_minInclusive() const;

            DoubleRange(const ::java::lang::String &, jdouble, jboolean, jdouble, jboolean);

            jboolean accept(jdouble) const;
            ::org::apache::lucene::search::Filter getFilter(const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::queries::function::ValueSource &) const;
            ::java::lang::String toString() const;
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
      namespace facet {
        namespace range {
          extern PyTypeObject PY_TYPE(DoubleRange);

          class t_DoubleRange {
          public:
            PyObject_HEAD
            DoubleRange object;
            static PyObject *wrap_Object(const DoubleRange&);
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
