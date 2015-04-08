#ifndef org_apache_lucene_search_grouping_term_TermGroupFacetCollector_H
#define org_apache_lucene_search_grouping_term_TermGroupFacetCollector_H

#include "org/apache/lucene/search/grouping/AbstractGroupFacetCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace search {
        namespace grouping {
          namespace term {

            class TermGroupFacetCollector : public ::org::apache::lucene::search::grouping::AbstractGroupFacetCollector {
            public:
              enum {
                mid_createTermGroupFacetCollector_36bd7ed1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermGroupFacetCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractGroupFacetCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermGroupFacetCollector(const TermGroupFacetCollector& obj) : ::org::apache::lucene::search::grouping::AbstractGroupFacetCollector(obj) {}

              static TermGroupFacetCollector createTermGroupFacetCollector(const ::java::lang::String &, const ::java::lang::String &, jboolean, const ::org::apache::lucene::util::BytesRef &, jint);
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
            extern PyTypeObject PY_TYPE(TermGroupFacetCollector);

            class t_TermGroupFacetCollector {
            public:
              PyObject_HEAD
              TermGroupFacetCollector object;
              static PyObject *wrap_Object(const TermGroupFacetCollector&);
              static PyObject *wrap_jobject(const jobject&);
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
