#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
          class SearcherTaxonomyManager$SearcherAndTaxonomy;
        }
      }
      namespace index {
        class IndexWriter;
      }
      namespace search {
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
      namespace facet {
        namespace taxonomy {

          class SearcherTaxonomyManager : public ::org::apache::lucene::search::ReferenceManager {
          public:
            enum {
              mid_init$_c5068542,
              mid_init$_4154e337,
              mid_decRef_db563eaa,
              mid_getRefCount_db563eb5,
              mid_tryIncRef_db563ea6,
              mid_refreshIfNeeded_9a7202bf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager(const SearcherTaxonomyManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

            SearcherTaxonomyManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
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
      namespace facet {
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(SearcherTaxonomyManager);

          class t_SearcherTaxonomyManager {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager&, PyTypeObject *);
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
