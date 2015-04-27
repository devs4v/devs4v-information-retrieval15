#ifndef org_apache_lucene_queryparser_xml_builders_FilteredQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_FilteredQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
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

            class FilteredQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_60b0c0b9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FilteredQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FilteredQueryBuilder(const FilteredQueryBuilder& obj) : ::java::lang::Object(obj) {}

              FilteredQueryBuilder(const ::org::apache::lucene::queryparser::xml::FilterBuilder &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &);
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
            extern PyTypeObject PY_TYPE(FilteredQueryBuilder);

            class t_FilteredQueryBuilder {
            public:
              PyObject_HEAD
              FilteredQueryBuilder object;
              static PyObject *wrap_Object(const FilteredQueryBuilder&);
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
