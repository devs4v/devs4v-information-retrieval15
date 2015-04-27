#ifndef org_apache_lucene_facet_Facets_H
#define org_apache_lucene_facet_Facets_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Number;
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

        class Facets : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getAllDims_cdc2a528,
            mid_getSpecificValue_8ecbcac9,
            mid_getTopChildren_37e8c044,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Facets(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Facets(const Facets& obj) : ::java::lang::Object(obj) {}

          Facets();

          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
        extern PyTypeObject PY_TYPE(Facets);

        class t_Facets {
        public:
          PyObject_HEAD
          Facets object;
          static PyObject *wrap_Object(const Facets&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
