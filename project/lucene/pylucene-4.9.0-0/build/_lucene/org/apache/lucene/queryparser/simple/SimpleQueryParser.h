#ifndef org_apache_lucene_queryparser_simple_SimpleQueryParser_H
#define org_apache_lucene_queryparser_simple_SimpleQueryParser_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Query;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Float;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace simple {

          class SimpleQueryParser : public ::org::apache::lucene::util::QueryBuilder {
          public:
            enum {
              mid_init$_b5f2d646,
              mid_init$_55ca1e02,
              mid_init$_284c8124,
              mid_getDefaultOperator_157730ed,
              mid_parse_fbed2634,
              mid_setDefaultOperator_23bdc104,
              mid_newPrefixQuery_fbed2634,
              mid_newFuzzyQuery_936f6c82,
              mid_newPhraseQuery_936f6c82,
              mid_simplify_1ffd0b56,
              mid_newDefaultQuery_fbed2634,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleQueryParser(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SimpleQueryParser(const SimpleQueryParser& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static jint AND_OPERATOR;
            static jint ESCAPE_OPERATOR;
            static jint FUZZY_OPERATOR;
            static jint NEAR_OPERATOR;
            static jint NOT_OPERATOR;
            static jint OR_OPERATOR;
            static jint PHRASE_OPERATOR;
            static jint PRECEDENCE_OPERATORS;
            static jint PREFIX_OPERATOR;
            static jint WHITESPACE_OPERATOR;

            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &, jint);

            ::org::apache::lucene::search::BooleanClause$Occur getDefaultOperator() const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setDefaultOperator(const ::org::apache::lucene::search::BooleanClause$Occur &) const;
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
        namespace simple {
          extern PyTypeObject PY_TYPE(SimpleQueryParser);

          class t_SimpleQueryParser {
          public:
            PyObject_HEAD
            SimpleQueryParser object;
            static PyObject *wrap_Object(const SimpleQueryParser&);
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
