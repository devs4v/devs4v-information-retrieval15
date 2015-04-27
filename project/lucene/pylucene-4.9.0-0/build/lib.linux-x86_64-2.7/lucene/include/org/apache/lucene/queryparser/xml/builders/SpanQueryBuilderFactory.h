#ifndef org_apache_lucene_queryparser_xml_builders_SpanQueryBuilderFactory_H
#define org_apache_lucene_queryparser_xml_builders_SpanQueryBuilderFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {
            class SpanQueryBuilder;
          }
        }
      }
      namespace search {
        class Query;
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

            class SpanQueryBuilderFactory : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_addBuilder_0aaa7d83,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanQueryBuilderFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanQueryBuilderFactory(const SpanQueryBuilderFactory& obj) : ::java::lang::Object(obj) {}

              SpanQueryBuilderFactory();

              void addBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
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
            extern PyTypeObject PY_TYPE(SpanQueryBuilderFactory);

            class t_SpanQueryBuilderFactory {
            public:
              PyObject_HEAD
              SpanQueryBuilderFactory object;
              static PyObject *wrap_Object(const SpanQueryBuilderFactory&);
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
