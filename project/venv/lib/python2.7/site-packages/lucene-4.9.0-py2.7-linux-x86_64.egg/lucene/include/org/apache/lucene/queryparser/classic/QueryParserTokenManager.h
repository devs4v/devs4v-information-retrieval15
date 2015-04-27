#ifndef org_apache_lucene_queryparser_classic_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_classic_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParserConstants;
          class Token;
          class CharStream;
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
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserTokenManager : public ::java::lang::Object {
          public:
            enum {
              mid_init$_24bde9d3,
              mid_init$_27f0394b,
              mid_ReInit_24bde9d3,
              mid_ReInit_27f0394b,
              mid_SwitchTo_39c7bd3c,
              mid_getNextToken_1983cf96,
              mid_setDebugStream_1b7c898b,
              mid_jjFillToken_1983cf96,
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

            QueryParserTokenManager(const ::org::apache::lucene::queryparser::classic::CharStream &);
            QueryParserTokenManager(const ::org::apache::lucene::queryparser::classic::CharStream &, jint);

            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &, jint) const;
            void SwitchTo(jint) const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
            void setDebugStream(const ::java::io::PrintStream &) const;
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

#endif
