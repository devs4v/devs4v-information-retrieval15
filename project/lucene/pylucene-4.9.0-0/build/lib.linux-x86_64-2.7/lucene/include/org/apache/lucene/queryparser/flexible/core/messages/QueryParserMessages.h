#ifndef org_apache_lucene_queryparser_flexible_core_messages_QueryParserMessages_H
#define org_apache_lucene_queryparser_flexible_core_messages_QueryParserMessages_H

#include "org/apache/lucene/queryparser/flexible/messages/NLS.h"

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
          namespace core {
            namespace messages {

              class QueryParserMessages : public ::org::apache::lucene::queryparser::flexible::messages::NLS {
              public:

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryParserMessages(jobject obj) : ::org::apache::lucene::queryparser::flexible::messages::NLS(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryParserMessages(const QueryParserMessages& obj) : ::org::apache::lucene::queryparser::flexible::messages::NLS(obj) {}

                static ::java::lang::String *COULD_NOT_PARSE_NUMBER;
                static ::java::lang::String *EMPTY_MESSAGE;
                static ::java::lang::String *INVALID_SYNTAX;
                static ::java::lang::String *INVALID_SYNTAX_CANNOT_PARSE;
                static ::java::lang::String *INVALID_SYNTAX_ESCAPE_CHARACTER;
                static ::java::lang::String *INVALID_SYNTAX_ESCAPE_NONE_HEX_UNICODE;
                static ::java::lang::String *INVALID_SYNTAX_ESCAPE_UNICODE_TRUNCATION;
                static ::java::lang::String *INVALID_SYNTAX_FUZZY_EDITS;
                static ::java::lang::String *INVALID_SYNTAX_FUZZY_LIMITS;
                static ::java::lang::String *LEADING_WILDCARD_NOT_ALLOWED;
                static ::java::lang::String *LUCENE_QUERY_CONVERSION_ERROR;
                static ::java::lang::String *NODE_ACTION_NOT_SUPPORTED;
                static ::java::lang::String *NUMBER_CLASS_NOT_SUPPORTED_BY_NUMERIC_RANGE_QUERY;
                static ::java::lang::String *NUMERIC_CANNOT_BE_EMPTY;
                static ::java::lang::String *PARAMETER_VALUE_NOT_SUPPORTED;
                static ::java::lang::String *TOO_MANY_BOOLEAN_CLAUSES;
                static ::java::lang::String *UNSUPPORTED_NUMERIC_DATA_TYPE;
                static ::java::lang::String *WILDCARD_NOT_SUPPORTED;
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
          namespace core {
            namespace messages {
              extern PyTypeObject PY_TYPE(QueryParserMessages);

              class t_QueryParserMessages {
              public:
                PyObject_HEAD
                QueryParserMessages object;
                static PyObject *wrap_Object(const QueryParserMessages&);
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
