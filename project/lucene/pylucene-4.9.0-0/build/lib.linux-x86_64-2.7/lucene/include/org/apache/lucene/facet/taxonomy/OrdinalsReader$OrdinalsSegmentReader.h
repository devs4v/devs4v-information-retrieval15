#ifndef org_apache_lucene_facet_taxonomy_OrdinalsReader$OrdinalsSegmentReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalsReader$OrdinalsSegmentReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
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

          class OrdinalsReader$OrdinalsSegmentReader : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_get_e6e32052,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalsReader$OrdinalsSegmentReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OrdinalsReader$OrdinalsSegmentReader(const OrdinalsReader$OrdinalsSegmentReader& obj) : ::java::lang::Object(obj) {}

            OrdinalsReader$OrdinalsSegmentReader();

            void get(jint, const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyTypeObject PY_TYPE(OrdinalsReader$OrdinalsSegmentReader);

          class t_OrdinalsReader$OrdinalsSegmentReader {
          public:
            PyObject_HEAD
            OrdinalsReader$OrdinalsSegmentReader object;
            static PyObject *wrap_Object(const OrdinalsReader$OrdinalsSegmentReader&);
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
