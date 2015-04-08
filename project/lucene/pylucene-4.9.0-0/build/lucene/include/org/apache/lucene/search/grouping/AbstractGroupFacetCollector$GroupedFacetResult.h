#ifndef org_apache_lucene_search_grouping_AbstractGroupFacetCollector$GroupedFacetResult_H
#define org_apache_lucene_search_grouping_AbstractGroupFacetCollector$GroupedFacetResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace grouping {
          class AbstractGroupFacetCollector$FacetEntry;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class AbstractGroupFacetCollector$GroupedFacetResult : public ::java::lang::Object {
          public:
            enum {
              mid_init$_90d4781f,
              mid_addFacetCount_738fc2ce,
              mid_getFacetEntries_6bc635fe,
              mid_getTotalCount_54c6a179,
              mid_getTotalMissingCount_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractGroupFacetCollector$GroupedFacetResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractGroupFacetCollector$GroupedFacetResult(const AbstractGroupFacetCollector$GroupedFacetResult& obj) : ::java::lang::Object(obj) {}

            AbstractGroupFacetCollector$GroupedFacetResult(jint, jint, jboolean, jint, jint);

            void addFacetCount(const ::org::apache::lucene::util::BytesRef &, jint) const;
            ::java::util::List getFacetEntries(jint, jint) const;
            jint getTotalCount() const;
            jint getTotalMissingCount() const;
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
      namespace search {
        namespace grouping {
          extern PyTypeObject PY_TYPE(AbstractGroupFacetCollector$GroupedFacetResult);

          class t_AbstractGroupFacetCollector$GroupedFacetResult {
          public:
            PyObject_HEAD
            AbstractGroupFacetCollector$GroupedFacetResult object;
            static PyObject *wrap_Object(const AbstractGroupFacetCollector$GroupedFacetResult&);
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
