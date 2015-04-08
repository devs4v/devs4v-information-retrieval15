#ifndef org_apache_lucene_search_grouping_term_TermSecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_term_TermSecondPassGroupingCollector_H

#include "org/apache/lucene/search/grouping/AbstractSecondPassGroupingCollector.h"

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
        namespace grouping {
          class SearchGroup;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

            class TermSecondPassGroupingCollector : public ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector {
            public:
              enum {
                mid_init$_11c7601a,
                mid_setNextReader_a6f59947,
                mid_retrieveGroup_e4de8d52,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermSecondPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermSecondPassGroupingCollector(const TermSecondPassGroupingCollector& obj) : ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector(obj) {}

              TermSecondPassGroupingCollector(const ::java::lang::String &, const ::java::util::Collection &, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Sort &, jint, jboolean, jboolean, jboolean);

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
            extern PyTypeObject PY_TYPE(TermSecondPassGroupingCollector);

            class t_TermSecondPassGroupingCollector {
            public:
              PyObject_HEAD
              TermSecondPassGroupingCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermSecondPassGroupingCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermSecondPassGroupingCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermSecondPassGroupingCollector&, PyTypeObject *);
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
