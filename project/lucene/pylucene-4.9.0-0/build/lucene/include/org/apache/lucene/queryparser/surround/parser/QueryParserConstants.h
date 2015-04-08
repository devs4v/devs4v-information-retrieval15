#ifndef org_apache_lucene_queryparser_surround_parser_QueryParserConstants_H
#define org_apache_lucene_queryparser_surround_parser_QueryParserConstants_H

#include "java/lang/Object.h"

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
        namespace surround {
          namespace parser {

            class QueryParserConstants : public ::java::lang::Object {
            public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserConstants(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryParserConstants(const QueryParserConstants& obj) : ::java::lang::Object(obj) {}

              static jint AND;
              static jint Boost;
              static jint CARAT;
              static jint COLON;
              static jint COMMA;
              static jint DEFAULT;
              static jint EOF;
              static jint LPAREN;
              static jint N;
              static jint NOT;
              static jint NUMBER;
              static jint OR;
              static jint QUOTED;
              static jint RPAREN;
              static jint SUFFIXTERM;
              static jint TERM;
              static jint TRUNCQUOTED;
              static jint TRUNCTERM;
              static jint W;
              static jint _DISTOP_NUM;
              static jint _NUM_CHAR;
              static jint _ONE_CHAR;
              static jint _STAR;
              static jint _TERM_CHAR;
              static jint _WHITESPACE;
              static JArray< ::java::lang::String > *tokenImage;
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
        namespace surround {
          namespace parser {
            extern PyTypeObject PY_TYPE(QueryParserConstants);

            class t_QueryParserConstants {
            public:
              PyObject_HEAD
              QueryParserConstants object;
              static PyObject *wrap_Object(const QueryParserConstants&);
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
