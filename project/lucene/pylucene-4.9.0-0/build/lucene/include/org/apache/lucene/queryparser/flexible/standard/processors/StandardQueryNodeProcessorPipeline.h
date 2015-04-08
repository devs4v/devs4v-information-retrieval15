#ifndef org_apache_lucene_queryparser_flexible_standard_processors_StandardQueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_standard_processors_StandardQueryNodeProcessorPipeline_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorPipeline.h"

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
          namespace standard {
            namespace processors {

              class StandardQueryNodeProcessorPipeline : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorPipeline {
              public:
                enum {
                  mid_init$_0b1f7132,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryNodeProcessorPipeline(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorPipeline(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryNodeProcessorPipeline(const StandardQueryNodeProcessorPipeline& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorPipeline(obj) {}

                StandardQueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);
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
            namespace processors {
              extern PyTypeObject PY_TYPE(StandardQueryNodeProcessorPipeline);

              class t_StandardQueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                StandardQueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const StandardQueryNodeProcessorPipeline&);
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
