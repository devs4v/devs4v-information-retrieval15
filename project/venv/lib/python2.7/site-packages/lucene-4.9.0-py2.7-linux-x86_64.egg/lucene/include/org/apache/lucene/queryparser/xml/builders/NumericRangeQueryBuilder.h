#ifndef org_apache_lucene_queryparser_xml_builders_NumericRangeQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_NumericRangeQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
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

            class NumericRangeQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NumericRangeQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NumericRangeQueryBuilder(const NumericRangeQueryBuilder& obj) : ::java::lang::Object(obj) {}

              NumericRangeQueryBuilder();
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
            extern PyTypeObject PY_TYPE(NumericRangeQueryBuilder);

            class t_NumericRangeQueryBuilder {
            public:
              PyObject_HEAD
              NumericRangeQueryBuilder object;
              static PyObject *wrap_Object(const NumericRangeQueryBuilder&);
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
