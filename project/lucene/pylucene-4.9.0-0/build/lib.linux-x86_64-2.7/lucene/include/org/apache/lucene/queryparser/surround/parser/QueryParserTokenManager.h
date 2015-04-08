#ifndef org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            class QueryParserConstants;
            class Token;
            class CharStream;
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
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {

            class QueryParserTokenManager : public ::java::lang::Object {
            public:
              enum {
                mid_init$_5bfa6473,
                mid_init$_5ba65d1b,
                mid_ReInit_5bfa6473,
                mid_ReInit_5ba65d1b,
                mid_SwitchTo_39c7bd3c,
                mid_getNextToken_353aefd6,
                mid_setDebugStream_1b7c898b,
                mid_jjFillToken_353aefd6,
                max_mid
              };

              enum {
                fid_debugStream,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryParserTokenManager(const QueryParserTokenManager& obj) : ::java::lang::Object(obj) {}

              static JArray< jint > *jjnewLexState;
              static JArray< ::java::lang::String > *jjstrLiteralImages;
              static JArray< ::java::lang::String > *lexStateNames;

              ::java::io::PrintStream _get_debugStream() const;
              void _set_debugStream(const ::java::io::PrintStream &) const;

              QueryParserTokenManager(const ::org::apache::lucene::queryparser::surround::parser::CharStream &);
              QueryParserTokenManager(const ::org::apache::lucene::queryparser::surround::parser::CharStream &, jint);

              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &) const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &, jint) const;
              void SwitchTo(jint) const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
              void setDebugStream(const ::java::io::PrintStream &) const;
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
            extern PyTypeObject PY_TYPE(QueryParserTokenManager);

            class t_QueryParserTokenManager {
            public:
              PyObject_HEAD
              QueryParserTokenManager object;
              static PyObject *wrap_Object(const QueryParserTokenManager&);
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
