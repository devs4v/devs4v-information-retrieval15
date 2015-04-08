#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
          class ParallelTaxonomyArrays;
          class FacetLabel;
        }
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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
      namespace facet {
        namespace taxonomy {
          namespace directory {

            class DirectoryTaxonomyReader : public ::org::apache::lucene::facet::taxonomy::TaxonomyReader {
            public:
              enum {
                mid_init$_49dc27eb,
                mid_init$_2e261ef2,
                mid_getCommitUserData_db60befd,
                mid_getOrdinal_283f83f5,
                mid_getParallelTaxonomyArrays_306e748e,
                mid_getPath_38cf071d,
                mid_getSize_54c6a179,
                mid_setCacheSize_39c7bd3c,
                mid_toString_141401b3,
                mid_doClose_54c6a166,
                mid_doOpenIfChanged_57c99022,
                mid_openIndexReader_109b8ac7,
                mid_openIndexReader_880937e0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyReader(const DirectoryTaxonomyReader& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {}

              DirectoryTaxonomyReader(const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
              DirectoryTaxonomyReader(const ::org::apache::lucene::store::Directory &);

              ::java::util::Map getCommitUserData() const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
              ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
              jint getSize() const;
              void setCacheSize(jint) const;
              ::java::lang::String toString(jint) const;
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
      namespace facet {
        namespace taxonomy {
          namespace directory {
            extern PyTypeObject PY_TYPE(DirectoryTaxonomyReader);

            class t_DirectoryTaxonomyReader {
            public:
              PyObject_HEAD
              DirectoryTaxonomyReader object;
              static PyObject *wrap_Object(const DirectoryTaxonomyReader&);
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
