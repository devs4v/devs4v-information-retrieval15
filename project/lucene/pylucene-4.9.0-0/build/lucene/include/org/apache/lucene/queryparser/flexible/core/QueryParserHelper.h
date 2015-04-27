#ifndef org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H
#define org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
            }
            namespace parser {
              class SyntaxParser;
            }
            namespace builders {
              class QueryBuilder;
            }
            namespace processors {
              class QueryNodeProcessor;
            }
            class QueryNodeException;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryParserHelper : public ::java::lang::Object {
            public:
              enum {
                mid_init$_552e5b8b,
                mid_getQueryBuilder_8003a74c,
                mid_getQueryConfigHandler_3636d8c3,
                mid_getQueryNodeProcessor_eb463160,
                mid_getSyntaxParser_ede87db0,
                mid_parse_1a6a44ef,
                mid_setQueryBuilder_f13b6d3d,
                mid_setQueryConfigHandler_0b1f7132,
                mid_setQueryNodeProcessor_507a7d15,
                mid_setSyntaxParser_af2d05c9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserHelper(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryParserHelper(const QueryParserHelper& obj) : ::java::lang::Object(obj) {}

              QueryParserHelper(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &, const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &);

              ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder getQueryBuilder() const;
              ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
              ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor getQueryNodeProcessor() const;
              ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser getSyntaxParser() const;
              ::java::lang::Object parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setQueryBuilder(const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
              void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              void setQueryNodeProcessor(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
              void setSyntaxParser(const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &) const;
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
        namespace flexible {
          namespace core {
            extern PyTypeObject PY_TYPE(QueryParserHelper);

            class t_QueryParserHelper {
            public:
              PyObject_HEAD
              QueryParserHelper object;
              static PyObject *wrap_Object(const QueryParserHelper&);
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
