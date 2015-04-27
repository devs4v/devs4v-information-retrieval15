#ifndef org_apache_lucene_queryparser_xml_builders_NumericRangeFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_NumericRangeFilterBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
      }
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {

            class NumericRangeFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_setStrictMode_bb0c767f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NumericRangeFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NumericRangeFilterBuilder(const NumericRangeFilterBuilder& obj) : ::java::lang::Object(obj) {}

              NumericRangeFilterBuilder();

              void setStrictMode(jboolean) const;
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
      namespace queryparser {
        namespace xml {
          namespace builders {
            extern PyTypeObject PY_TYPE(NumericRangeFilterBuilder);

            class t_NumericRangeFilterBuilder {
            public:
              PyObject_HEAD
              NumericRangeFilterBuilder object;
              static PyObject *wrap_Object(const NumericRangeFilterBuilder&);
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
