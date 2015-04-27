#ifndef org_apache_lucene_queries_function_valuesource_IDFValueSource_H
#define org_apache_lucene_queries_function_valuesource_IDFValueSource_H

#include "org/apache/lucene/queries/function/valuesource/DocFreqValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class IDFValueSource : public ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource {
            public:
              enum {
                mid_init$_b45b6622,
                mid_getValues_4c566485,
                mid_name_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IDFValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              IDFValueSource(const IDFValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource(obj) {}

              IDFValueSource(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
              ::java::lang::String name() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyTypeObject PY_TYPE(IDFValueSource);

            class t_IDFValueSource {
            public:
              PyObject_HEAD
              IDFValueSource object;
              static PyObject *wrap_Object(const IDFValueSource&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
