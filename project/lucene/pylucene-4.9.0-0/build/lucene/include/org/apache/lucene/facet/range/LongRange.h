#ifndef org_apache_lucene_facet_range_LongRange_H
#define org_apache_lucene_facet_range_LongRange_H

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

          class LongRange : public ::org::apache::lucene::facet::range::Range {
          public:
            enum {
              mid_init$_1777b4ec,
              mid_accept_0ee6df23,
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

            explicit LongRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LongRange(const LongRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jlong _get_max() const;
            jboolean _get_maxInclusive() const;
            jlong _get_min() const;
            jboolean _get_minInclusive() const;

            LongRange(const ::java::lang::String &, jlong, jboolean, jlong, jboolean);

            jboolean accept(jlong) const;
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
          extern PyTypeObject PY_TYPE(LongRange);

          class t_LongRange {
          public:
            PyObject_HEAD
            LongRange object;
            static PyObject *wrap_Object(const LongRange&);
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
