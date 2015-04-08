#ifndef org_apache_lucene_facet_taxonomy_IntAssociationFacetField_H
#define org_apache_lucene_facet_taxonomy_IntAssociationFacetField_H

#include "org/apache/lucene/facet/taxonomy/AssociationFacetField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

          class IntAssociationFacetField : public ::org::apache::lucene::facet::taxonomy::AssociationFacetField {
          public:
            enum {
              mid_init$_6b7c0b54,
              mid_bytesRefToInt_7bc03ddb,
              mid_intToBytesRef_b57e9c3f,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntAssociationFacetField(jobject obj) : ::org::apache::lucene::facet::taxonomy::AssociationFacetField(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IntAssociationFacetField(const IntAssociationFacetField& obj) : ::org::apache::lucene::facet::taxonomy::AssociationFacetField(obj) {}

            IntAssociationFacetField(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);

            static jint bytesRefToInt(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::BytesRef intToBytesRef(jint);
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
          extern PyTypeObject PY_TYPE(IntAssociationFacetField);

          class t_IntAssociationFacetField {
          public:
            PyObject_HEAD
            IntAssociationFacetField object;
            static PyObject *wrap_Object(const IntAssociationFacetField&);
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
