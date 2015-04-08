#ifndef org_apache_lucene_queryparser_classic_QueryParser_H
#define org_apache_lucene_queryparser_classic_QueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace classic {
          class QueryParserConstants;
          class CharStream;
          class Token;
          class QueryParserTokenManager;
          class ParseException;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
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

          class QueryParser : public ::org::apache::lucene::queryparser::classic::QueryParserBase {
          public:
            enum {
              mid_init$_504c192d,
              mid_Clause_fbed2634,
              mid_Conjunction_54c6a179,
              mid_Modifiers_54c6a179,
              mid_Query_fbed2634,
              mid_ReInit_52865dcf,
              mid_ReInit_24bde9d3,
              mid_Term_fbed2634,
              mid_TopLevelQuery_fbed2634,
              mid_disable_tracing_54c6a166,
              mid_enable_tracing_54c6a166,
              mid_generateParseException_3c5b7efe,
              mid_getNextToken_1983cf96,
              mid_getToken_61c98f04,
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

            explicit QueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryParser(const QueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {}

            ::org::apache::lucene::queryparser::classic::Token _get_jj_nt() const;
            void _set_jj_nt(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::Token _get_token() const;
            void _set_token(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::QueryParserTokenManager _get_token_source() const;
            void _set_token_source(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;

            QueryParser(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query Clause(const ::java::lang::String &) const;
            jint Conjunction() const;
            jint Modifiers() const;
            ::org::apache::lucene::search::Query Query(const ::java::lang::String &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            ::org::apache::lucene::search::Query Term(const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            void disable_tracing() const;
            void enable_tracing() const;
            ::org::apache::lucene::queryparser::classic::ParseException generateParseException() const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
            ::org::apache::lucene::queryparser::classic::Token getToken(jint) const;
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
          extern PyTypeObject PY_TYPE(QueryParser);

          class t_QueryParser {
          public:
            PyObject_HEAD
            QueryParser object;
            static PyObject *wrap_Object(const QueryParser&);
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
