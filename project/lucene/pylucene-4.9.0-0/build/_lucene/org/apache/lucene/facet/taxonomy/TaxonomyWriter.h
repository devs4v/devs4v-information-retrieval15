#ifndef org_apache_lucene_facet_taxonomy_TaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_TaxonomyWriter_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
      namespace index {
        class TwoPhaseCommit;
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

          class TaxonomyWriter : public ::java::io::Closeable {
          public:
            enum {
              mid_addCategory_283f83f5,
              mid_getCommitData_db60befd,
              mid_getParent_39c7bd23,
              mid_getSize_54c6a179,
              mid_setCommitData_4c9e2b1c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyWriter(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyWriter(const TaxonomyWriter& obj) : ::java::io::Closeable(obj) {}

            jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            ::java::util::Map getCommitData() const;
            jint getParent(jint) const;
            jint getSize() const;
            void setCommitData(const ::java::util::Map &) const;
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
          extern PyTypeObject PY_TYPE(TaxonomyWriter);

          class t_TaxonomyWriter {
          public:
            PyObject_HEAD
            TaxonomyWriter object;
            static PyObject *wrap_Object(const TaxonomyWriter&);
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
