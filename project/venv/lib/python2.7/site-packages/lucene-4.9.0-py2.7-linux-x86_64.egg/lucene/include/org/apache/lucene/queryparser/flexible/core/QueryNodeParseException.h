#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeParseException : public ::org::apache::lucene::queryparser::flexible::core::QueryNodeException {
            public:
              enum {
                mid_init$_c5ec8ca4,
                mid_init$_1dde9d59,
                mid_init$_41dcc0ed,
                mid_getBeginColumn_54c6a179,
                mid_getBeginLine_54c6a179,
                mid_getErrorToken_14c7b5c5,
                mid_getQuery_e0adba2f,
                mid_setNonLocalizedMessage_1dde9d59,
                mid_setQuery_a8afc64a,
                mid_setErrorToken_5fdc3f48,
                mid_setBeginLine_39c7bd3c,
                mid_setBeginColumn_39c7bd3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeParseException(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeParseException(const QueryNodeParseException& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {}

              QueryNodeParseException(const ::java::lang::Throwable &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              jint getBeginColumn() const;
              jint getBeginLine() const;
              ::java::lang::String getErrorToken() const;
              ::java::lang::CharSequence getQuery() const;
              void setNonLocalizedMessage(const ::org::apache::lucene::queryparser::flexible::messages::Message &) const;
              void setQuery(const ::java::lang::CharSequence &) const;
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
            extern PyTypeObject PY_TYPE(QueryNodeParseException);

            class t_QueryNodeParseException {
            public:
              PyObject_HEAD
              QueryNodeParseException object;
              static PyObject *wrap_Object(const QueryNodeParseException&);
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
