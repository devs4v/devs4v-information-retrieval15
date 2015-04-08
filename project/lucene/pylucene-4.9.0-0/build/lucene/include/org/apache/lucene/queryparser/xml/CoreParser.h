#ifndef org_apache_lucene_queryparser_xml_CoreParser_H
#define org_apache_lucene_queryparser_xml_CoreParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
          class QueryBuilder;
          class ParserException;
        }
        namespace classic {
          class QueryParser;
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
  namespace io {
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class CoreParser : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d77cc89a,
              mid_init$_64322899,
              mid_addFilterBuilder_a961e918,
              mid_addQueryBuilder_155f2547,
              mid_parse_2700f308,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CoreParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CoreParser(const CoreParser& obj) : ::java::lang::Object(obj) {}

            static jint maxNumCachedFilters;

            CoreParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            CoreParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);

            void addFilterBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::FilterBuilder &) const;
            void addQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &) const;
            ::org::apache::lucene::search::Query parse(const ::java::io::InputStream &) const;
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
        namespace xml {
          extern PyTypeObject PY_TYPE(CoreParser);

          class t_CoreParser {
          public:
            PyObject_HEAD
            CoreParser object;
            static PyObject *wrap_Object(const CoreParser&);
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
