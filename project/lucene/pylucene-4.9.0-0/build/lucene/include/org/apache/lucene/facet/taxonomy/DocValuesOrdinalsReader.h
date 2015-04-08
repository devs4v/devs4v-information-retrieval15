#ifndef org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
        }
      }
      namespace index {
        class AtomicReaderContext;
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

          class DocValuesOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_5fdc3f48,
              mid_getIndexFieldName_14c7b5c5,
              mid_getReader_7c7f912a,
              mid_decode_079b7c7a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DocValuesOrdinalsReader(const DocValuesOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            DocValuesOrdinalsReader();
            DocValuesOrdinalsReader(const ::java::lang::String &);

            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
          extern PyTypeObject PY_TYPE(DocValuesOrdinalsReader);

          class t_DocValuesOrdinalsReader {
          public:
            PyObject_HEAD
            DocValuesOrdinalsReader object;
            static PyObject *wrap_Object(const DocValuesOrdinalsReader&);
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
