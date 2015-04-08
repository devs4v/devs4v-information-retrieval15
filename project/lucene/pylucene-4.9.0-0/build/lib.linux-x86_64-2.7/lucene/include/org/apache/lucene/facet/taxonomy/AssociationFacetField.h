#ifndef org_apache_lucene_facet_taxonomy_AssociationFacetField_H
#define org_apache_lucene_facet_taxonomy_AssociationFacetField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
        class FieldType;
      }
    }
  }
}
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
        namespace taxonomy {

          class AssociationFacetField : public ::org::apache::lucene::document::Field {
          public:
            enum {
              mid_init$_d63aecac,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_assoc,
              fid_dim,
              fid_path,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AssociationFacetField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AssociationFacetField(const AssociationFacetField& obj) : ::org::apache::lucene::document::Field(obj) {}

            static ::org::apache::lucene::document::FieldType *TYPE;

            ::org::apache::lucene::util::BytesRef _get_assoc() const;
            ::java::lang::String _get_dim() const;
            JArray< ::java::lang::String > _get_path() const;

            AssociationFacetField(const ::org::apache::lucene::util::BytesRef &, const ::java::lang::String &, const JArray< ::java::lang::String > &);

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
          extern PyTypeObject PY_TYPE(AssociationFacetField);

          class t_AssociationFacetField {
          public:
            PyObject_HEAD
            AssociationFacetField object;
            static PyObject *wrap_Object(const AssociationFacetField&);
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
