#ifndef org_apache_lucene_facet_range_Range_H
#define org_apache_lucene_facet_range_Range_H

#include "java/lang/Object.h"

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

          class Range : public ::java::lang::Object {
          public:
            enum {
              mid_getFilter_f7e0d95b,
              mid_getFilter_fc904367,
              mid_failNoMatch_54c6a166,
              max_mid
            };

            enum {
              fid_label,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Range(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Range(const Range& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String _get_label() const;

            ::org::apache::lucene::search::Filter getFilter(const ::org::apache::lucene::queries::function::ValueSource &) const;
            ::org::apache::lucene::search::Filter getFilter(const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::queries::function::ValueSource &) const;
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
          extern PyTypeObject PY_TYPE(Range);

          class t_Range {
          public:
            PyObject_HEAD
            Range object;
            static PyObject *wrap_Object(const Range&);
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
