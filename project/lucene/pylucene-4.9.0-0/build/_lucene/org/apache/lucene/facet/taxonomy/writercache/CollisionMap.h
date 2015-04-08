#ifndef org_apache_lucene_facet_taxonomy_writercache_CollisionMap_H
#define org_apache_lucene_facet_taxonomy_writercache_CollisionMap_H

#include "java/lang/Object.h"

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

            class CollisionMap : public ::java::lang::Object {
            public:
              enum {
                mid_addLabel_71708aa9,
                mid_addLabelOffset_d3236aa4,
                mid_capacity_54c6a179,
                mid_get_7ba580b7,
                mid_size_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CollisionMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              CollisionMap(const CollisionMap& obj) : ::java::lang::Object(obj) {}

              jint addLabel(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint, jint) const;
              void addLabelOffset(jint, jint, jint) const;
              jint capacity() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint size() const;
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
            extern PyTypeObject PY_TYPE(CollisionMap);

            class t_CollisionMap {
            public:
              PyObject_HEAD
              CollisionMap object;
              static PyObject *wrap_Object(const CollisionMap&);
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
