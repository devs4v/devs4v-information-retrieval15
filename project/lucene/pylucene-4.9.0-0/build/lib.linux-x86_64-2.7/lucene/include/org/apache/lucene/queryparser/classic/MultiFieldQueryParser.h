#ifndef org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H
#define org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace search {
        class BooleanClause$Occur;
        class Query;
      }
      namespace queryparser {
        namespace classic {
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
        namespace classic {

          class MultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
          public:
            enum {
              mid_init$_822fc5c3,
              mid_init$_84717d3b,
              mid_parse_8e084329,
              mid_parse_6b08888f,
              mid_parse_5707fee1,
              mid_getFieldQuery_c7c8d9a8,
              mid_getFieldQuery_bd696f55,
              mid_getRangeQuery_75fd45b6,
              mid_getFuzzyQuery_45995161,
              mid_getWildcardQuery_38d6e77e,
              mid_getRegexpQuery_38d6e77e,
              mid_getPrefixQuery_38d6e77e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MultiFieldQueryParser(const MultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            MultiFieldQueryParser(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            MultiFieldQueryParser(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

            static ::org::apache::lucene::search::Query parse(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
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
          extern PyTypeObject PY_TYPE(MultiFieldQueryParser);

          class t_MultiFieldQueryParser {
          public:
            PyObject_HEAD
            MultiFieldQueryParser object;
            static PyObject *wrap_Object(const MultiFieldQueryParser&);
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
