#ifndef org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class AtomicReaderContext;
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
        namespace taxonomy {

          class CachedOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
          public:
            enum {
              mid_init$_90116188,
              mid_getIndexFieldName_14c7b5c5,
              mid_getReader_7c7f912a,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CachedOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CachedOrdinalsReader(const CachedOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            CachedOrdinalsReader(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &);

            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
          extern PyTypeObject PY_TYPE(CachedOrdinalsReader);

          class t_CachedOrdinalsReader {
          public:
            PyObject_HEAD
            CachedOrdinalsReader object;
            static PyObject *wrap_Object(const CachedOrdinalsReader&);
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
