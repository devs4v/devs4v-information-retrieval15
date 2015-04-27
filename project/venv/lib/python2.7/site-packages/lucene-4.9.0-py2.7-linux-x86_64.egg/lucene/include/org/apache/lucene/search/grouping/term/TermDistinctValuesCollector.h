#ifndef org_apache_lucene_search_grouping_term_TermDistinctValuesCollector_H
#define org_apache_lucene_search_grouping_term_TermDistinctValuesCollector_H

#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector.h"

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
        namespace grouping {
          namespace term {
            class TermDistinctValuesCollector$GroupCount;
          }
          class SearchGroup;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Collection;
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

            class TermDistinctValuesCollector : public ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector {
            public:
              enum {
                mid_init$_e9bd6d29,
                mid_collect_39c7bd3c,
                mid_getGroups_87851566,
                mid_setNextReader_a6f59947,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermDistinctValuesCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermDistinctValuesCollector(const TermDistinctValuesCollector& obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector(obj) {}

              TermDistinctValuesCollector(const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Collection &);

              void collect(jint) const;
              ::java::util::List getGroups() const;
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
            extern PyTypeObject PY_TYPE(TermDistinctValuesCollector);

            class t_TermDistinctValuesCollector {
            public:
              PyObject_HEAD
              TermDistinctValuesCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermDistinctValuesCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermDistinctValuesCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermDistinctValuesCollector&, PyTypeObject *);
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
