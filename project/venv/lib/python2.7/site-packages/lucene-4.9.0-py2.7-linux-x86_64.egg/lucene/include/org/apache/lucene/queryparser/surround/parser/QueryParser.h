#ifndef org_apache_lucene_queryparser_surround_parser_QueryParser_H
#define org_apache_lucene_queryparser_surround_parser_QueryParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
          }
          namespace parser {
            class QueryParserConstants;
            class QueryParserTokenManager;
            class Token;
            class CharStream;
            class ParseException;
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
  namespace util {
    class ArrayList;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {

            class QueryParser : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_c0dff4ef,
                mid_init$_5bfa6473,
                mid_AndQuery_26528772,
                mid_FieldsQuery_26528772,
                mid_FieldsQueryList_87851566,
                mid_NQuery_26528772,
                mid_NotQuery_26528772,
                mid_OptionalFields_21eb51b0,
                mid_OptionalWeights_5e4f727f,
                mid_OrQuery_26528772,
                mid_PrefixOperatorQuery_26528772,
                mid_PrimaryQuery_26528772,
                mid_ReInit_c0dff4ef,
                mid_ReInit_5bfa6473,
                mid_SimpleTerm_26528772,
                mid_TopSrndQuery_26528772,
                mid_WQuery_26528772,
                mid_disable_tracing_54c6a166,
                mid_enable_tracing_54c6a166,
                mid_generateParseException_dc2be8ae,
                mid_getNextToken_353aefd6,
                mid_getToken_1162c488,
                mid_parse_eb9ff21c,
                mid_parse2_eb9ff21c,
                mid_getPrefixQuery_484af57f,
                mid_getOpDistance_5fdc3f57,
                mid_getOrQuery_685e421b,
                mid_allowedTruncation_5fdc3f44,
                mid_getTruncQuery_eb9ff21c,
                mid_getFieldsQuery_4e036592,
                mid_getAndQuery_685e421b,
                mid_getNotQuery_3a2a55ec,
                mid_checkDistanceSubQueries_657c42bd,
                mid_getDistanceQuery_b401ccf2,
                mid_getTermQuery_484af57f,
                mid_allowedSuffix_5fdc3f44,
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

              explicit QueryParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              QueryParser(const QueryParser& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::queryparser::surround::parser::Token _get_jj_nt() const;
              void _set_jj_nt(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::Token _get_token() const;
              void _set_token(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager _get_token_source() const;
              void _set_token_source(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;

              QueryParser();
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &);
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::CharStream &);

              ::org::apache::lucene::queryparser::surround::query::SrndQuery AndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery FieldsQuery() const;
              ::java::util::List FieldsQueryList() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NotQuery() const;
              ::java::util::ArrayList OptionalFields() const;
              void OptionalWeights(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery OrQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrefixOperatorQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrimaryQuery() const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery SimpleTerm() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery TopSrndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery WQuery() const;
              void disable_tracing() const;
              void enable_tracing() const;
              ::org::apache::lucene::queryparser::surround::parser::ParseException generateParseException() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getToken(jint) const;
              static ::org::apache::lucene::queryparser::surround::query::SrndQuery parse(const ::java::lang::String &);
              ::org::apache::lucene::queryparser::surround::query::SrndQuery parse2(const ::java::lang::String &) const;
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
}

#endif
