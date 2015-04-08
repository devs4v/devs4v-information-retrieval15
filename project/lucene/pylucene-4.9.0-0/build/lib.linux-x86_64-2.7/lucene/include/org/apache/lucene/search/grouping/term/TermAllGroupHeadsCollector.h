#ifndef org_apache_lucene_search_grouping_term_TermAllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_term_TermAllGroupHeadsCollector_H

#include "org/apache/lucene/search/grouping/AbstractAllGroupHeadsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          namespace term {

            class TermAllGroupHeadsCollector : public ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector {
            public:
              enum {
                mid_create_3e5305de,
                mid_create_cf6bc864,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermAllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermAllGroupHeadsCollector(const TermAllGroupHeadsCollector& obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector(obj) {}

              static ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector create(const ::java::lang::String &, const ::org::apache::lucene::search::Sort &);
              static ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector create(const ::java::lang::String &, const ::org::apache::lucene::search::Sort &, jint);
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
            extern PyTypeObject PY_TYPE(TermAllGroupHeadsCollector);

            class t_TermAllGroupHeadsCollector {
            public:
              PyObject_HEAD
              TermAllGroupHeadsCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermAllGroupHeadsCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermAllGroupHeadsCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermAllGroupHeadsCollector&, PyTypeObject *);
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
