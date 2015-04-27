#ifndef org_apache_lucene_facet_taxonomy_CachedOrdinalsReader$CachedOrds_H
#define org_apache_lucene_facet_taxonomy_CachedOrdinalsReader$CachedOrds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
        namespace taxonomy {

          class CachedOrdinalsReader$CachedOrds : public ::java::lang::Object {
          public:
            enum {
              mid_init$_76cf77a0,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            enum {
              fid_offsets,
              fid_ordinals,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CachedOrdinalsReader$CachedOrds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CachedOrdinalsReader$CachedOrds(const CachedOrdinalsReader$CachedOrds& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_offsets() const;
            JArray< jint > _get_ordinals() const;

            CachedOrdinalsReader$CachedOrds(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader &, jint);

            jlong ramBytesUsed() const;
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
          extern PyTypeObject PY_TYPE(CachedOrdinalsReader$CachedOrds);

          class t_CachedOrdinalsReader$CachedOrds {
          public:
            PyObject_HEAD
            CachedOrdinalsReader$CachedOrds object;
            static PyObject *wrap_Object(const CachedOrdinalsReader$CachedOrds&);
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
