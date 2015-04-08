#ifndef org_apache_lucene_search_grouping_term_TermAllGroupsCollector_H
#define org_apache_lucene_search_grouping_term_TermAllGroupsCollector_H

#include "org/apache/lucene/search/grouping/AbstractAllGroupsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
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

            class TermAllGroupsCollector : public ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector {
            public:
              enum {
                mid_init$_5fdc3f48,
                mid_init$_6e53ccc6,
                mid_collect_39c7bd3c,
                mid_getGroups_2d2d7de4,
                mid_setNextReader_a6f59947,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermAllGroupsCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermAllGroupsCollector(const TermAllGroupsCollector& obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector(obj) {}

              TermAllGroupsCollector(const ::java::lang::String &);
              TermAllGroupsCollector(const ::java::lang::String &, jint);

              void collect(jint) const;
              ::java::util::Collection getGroups() const;
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
            extern PyTypeObject PY_TYPE(TermAllGroupsCollector);

            class t_TermAllGroupsCollector {
            public:
              PyObject_HEAD
              TermAllGroupsCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermAllGroupsCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermAllGroupsCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermAllGroupsCollector&, PyTypeObject *);
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
