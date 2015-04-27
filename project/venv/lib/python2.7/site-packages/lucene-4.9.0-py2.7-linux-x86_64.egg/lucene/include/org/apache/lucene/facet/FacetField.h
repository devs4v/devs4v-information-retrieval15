#ifndef org_apache_lucene_facet_FacetField_H
#define org_apache_lucene_facet_FacetField_H

#include "org/apache/lucene/document/Field.h"

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

        class FacetField : public ::org::apache::lucene::document::Field {
        public:
          enum {
            mid_init$_ba45d66a,
            mid_toString_14c7b5c5,
            mid_verifyLabel_5fdc3f48,
            max_mid
          };

          enum {
            fid_dim,
            fid_path,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FacetField(const FacetField& obj) : ::org::apache::lucene::document::Field(obj) {}

          ::java::lang::String _get_dim() const;
          JArray< ::java::lang::String > _get_path() const;

          FacetField(const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::java::lang::String toString() const;
          static void verifyLabel(const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(FacetField);

        class t_FacetField {
        public:
          PyObject_HEAD
          FacetField object;
          static PyObject *wrap_Object(const FacetField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
