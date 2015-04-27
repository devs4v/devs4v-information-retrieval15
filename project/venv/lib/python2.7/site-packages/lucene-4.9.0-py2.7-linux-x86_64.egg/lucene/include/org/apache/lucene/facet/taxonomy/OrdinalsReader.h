#ifndef org_apache_lucene_facet_taxonomy_OrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalsReader_H

#include "java/lang/Object.h"

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

          class OrdinalsReader : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getIndexFieldName_14c7b5c5,
              mid_getReader_7c7f912a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalsReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OrdinalsReader(const OrdinalsReader& obj) : ::java::lang::Object(obj) {}

            OrdinalsReader();

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
          extern PyTypeObject PY_TYPE(OrdinalsReader);

          class t_OrdinalsReader {
          public:
            PyObject_HEAD
            OrdinalsReader object;
            static PyObject *wrap_Object(const OrdinalsReader&);
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
