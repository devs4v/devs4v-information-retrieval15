#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_NumericRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_NumericRangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/AbstractRangeQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
          namespace standard {
            namespace nodes {
              class NumericQueryNode;
            }
            namespace config {
              class NumericConfig;
            }
          }
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
        namespace flexible {
          namespace standard {
            namespace nodes {

              class NumericRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode {
              public:
                enum {
                  mid_init$_b6ec7fba,
                  mid_getNumericConfig_4e1c9c59,
                  mid_setBounds_b6ec7fba,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                enum {
                  fid_numericConfig,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NumericRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                NumericRangeQueryNode(const NumericRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::config::NumericConfig _get_numericConfig() const;
                void _set_numericConfig(const ::org::apache::lucene::queryparser::flexible::standard::config::NumericConfig &) const;

                NumericRangeQueryNode(const ::org::apache::lucene::queryparser::flexible::standard::nodes::NumericQueryNode &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::NumericQueryNode &, jboolean, jboolean, const ::org::apache::lucene::queryparser::flexible::standard::config::NumericConfig &);

                ::org::apache::lucene::queryparser::flexible::standard::config::NumericConfig getNumericConfig() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::standard::nodes::NumericQueryNode &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::NumericQueryNode &, jboolean, jboolean, const ::org::apache::lucene::queryparser::flexible::standard::config::NumericConfig &) const;
                ::java::lang::String toString() const;
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
            namespace nodes {
              extern PyTypeObject PY_TYPE(NumericRangeQueryNode);

              class t_NumericRangeQueryNode {
              public:
                PyObject_HEAD
                NumericRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_NumericRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const NumericRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const NumericRangeQueryNode&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
