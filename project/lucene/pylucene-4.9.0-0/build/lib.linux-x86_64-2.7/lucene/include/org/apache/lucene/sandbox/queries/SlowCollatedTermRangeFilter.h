#ifndef org_apache_lucene_sandbox_queries_SlowCollatedTermRangeFilter_H
#define org_apache_lucene_sandbox_queries_SlowCollatedTermRangeFilter_H

#include "org/apache/lucene/search/MultiTermQueryWrapperFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          class SlowCollatedTermRangeQuery;
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

          class SlowCollatedTermRangeFilter : public ::org::apache::lucene::search::MultiTermQueryWrapperFilter {
          public:
            enum {
              mid_init$_ad38c2c0,
              mid_getCollator_44b7fa29,
              mid_getLowerTerm_14c7b5c5,
              mid_getUpperTerm_14c7b5c5,
              mid_includesLower_54c6a16a,
              mid_includesUpper_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowCollatedTermRangeFilter(jobject obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowCollatedTermRangeFilter(const SlowCollatedTermRangeFilter& obj) : ::org::apache::lucene::search::MultiTermQueryWrapperFilter(obj) {}

            SlowCollatedTermRangeFilter(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean, const ::java::text::Collator &);

            ::java::text::Collator getCollator() const;
            ::java::lang::String getLowerTerm() const;
            ::java::lang::String getUpperTerm() const;
            jboolean includesLower() const;
            jboolean includesUpper() const;
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
          extern PyTypeObject PY_TYPE(SlowCollatedTermRangeFilter);

          class t_SlowCollatedTermRangeFilter {
          public:
            PyObject_HEAD
            SlowCollatedTermRangeFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SlowCollatedTermRangeFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SlowCollatedTermRangeFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SlowCollatedTermRangeFilter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
