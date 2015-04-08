#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader$ChildrenIterator;
          class ParallelTaxonomyArrays;
          class FacetLabel;
        }
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
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyReader : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_close_54c6a166,
              mid_decRef_54c6a166,
              mid_getChildren_0efef1b4,
              mid_getCommitUserData_db60befd,
              mid_getOrdinal_283f83f5,
              mid_getOrdinal_ba45d675,
              mid_getParallelTaxonomyArrays_306e748e,
              mid_getPath_38cf071d,
              mid_getRefCount_54c6a179,
              mid_getSize_54c6a179,
              mid_incRef_54c6a166,
              mid_openIfChanged_aed3bb6f,
              mid_tryIncRef_54c6a16a,
              mid_ensureOpen_54c6a166,
              mid_doClose_54c6a166,
              mid_doOpenIfChanged_f67f5c74,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyReader(const TaxonomyReader& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;
            static jint ROOT_ORDINAL;

            TaxonomyReader();

            void close() const;
            void decRef() const;
            ::org::apache::lucene::facet::taxonomy::TaxonomyReader$ChildrenIterator getChildren(jint) const;
            ::java::util::Map getCommitUserData() const;
            jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            jint getOrdinal(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
            ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
            jint getRefCount() const;
            jint getSize() const;
            void incRef() const;
            static TaxonomyReader openIfChanged(const TaxonomyReader &);
            jboolean tryIncRef() const;
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
          extern PyTypeObject PY_TYPE(TaxonomyReader);

          class t_TaxonomyReader {
          public:
            PyObject_HEAD
            TaxonomyReader object;
            static PyObject *wrap_Object(const TaxonomyReader&);
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
