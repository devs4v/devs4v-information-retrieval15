#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetField_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
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
        namespace sortedset {

          class SortedSetDocValuesFacetField : public ::org::apache::lucene::document::Field {
          public:
            enum {
              mid_init$_4a264742,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_dim,
              fid_label,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesFacetField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesFacetField(const SortedSetDocValuesFacetField& obj) : ::org::apache::lucene::document::Field(obj) {}

            static ::org::apache::lucene::document::FieldType *TYPE;

            ::java::lang::String _get_dim() const;
            ::java::lang::String _get_label() const;

            SortedSetDocValuesFacetField(const ::java::lang::String &, const ::java::lang::String &);

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
        namespace sortedset {
          extern PyTypeObject PY_TYPE(SortedSetDocValuesFacetField);

          class t_SortedSetDocValuesFacetField {
          public:
            PyObject_HEAD
            SortedSetDocValuesFacetField object;
            static PyObject *wrap_Object(const SortedSetDocValuesFacetField&);
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
