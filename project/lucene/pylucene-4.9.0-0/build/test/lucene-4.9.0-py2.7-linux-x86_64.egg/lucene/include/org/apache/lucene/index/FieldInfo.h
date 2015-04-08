#ifndef org_apache_lucene_index_FieldInfo_H
#define org_apache_lucene_index_FieldInfo_H

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
    class String;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfo : public ::java::lang::Object {
        public:
          enum {
            mid_init$_09a7b3ac,
            mid_attributes_db60befd,
            mid_getAttribute_97a5258f,
            mid_getDocValuesGen_54c6a17a,
            mid_getDocValuesType_db3dc573,
            mid_getIndexOptions_e1b704de,
            mid_getNormType_db3dc573,
            mid_hasDocValues_54c6a16a,
            mid_hasNorms_54c6a16a,
            mid_hasPayloads_54c6a16a,
            mid_hasVectors_54c6a16a,
            mid_isIndexed_54c6a16a,
            mid_omitsNorms_54c6a16a,
            mid_putAttribute_aacea7e9,
            max_mid
          };

          enum {
            fid_name,
            fid_number,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInfo(const FieldInfo& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_name() const;
          jint _get_number() const;

          FieldInfo(const ::java::lang::String &, jboolean, jint, jboolean, jboolean, jboolean, const ::org::apache::lucene::index::FieldInfo$IndexOptions &, const ::org::apache::lucene::index::FieldInfo$DocValuesType &, const ::org::apache::lucene::index::FieldInfo$DocValuesType &, jlong, const ::java::util::Map &);

          ::java::util::Map attributes() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          jlong getDocValuesGen() const;
          ::org::apache::lucene::index::FieldInfo$DocValuesType getDocValuesType() const;
          ::org::apache::lucene::index::FieldInfo$IndexOptions getIndexOptions() const;
          ::org::apache::lucene::index::FieldInfo$DocValuesType getNormType() const;
          jboolean hasDocValues() const;
          jboolean hasNorms() const;
          jboolean hasPayloads() const;
          jboolean hasVectors() const;
          jboolean isIndexed() const;
          jboolean omitsNorms() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(FieldInfo);

        class t_FieldInfo {
        public:
          PyObject_HEAD
          FieldInfo object;
          static PyObject *wrap_Object(const FieldInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
