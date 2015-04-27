#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
          namespace writercache {
            class TaxonomyWriterCache;
          }
          class TaxonomyWriter;
          class FacetLabel;
        }
      }
      namespace index {
        class IndexWriterConfig$OpenMode;
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
    class String;
  }
  namespace util {
    class Map;
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

            class DirectoryTaxonomyWriter : public ::java::lang::Object {
            public:
              enum {
                mid_init$_2e261ef2,
                mid_init$_288989fd,
                mid_init$_c98cdfb3,
                mid_addCategory_283f83f5,
                mid_addTaxonomy_0e53fb1b,
                mid_close_54c6a166,
                mid_commit_54c6a166,
                mid_defaultTaxonomyWriterCache_3cef12bd,
                mid_getCommitData_db60befd,
                mid_getDirectory_1f3934bb,
                mid_getParent_39c7bd23,
                mid_getSize_54c6a179,
                mid_getTaxonomyEpoch_54c6a17a,
                mid_prepareCommit_54c6a166,
                mid_replaceTaxonomy_2e261ef2,
                mid_rollback_54c6a166,
                mid_setCacheMissesUntilFill_39c7bd3c,
                mid_setCommitData_4c9e2b1c,
                mid_unlock_2e261ef2,
                mid_ensureOpen_54c6a166,
                mid_openIndexWriter_cd637c77,
                mid_createIndexWriterConfig_ecf4c6f7,
                mid_closeResources_54c6a166,
                mid_findCategory_283f83f5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter(const DirectoryTaxonomyWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INDEX_EPOCH;

              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &, const ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache &);

              jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              void addTaxonomy(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter$OrdinalMap &) const;
              void close() const;
              void commit() const;
              static ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache defaultTaxonomyWriterCache();
              ::java::util::Map getCommitData() const;
              ::org::apache::lucene::store::Directory getDirectory() const;
              jint getParent(jint) const;
              jint getSize() const;
              jlong getTaxonomyEpoch() const;
              void prepareCommit() const;
              void replaceTaxonomy(const ::org::apache::lucene::store::Directory &) const;
              void rollback() const;
              void setCacheMissesUntilFill(jint) const;
              void setCommitData(const ::java::util::Map &) const;
              static void unlock(const ::org::apache::lucene::store::Directory &);
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
            extern PyTypeObject PY_TYPE(DirectoryTaxonomyWriter);

            class t_DirectoryTaxonomyWriter {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter&);
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
