#ifndef org_apache_lucene_queryparser_xml_builders_SpanOrBuilder_H
#define org_apache_lucene_queryparser_xml_builders_SpanOrBuilder_H

#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
        }
      }
      namespace queryparser {
        namespace xml {
          namespace builders {
            class SpanQueryBuilder;
          }
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

            class SpanOrBuilder : public ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase {
            public:
              enum {
                mid_init$_d9ca31a9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanOrBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanOrBuilder(const SpanOrBuilder& obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {}

              SpanOrBuilder(const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &);
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
            extern PyTypeObject PY_TYPE(SpanOrBuilder);

            class t_SpanOrBuilder {
            public:
              PyObject_HEAD
              SpanOrBuilder object;
              static PyObject *wrap_Object(const SpanOrBuilder&);
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
