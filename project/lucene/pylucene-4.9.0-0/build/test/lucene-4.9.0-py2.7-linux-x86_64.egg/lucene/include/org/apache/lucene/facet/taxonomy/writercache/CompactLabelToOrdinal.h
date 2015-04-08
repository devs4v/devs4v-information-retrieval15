#ifndef org_apache_lucene_facet_taxonomy_writercache_CompactLabelToOrdinal_H
#define org_apache_lucene_facet_taxonomy_writercache_CompactLabelToOrdinal_H

#include "org/apache/lucene/facet/taxonomy/writercache/LabelToOrdinal.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
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
          namespace writercache {

            class CompactLabelToOrdinal : public ::org::apache::lucene::facet::taxonomy::writercache::LabelToOrdinal {
            public:
              enum {
                mid_init$_776c6331,
                mid_addLabel_7ba580a8,
                mid_getOrdinal_283f83f5,
                mid_sizeOfMap_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompactLabelToOrdinal(jobject obj) : ::org::apache::lucene::facet::taxonomy::writercache::LabelToOrdinal(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              CompactLabelToOrdinal(const CompactLabelToOrdinal& obj) : ::org::apache::lucene::facet::taxonomy::writercache::LabelToOrdinal(obj) {}

              static jfloat DefaultLoadFactor;

              CompactLabelToOrdinal(jint, jfloat, jint);

              void addLabel(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jint sizeOfMap() const;
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
          namespace writercache {
            extern PyTypeObject PY_TYPE(CompactLabelToOrdinal);

            class t_CompactLabelToOrdinal {
            public:
              PyObject_HEAD
              CompactLabelToOrdinal object;
              static PyObject *wrap_Object(const CompactLabelToOrdinal&);
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
