#ifndef org_apache_lucene_queryparser_flexible_precedence_processors_PrecedenceQueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_precedence_processors_PrecedenceQueryNodeProcessorPipeline_H

#include "org/apache/lucene/queryparser/flexible/standard/processors/StandardQueryNodeProcessorPipeline.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
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
          namespace precedence {
            namespace processors {

              class PrecedenceQueryNodeProcessorPipeline : public ::org::apache::lucene::queryparser::flexible::standard::processors::StandardQueryNodeProcessorPipeline {
              public:
                enum {
                  mid_init$_0b1f7132,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PrecedenceQueryNodeProcessorPipeline(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::processors::StandardQueryNodeProcessorPipeline(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                PrecedenceQueryNodeProcessorPipeline(const PrecedenceQueryNodeProcessorPipeline& obj) : ::org::apache::lucene::queryparser::flexible::standard::processors::StandardQueryNodeProcessorPipeline(obj) {}

                PrecedenceQueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);
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
          namespace precedence {
            namespace processors {
              extern PyTypeObject PY_TYPE(PrecedenceQueryNodeProcessorPipeline);

              class t_PrecedenceQueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                PrecedenceQueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const PrecedenceQueryNodeProcessorPipeline&);
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
