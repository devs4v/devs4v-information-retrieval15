#ifndef org_apache_lucene_index_IndexableFieldType_H
#define org_apache_lucene_index_IndexableFieldType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo$IndexOptions;
        class FieldInfo$DocValuesType;
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
      namespace index {

        class IndexableFieldType : public ::java::lang::Object {
        public:
          enum {
            mid_docValueType_db3dc573,
            mid_indexOptions_e1b704de,
            mid_indexed_54c6a16a,
            mid_omitNorms_54c6a16a,
            mid_storeTermVectorOffsets_54c6a16a,
            mid_storeTermVectorPayloads_54c6a16a,
            mid_storeTermVectorPositions_54c6a16a,
            mid_storeTermVectors_54c6a16a,
            mid_stored_54c6a16a,
            mid_tokenized_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableFieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexableFieldType(const IndexableFieldType& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::FieldInfo$DocValuesType docValueType() const;
          ::org::apache::lucene::index::FieldInfo$IndexOptions indexOptions() const;
          jboolean indexed() const;
          jboolean omitNorms() const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
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
      namespace index {
        extern PyTypeObject PY_TYPE(IndexableFieldType);

        class t_IndexableFieldType {
        public:
          PyObject_HEAD
          IndexableFieldType object;
          static PyObject *wrap_Object(const IndexableFieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
