#ifndef org_apache_lucene_queryparser_flexible_standard_builders_AnyQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_AnyQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanQuery;
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

              class AnyQueryNodeBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_e1a6cc4e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AnyQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                AnyQueryNodeBuilder(const AnyQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                AnyQueryNodeBuilder();

                ::org::apache::lucene::search::BooleanQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyTypeObject PY_TYPE(AnyQueryNodeBuilder);

              class t_AnyQueryNodeBuilder {
              public:
                PyObject_HEAD
                AnyQueryNodeBuilder object;
                static PyObject *wrap_Object(const AnyQueryNodeBuilder&);
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
