#ifndef org_apache_lucene_document_FieldType_H
#define org_apache_lucene_document_FieldType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableFieldType;
        class FieldInfo$IndexOptions;
        class FieldInfo$DocValuesType;
      }
      namespace document {
        class FieldType$NumericType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FieldType : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_docValueType_db3dc573,
            mid_freeze_54c6a166,
            mid_indexOptions_e1b704de,
            mid_indexed_54c6a16a,
            mid_numericPrecisionStep_54c6a179,
            mid_numericType_81bd17c2,
            mid_omitNorms_54c6a16a,
            mid_setDocValueType_09b98f7a,
            mid_setIndexOptions_9cd708ff,
            mid_setIndexed_bb0c767f,
            mid_setNumericPrecisionStep_39c7bd3c,
            mid_setNumericType_d9029e47,
            mid_setOmitNorms_bb0c767f,
            mid_setStoreTermVectorOffsets_bb0c767f,
            mid_setStoreTermVectorPayloads_bb0c767f,
            mid_setStoreTermVectorPositions_bb0c767f,
            mid_setStoreTermVectors_bb0c767f,
            mid_setStored_bb0c767f,
            mid_setTokenized_bb0c767f,
            mid_storeTermVectorOffsets_54c6a16a,
            mid_storeTermVectorPayloads_54c6a16a,
            mid_storeTermVectorPositions_54c6a16a,
            mid_storeTermVectors_54c6a16a,
            mid_stored_54c6a16a,
            mid_toString_14c7b5c5,
            mid_tokenized_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldType(const FieldType& obj) : ::java::lang::Object(obj) {}

          FieldType();

          ::org::apache::lucene::index::FieldInfo$DocValuesType docValueType() const;
          void freeze() const;
          ::org::apache::lucene::index::FieldInfo$IndexOptions indexOptions() const;
          jboolean indexed() const;
          jint numericPrecisionStep() const;
          ::org::apache::lucene::document::FieldType$NumericType numericType() const;
          jboolean omitNorms() const;
          void setDocValueType(const ::org::apache::lucene::index::FieldInfo$DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::FieldInfo$IndexOptions &) const;
          void setIndexed(jboolean) const;
          void setNumericPrecisionStep(jint) const;
          void setNumericType(const ::org::apache::lucene::document::FieldType$NumericType &) const;
          void setOmitNorms(jboolean) const;
          void setStoreTermVectorOffsets(jboolean) const;
          void setStoreTermVectorPayloads(jboolean) const;
          void setStoreTermVectorPositions(jboolean) const;
          void setStoreTermVectors(jboolean) const;
          void setStored(jboolean) const;
          void setTokenized(jboolean) const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          ::java::lang::String toString() const;
          jboolean tokenized() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyTypeObject PY_TYPE(FieldType);

        class t_FieldType {
        public:
          PyObject_HEAD
          FieldType object;
          static PyObject *wrap_Object(const FieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
