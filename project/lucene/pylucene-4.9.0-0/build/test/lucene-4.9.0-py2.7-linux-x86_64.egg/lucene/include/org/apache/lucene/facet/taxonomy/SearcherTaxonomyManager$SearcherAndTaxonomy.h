#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager$SearcherAndTaxonomy_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager$SearcherAndTaxonomy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyReader;
          }
        }
      }
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
      namespace facet {
        namespace taxonomy {

          class SearcherTaxonomyManager$SearcherAndTaxonomy : public ::java::lang::Object {
          public:
            enum {
              mid_init$_8978d829,
              max_mid
            };

            enum {
              fid_searcher,
              fid_taxonomyReader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager$SearcherAndTaxonomy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager$SearcherAndTaxonomy(const SearcherTaxonomyManager$SearcherAndTaxonomy& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::search::IndexSearcher _get_searcher() const;
            ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader _get_taxonomyReader() const;

            SearcherTaxonomyManager$SearcherAndTaxonomy(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader &);
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
          extern PyTypeObject PY_TYPE(SearcherTaxonomyManager$SearcherAndTaxonomy);

          class t_SearcherTaxonomyManager$SearcherAndTaxonomy {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager$SearcherAndTaxonomy object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager$SearcherAndTaxonomy *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager$SearcherAndTaxonomy&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager$SearcherAndTaxonomy&, PyTypeObject *);
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
