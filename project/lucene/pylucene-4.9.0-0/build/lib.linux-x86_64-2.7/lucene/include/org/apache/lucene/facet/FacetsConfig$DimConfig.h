#ifndef org_apache_lucene_facet_FacetsConfig$DimConfig_H
#define org_apache_lucene_facet_FacetsConfig$DimConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsConfig$DimConfig : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          enum {
            fid_hierarchical,
            fid_indexFieldName,
            fid_multiValued,
            fid_requireDimCount,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig$DimConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig$DimConfig(const FacetsConfig$DimConfig& obj) : ::java::lang::Object(obj) {}

          jboolean _get_hierarchical() const;
          void _set_hierarchical(jboolean) const;
          ::java::lang::String _get_indexFieldName() const;
          void _set_indexFieldName(const ::java::lang::String &) const;
          jboolean _get_multiValued() const;
          void _set_multiValued(jboolean) const;
          jboolean _get_requireDimCount() const;
          void _set_requireDimCount(jboolean) const;

          FacetsConfig$DimConfig();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(FacetsConfig$DimConfig);

        class t_FacetsConfig$DimConfig {
        public:
          PyObject_HEAD
          FacetsConfig$DimConfig object;
          static PyObject *wrap_Object(const FacetsConfig$DimConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
