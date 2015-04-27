#ifndef org_apache_lucene_queryparser_flexible_standard_builders_MatchAllDocsQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_MatchAllDocsQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MatchAllDocsQuery;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
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
        namespace flexible {
          namespace standard {
            namespace builders {

              class MatchAllDocsQueryNodeBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_94b64688,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MatchAllDocsQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                MatchAllDocsQueryNodeBuilder(const MatchAllDocsQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                MatchAllDocsQueryNodeBuilder();

                ::org::apache::lucene::search::MatchAllDocsQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
              };
            }
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
        namespace flexible {
          namespace standard {
            namespace builders {
              extern PyTypeObject PY_TYPE(MatchAllDocsQueryNodeBuilder);

              class t_MatchAllDocsQueryNodeBuilder {
              public:
                PyObject_HEAD
                MatchAllDocsQueryNodeBuilder object;
                static PyObject *wrap_Object(const MatchAllDocsQueryNodeBuilder&);
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
}

#endif
