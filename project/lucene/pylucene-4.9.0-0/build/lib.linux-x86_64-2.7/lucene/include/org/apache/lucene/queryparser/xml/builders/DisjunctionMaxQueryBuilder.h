#ifndef org_apache_lucene_queryparser_xml_builders_DisjunctionMaxQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_DisjunctionMaxQueryBuilder_H

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

            class DisjunctionMaxQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_6566a539,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DisjunctionMaxQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DisjunctionMaxQueryBuilder(const DisjunctionMaxQueryBuilder& obj) : ::java::lang::Object(obj) {}

              DisjunctionMaxQueryBuilder(const ::org::apache::lucene::queryparser::xml::QueryBuilder &);
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
            extern PyTypeObject PY_TYPE(DisjunctionMaxQueryBuilder);

            class t_DisjunctionMaxQueryBuilder {
            public:
              PyObject_HEAD
              DisjunctionMaxQueryBuilder object;
              static PyObject *wrap_Object(const DisjunctionMaxQueryBuilder&);
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
