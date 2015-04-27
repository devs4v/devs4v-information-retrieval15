#ifndef org_apache_lucene_queries_function_ValueSource_H
#define org_apache_lucene_queries_function_ValueSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class IndexSearcher;
        class SortField;
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

          class ValueSource : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_createWeight_1b6125ba,
              mid_description_14c7b5c5,
              mid_equals_290588e2,
              mid_getSortField_6e3d2211,
              mid_getValues_4c566485,
              mid_hashCode_54c6a179,
              mid_newContext_f71e04af,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ValueSource(const ValueSource& obj) : ::java::lang::Object(obj) {}

            ValueSource();

            void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String description() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::SortField getSortField(jboolean) const;
            ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
            jint hashCode() const;
            static ::java::util::Map newContext(const ::org::apache::lucene::search::IndexSearcher &);
            ::java::lang::String toString() const;
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
      namespace queries {
        namespace function {
          extern PyTypeObject PY_TYPE(ValueSource);

          class t_ValueSource {
          public:
            PyObject_HEAD
            ValueSource object;
            static PyObject *wrap_Object(const ValueSource&);
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
