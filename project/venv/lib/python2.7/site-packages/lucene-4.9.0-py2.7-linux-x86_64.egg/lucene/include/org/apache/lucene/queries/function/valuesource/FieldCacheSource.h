#ifndef org_apache_lucene_queries_function_valuesource_FieldCacheSource_H
#define org_apache_lucene_queries_function_valuesource_FieldCacheSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldCache;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class FieldCacheSource : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_5fdc3f48,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getField_14c7b5c5,
                mid_getFieldCache_a7c1cc27,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldCacheSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FieldCacheSource(const FieldCacheSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              FieldCacheSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::lang::String getField() const;
              ::org::apache::lucene::search::FieldCache getFieldCache() const;
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
            extern PyTypeObject PY_TYPE(FieldCacheSource);

            class t_FieldCacheSource {
            public:
              PyObject_HEAD
              FieldCacheSource object;
              static PyObject *wrap_Object(const FieldCacheSource&);
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
