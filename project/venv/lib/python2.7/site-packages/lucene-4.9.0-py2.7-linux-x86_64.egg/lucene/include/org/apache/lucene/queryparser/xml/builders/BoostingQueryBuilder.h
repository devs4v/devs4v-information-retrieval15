#ifndef org_apache_lucene_queryparser_xml_builders_BoostingQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_BoostingQueryBuilder_H

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

            class BoostingQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_6566a539,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoostingQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BoostingQueryBuilder(const BoostingQueryBuilder& obj) : ::java::lang::Object(obj) {}

              BoostingQueryBuilder(const ::org::apache::lucene::queryparser::xml::QueryBuilder &);
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
            extern PyTypeObject PY_TYPE(BoostingQueryBuilder);

            class t_BoostingQueryBuilder {
            public:
              PyObject_HEAD
              BoostingQueryBuilder object;
              static PyObject *wrap_Object(const BoostingQueryBuilder&);
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
