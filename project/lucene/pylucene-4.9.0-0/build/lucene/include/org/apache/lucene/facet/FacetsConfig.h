#ifndef org_apache_lucene_facet_FacetsConfig_H
#define org_apache_lucene_facet_FacetsConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig$DimConfig;
        namespace taxonomy {
          class TaxonomyWriter;
        }
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsConfig : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_build_4faaf947,
            mid_build_ae4aef7e,
            mid_getDimConfig_7d95dc61,
            mid_getDimConfigs_db60befd,
            mid_pathToString_1034289b,
            mid_pathToString_64aeb14d,
            mid_pathToString_05f95d9d,
            mid_setHierarchical_f3691645,
            mid_setIndexFieldName_4a264742,
            mid_setMultiValued_f3691645,
            mid_setRequireDimCount_f3691645,
            mid_stringToPath_1f6a174f,
            mid_getDefaultDimConfig_d06bca2f,
            mid_dedupAndEncode_14756a33,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig(const FacetsConfig& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::facet::FacetsConfig$DimConfig *DEFAULT_DIM_CONFIG;
          static ::java::lang::String *DEFAULT_INDEX_FIELD_NAME;

          FacetsConfig();

          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::facet::taxonomy::TaxonomyWriter &, const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::facet::FacetsConfig$DimConfig getDimConfig(const ::java::lang::String &) const;
          ::java::util::Map getDimConfigs() const;
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &, jint);
          static ::java::lang::String pathToString(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          void setHierarchical(const ::java::lang::String &, jboolean) const;
          void setIndexFieldName(const ::java::lang::String &, const ::java::lang::String &) const;
          void setMultiValued(const ::java::lang::String &, jboolean) const;
          void setRequireDimCount(const ::java::lang::String &, jboolean) const;
          static JArray< ::java::lang::String > stringToPath(const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(FacetsConfig);

        class t_FacetsConfig {
        public:
          PyObject_HEAD
          FacetsConfig object;
          static PyObject *wrap_Object(const FacetsConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
