#ifndef org_apache_lucene_facet_taxonomy_CategoryPath_H
#define org_apache_lucene_facet_taxonomy_CategoryPath_H

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

          class CategoryPath : public ::java::lang::Object {
          public:
            enum {
              mid_init$_4dd4540c,
              mid_init$_7420ac50,
              mid_compareTo_07b9a56f,
              mid_copyFullPath_6d37715f,
              mid_equals_290588e2,
              mid_fullPathLength_54c6a179,
              mid_hashCode_54c6a179,
              mid_longHashCode_54c6a17a,
              mid_subpath_33144d83,
              mid_toString_14c7b5c5,
              mid_toString_7611a535,
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

            explicit CategoryPath(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CategoryPath(const CategoryPath& obj) : ::java::lang::Object(obj) {}

            static CategoryPath *EMPTY;

            JArray< ::java::lang::String > _get_components() const;
            jint _get_length() const;

            CategoryPath(const JArray< ::java::lang::String > &);
            CategoryPath(const ::java::lang::String &, jchar);

            jint compareTo(const CategoryPath &) const;
            jint copyFullPath(const JArray< jchar > &, jint, jchar) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint fullPathLength() const;
            jint hashCode() const;
            jlong longHashCode() const;
            CategoryPath subpath(jint) const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(jchar) const;
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
          extern PyTypeObject PY_TYPE(CategoryPath);

          class t_CategoryPath {
          public:
            PyObject_HEAD
            CategoryPath object;
            static PyObject *wrap_Object(const CategoryPath&);
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
