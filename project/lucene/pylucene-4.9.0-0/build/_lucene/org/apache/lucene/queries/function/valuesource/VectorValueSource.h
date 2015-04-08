#ifndef org_apache_lucene_queries_function_valuesource_VectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_VectorValueSource_H

#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
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

            class VectorValueSource : public ::org::apache::lucene::queries::function::valuesource::MultiValueSource {
            public:
              enum {
                mid_init$_1fde8fc3,
                mid_createWeight_1b6125ba,
                mid_description_14c7b5c5,
                mid_dimension_54c6a179,
                mid_equals_290588e2,
                mid_getSources_87851566,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                mid_name_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              VectorValueSource(const VectorValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {}

              VectorValueSource(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jint dimension() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::util::List getSources() const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
              jint hashCode() const;
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
            extern PyTypeObject PY_TYPE(VectorValueSource);

            class t_VectorValueSource {
            public:
              PyObject_HEAD
              VectorValueSource object;
              static PyObject *wrap_Object(const VectorValueSource&);
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
