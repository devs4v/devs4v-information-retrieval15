#ifndef org_apache_lucene_queries_function_valuesource_LongFieldSource_H
#define org_apache_lucene_queries_function_valuesource_LongFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldCache$LongParser;
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
  namespace util {
    class Map;
  }
  namespace lang {
    class Object;
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class LongFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
            public:
              enum {
                mid_init$_5fdc3f48,
                mid_init$_d7533242,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_externalToLong_5fdc3f54,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                mid_longToObject_fe727f5c,
                mid_longToString_3e02f30e,
                mid_newMutableValueLong_31ee279b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              LongFieldSource(const LongFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              LongFieldSource(const ::java::lang::String &);
              LongFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$LongParser &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jlong externalToLong(const ::java::lang::String &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
              jint hashCode() const;
              ::java::lang::Object longToObject(jlong) const;
              ::java::lang::String longToString(jlong) const;
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
            extern PyTypeObject PY_TYPE(LongFieldSource);

            class t_LongFieldSource {
            public:
              PyObject_HEAD
              LongFieldSource object;
              static PyObject *wrap_Object(const LongFieldSource&);
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
