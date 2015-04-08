#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class Token;
              class StandardSyntaxParserConstants;
              class CharStream;
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
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {

              class StandardSyntaxParserTokenManager : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_8af5fa89,
                  mid_init$_954657e1,
                  mid_ReInit_8af5fa89,
                  mid_ReInit_954657e1,
                  mid_SwitchTo_39c7bd3c,
                  mid_getNextToken_5eb4cff8,
                  mid_setDebugStream_1b7c898b,
                  mid_jjFillToken_5eb4cff8,
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

                explicit StandardSyntaxParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParserTokenManager(const StandardSyntaxParserTokenManager& obj) : ::java::lang::Object(obj) {}

                static JArray< jint > *jjnewLexState;
                static JArray< ::java::lang::String > *jjstrLiteralImages;
                static JArray< ::java::lang::String > *lexStateNames;

                ::java::io::PrintStream _get_debugStream() const;
                void _set_debugStream(const ::java::io::PrintStream &) const;

                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &);
                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &, jint);

                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &, jint) const;
                void SwitchTo(jint) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
                void setDebugStream(const ::java::io::PrintStream &) const;
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
            namespace parser {
              extern PyTypeObject PY_TYPE(StandardSyntaxParserTokenManager);

              class t_StandardSyntaxParserTokenManager {
              public:
                PyObject_HEAD
                StandardSyntaxParserTokenManager object;
                static PyObject *wrap_Object(const StandardSyntaxParserTokenManager&);
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
