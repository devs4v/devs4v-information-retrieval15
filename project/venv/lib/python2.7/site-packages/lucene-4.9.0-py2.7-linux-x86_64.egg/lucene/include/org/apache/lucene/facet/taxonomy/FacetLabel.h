#ifndef org_apache_lucene_facet_taxonomy_FacetLabel_H
#define org_apache_lucene_facet_taxonomy_FacetLabel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class FacetLabel : public ::java::lang::Object {
          public:
            enum {
              mid_init$_4dd4540c,
              mid_init$_ba45d66a,
              mid_compareTo_283f83f5,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_longHashCode_54c6a17a,
              mid_subpath_38cf071d,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_components,
              fid_length,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetLabel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FacetLabel(const FacetLabel& obj) : ::java::lang::Object(obj) {}

            static jint MAX_CATEGORY_PATH_LENGTH;

            JArray< ::java::lang::String > _get_components() const;
            jint _get_length() const;

            FacetLabel(const JArray< ::java::lang::String > &);
            FacetLabel(const ::java::lang::String &, const JArray< ::java::lang::String > &);

            jint compareTo(const FacetLabel &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong longHashCode() const;
            FacetLabel subpath(jint) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(FacetLabel);

          class t_FacetLabel {
          public:
            PyObject_HEAD
            FacetLabel object;
            static PyObject *wrap_Object(const FacetLabel&);
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
