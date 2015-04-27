#ifndef org_apache_lucene_queryparser_flexible_standard_builders_NumericRangeQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_NumericRangeQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
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
      namespace search {
        class NumericRangeQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
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

              class NumericRangeQueryNodeBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_ff2bff6d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NumericRangeQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                NumericRangeQueryNodeBuilder(const NumericRangeQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                NumericRangeQueryNodeBuilder();

                ::org::apache::lucene::search::NumericRangeQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyTypeObject PY_TYPE(NumericRangeQueryNodeBuilder);

              class t_NumericRangeQueryNodeBuilder {
              public:
                PyObject_HEAD
                NumericRangeQueryNodeBuilder object;
                static PyObject *wrap_Object(const NumericRangeQueryNodeBuilder&);
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
