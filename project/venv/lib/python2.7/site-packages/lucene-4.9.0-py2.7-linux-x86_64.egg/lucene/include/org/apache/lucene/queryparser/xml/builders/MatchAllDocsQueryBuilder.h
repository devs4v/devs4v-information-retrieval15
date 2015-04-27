#ifndef org_apache_lucene_queryparser_xml_builders_MatchAllDocsQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_MatchAllDocsQueryBuilder_H

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

            class MatchAllDocsQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MatchAllDocsQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              MatchAllDocsQueryBuilder(const MatchAllDocsQueryBuilder& obj) : ::java::lang::Object(obj) {}

              MatchAllDocsQueryBuilder();
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
            extern PyTypeObject PY_TYPE(MatchAllDocsQueryBuilder);

            class t_MatchAllDocsQueryBuilder {
            public:
              PyObject_HEAD
              MatchAllDocsQueryBuilder object;
              static PyObject *wrap_Object(const MatchAllDocsQueryBuilder&);
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
