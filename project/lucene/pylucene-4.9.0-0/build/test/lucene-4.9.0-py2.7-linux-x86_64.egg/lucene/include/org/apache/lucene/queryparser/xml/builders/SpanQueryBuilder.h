#ifndef org_apache_lucene_queryparser_xml_builders_SpanQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_SpanQueryBuilder_H

#include "org/apache/lucene/queryparser/xml/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
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

            class SpanQueryBuilder : public ::org::apache::lucene::queryparser::xml::QueryBuilder {
            public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanQueryBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::QueryBuilder(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanQueryBuilder(const SpanQueryBuilder& obj) : ::org::apache::lucene::queryparser::xml::QueryBuilder(obj) {}
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
            extern PyTypeObject PY_TYPE(SpanQueryBuilder);

            class t_SpanQueryBuilder {
            public:
              PyObject_HEAD
              SpanQueryBuilder object;
              static PyObject *wrap_Object(const SpanQueryBuilder&);
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
