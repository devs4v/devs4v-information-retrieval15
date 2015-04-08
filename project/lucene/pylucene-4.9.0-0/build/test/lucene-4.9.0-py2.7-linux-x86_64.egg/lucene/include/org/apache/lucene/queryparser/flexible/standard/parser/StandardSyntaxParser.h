#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
              class ModifierQueryNode$Modifier;
            }
            namespace parser {
              class SyntaxParser;
            }
            class QueryNodeParseException;
          }
          namespace standard {
            namespace parser {
              class StandardSyntaxParserConstants;
              class Token;
              class StandardSyntaxParserTokenManager;
              class CharStream;
              class ParseException;
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
    class CharSequence;
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

              class StandardSyntaxParser : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_init$_8af5fa89,
                  mid_init$_491f91b2,
                  mid_Clause_9709215a,
                  mid_ConjQuery_9709215a,
                  mid_Conjunction_54c6a179,
                  mid_DisjQuery_9709215a,
                  mid_ModClause_9709215a,
                  mid_Modifiers_511690a9,
                  mid_Query_9709215a,
                  mid_ReInit_491f91b2,
                  mid_ReInit_8af5fa89,
                  mid_Term_9709215a,
                  mid_TopLevelQuery_9709215a,
                  mid_disable_tracing_54c6a166,
                  mid_enable_tracing_54c6a166,
                  mid_generateParseException_4481d278,
                  mid_getNextToken_5eb4cff8,
                  mid_getToken_24cc8f6e,
                  mid_parse_051054be,
                  max_mid
                };

                enum {
                  fid_jj_nt,
                  fid_token,
                  fid_token_source,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParser(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParser(const StandardSyntaxParser& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_jj_nt() const;
                void _set_jj_nt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_token() const;
                void _set_token(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager _get_token_source() const;
                void _set_token_source(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;

                StandardSyntaxParser();
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &);
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Clause(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode ConjQuery(const ::java::lang::CharSequence &) const;
                jint Conjunction() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode DisjQuery(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode ModClause(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode$Modifier Modifiers() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Query(const ::java::lang::CharSequence &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Term(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode TopLevelQuery(const ::java::lang::CharSequence &) const;
                void disable_tracing() const;
                void enable_tracing() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::ParseException generateParseException() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getToken(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode parse(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
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
              extern PyTypeObject PY_TYPE(StandardSyntaxParser);

              class t_StandardSyntaxParser {
              public:
                PyObject_HEAD
                StandardSyntaxParser object;
                static PyObject *wrap_Object(const StandardSyntaxParser&);
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
