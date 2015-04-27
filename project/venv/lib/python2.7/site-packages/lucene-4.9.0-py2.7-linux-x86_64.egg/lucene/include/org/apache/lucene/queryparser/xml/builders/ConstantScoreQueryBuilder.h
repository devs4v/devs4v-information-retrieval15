#ifndef org_apache_lucene_queryparser_xml_builders_ConstantScoreQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_ConstantScoreQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class FilterBuilderFactory;
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

            class ConstantScoreQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_08e51f07,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstantScoreQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ConstantScoreQueryBuilder(const ConstantScoreQueryBuilder& obj) : ::java::lang::Object(obj) {}

              ConstantScoreQueryBuilder(const ::org::apache::lucene::queryparser::xml::FilterBuilderFactory &);
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
            extern PyTypeObject PY_TYPE(ConstantScoreQueryBuilder);

            class t_ConstantScoreQueryBuilder {
            public:
              PyObject_HEAD
              ConstantScoreQueryBuilder object;
              static PyObject *wrap_Object(const ConstantScoreQueryBuilder&);
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
