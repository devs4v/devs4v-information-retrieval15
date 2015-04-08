#ifndef org_apache_lucene_search_SearcherManager_H
#define org_apache_lucene_search_SearcherManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class SearcherFactory;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class SearcherManager : public ::org::apache::lucene::search::ReferenceManager {
        public:
          enum {
            mid_init$_8abe804e,
            mid_init$_1c94e792,
            mid_getSearcher_00082010,
            mid_isSearcherCurrent_54c6a16a,
            mid_decRef_474fe51c,
            mid_getRefCount_474fe503,
            mid_tryIncRef_474fe510,
            mid_refreshIfNeeded_8f3bcadb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SearcherManager(const SearcherManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          SearcherManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, const ::org::apache::lucene::search::SearcherFactory &);

          static ::org::apache::lucene::search::IndexSearcher getSearcher(const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::index::IndexReader &);
          jboolean isSearcherCurrent() const;
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
        extern PyTypeObject PY_TYPE(SearcherManager);

        class t_SearcherManager {
        public:
          PyObject_HEAD
          SearcherManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SearcherManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SearcherManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SearcherManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
