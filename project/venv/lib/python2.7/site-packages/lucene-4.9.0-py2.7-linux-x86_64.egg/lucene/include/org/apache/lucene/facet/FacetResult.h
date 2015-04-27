#ifndef org_apache_lucene_facet_FacetResult_H
#define org_apache_lucene_facet_FacetResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class LabelAndValue;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Number;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetResult : public ::java::lang::Object {
        public:
          enum {
            mid_init$_4b7182dd,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_childCount,
            fid_dim,
            fid_labelValues,
            fid_path,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FacetResult(const FacetResult& obj) : ::java::lang::Object(obj) {}

          jint _get_childCount() const;
          ::java::lang::String _get_dim() const;
          JArray< ::org::apache::lucene::facet::LabelAndValue > _get_labelValues() const;
          JArray< ::java::lang::String > _get_path() const;
          ::java::lang::Number _get_value() const;

          FacetResult(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::lang::Number &, const JArray< ::org::apache::lucene::facet::LabelAndValue > &, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(FacetResult);

        class t_FacetResult {
        public:
          PyObject_HEAD
          FacetResult object;
          static PyObject *wrap_Object(const FacetResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
