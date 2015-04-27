#ifndef org_apache_lucene_search_SearcherLifetimeManager$Pruner_H
#define org_apache_lucene_search_SearcherLifetimeManager$Pruner_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SearcherLifetimeManager$Pruner : public ::java::lang::Object {
        public:
          enum {
            mid_doPrune_362c747b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherLifetimeManager$Pruner(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SearcherLifetimeManager$Pruner(const SearcherLifetimeManager$Pruner& obj) : ::java::lang::Object(obj) {}

          jboolean doPrune(jdouble, const ::org::apache::lucene::search::IndexSearcher &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(SearcherLifetimeManager$Pruner);

        class t_SearcherLifetimeManager$Pruner {
        public:
          PyObject_HEAD
          SearcherLifetimeManager$Pruner object;
          static PyObject *wrap_Object(const SearcherLifetimeManager$Pruner&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
