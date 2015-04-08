#ifndef org_apache_lucene_queryparser_xml_builders_BooleanQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_BooleanQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
        }
      }
      namespace search {
        class Query;
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

            class BooleanQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_6566a539,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BooleanQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BooleanQueryBuilder(const BooleanQueryBuilder& obj) : ::java::lang::Object(obj) {}

              BooleanQueryBuilder(const ::org::apache::lucene::queryparser::xml::QueryBuilder &);
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
            extern PyTypeObject PY_TYPE(BooleanQueryBuilder);

            class t_BooleanQueryBuilder {
            public:
              PyObject_HEAD
              BooleanQueryBuilder object;
              static PyObject *wrap_Object(const BooleanQueryBuilder&);
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
