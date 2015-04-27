#ifndef org_apache_lucene_queries_function_valuesource_EnumFieldSource_H
#define org_apache_lucene_queries_function_valuesource_EnumFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldCache$IntParser;
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
    class Integer;
    class Object;
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

            class EnumFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
            public:
              enum {
                mid_init$_c567ecd0,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit EnumFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              EnumFieldSource(const EnumFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              EnumFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$IntParser &, const ::java::util::Map &, const ::java::util::Map &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
              jint hashCode() const;
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
            extern PyTypeObject PY_TYPE(EnumFieldSource);

            class t_EnumFieldSource {
            public:
              PyObject_HEAD
              EnumFieldSource object;
              static PyObject *wrap_Object(const EnumFieldSource&);
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
