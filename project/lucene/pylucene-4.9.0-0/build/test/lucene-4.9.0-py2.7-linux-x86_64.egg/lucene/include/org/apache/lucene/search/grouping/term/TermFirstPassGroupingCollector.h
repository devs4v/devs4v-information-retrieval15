#ifndef org_apache_lucene_search_grouping_term_TermFirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_term_TermFirstPassGroupingCollector_H

#include "org/apache/lucene/search/grouping/AbstractFirstPassGroupingCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace search {
        namespace grouping {
          namespace term {

            class TermFirstPassGroupingCollector : public ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector {
            public:
              enum {
                mid_init$_a296710a,
                mid_setNextReader_a6f59947,
                mid_getDocGroupValue_b57e9c3f,
                mid_copyDocGroupValue_0991fadd,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermFirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermFirstPassGroupingCollector(const TermFirstPassGroupingCollector& obj) : ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector(obj) {}

              TermFirstPassGroupingCollector(const ::java::lang::String &, const ::org::apache::lucene::search::Sort &, jint);

              void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          namespace term {
            extern PyTypeObject PY_TYPE(TermFirstPassGroupingCollector);

            class t_TermFirstPassGroupingCollector {
            public:
              PyObject_HEAD
              TermFirstPassGroupingCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermFirstPassGroupingCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermFirstPassGroupingCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermFirstPassGroupingCollector&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
