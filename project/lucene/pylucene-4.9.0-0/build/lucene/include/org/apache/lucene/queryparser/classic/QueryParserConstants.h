#ifndef org_apache_lucene_queryparser_classic_QueryParserConstants_H
#define org_apache_lucene_queryparser_classic_QueryParserConstants_H

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
        namespace classic {

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
            static jint BAREOPER;
            static jint Boost;
            static jint CARAT;
            static jint COLON;
            static jint DEFAULT;
            static jint EOF;
            static jint FUZZY_SLOP;
            static jint LPAREN;
            static jint MINUS;
            static jint NOT;
            static jint NUMBER;
            static jint OR;
            static jint PLUS;
            static jint PREFIXTERM;
            static jint QUOTED;
            static jint RANGEEX_END;
            static jint RANGEEX_START;
            static jint RANGEIN_END;
            static jint RANGEIN_START;
            static jint RANGE_GOOP;
            static jint RANGE_QUOTED;
            static jint RANGE_TO;
            static jint REGEXPTERM;
            static jint RPAREN;
            static jint Range;
            static jint STAR;
            static jint TERM;
            static jint WILDTERM;
            static jint _ESCAPED_CHAR;
            static jint _NUM_CHAR;
            static jint _QUOTED_CHAR;
            static jint _TERM_CHAR;
            static jint _TERM_START_CHAR;
            static jint _WHITESPACE;
            static JArray< ::java::lang::String > *tokenImage;
          };
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
        namespace classic {
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

#endif
