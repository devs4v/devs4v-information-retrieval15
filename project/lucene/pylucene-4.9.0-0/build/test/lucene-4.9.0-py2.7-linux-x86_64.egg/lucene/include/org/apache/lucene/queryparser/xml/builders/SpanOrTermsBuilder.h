#ifndef org_apache_lucene_queryparser_xml_builders_SpanOrTermsBuilder_H
#define org_apache_lucene_queryparser_xml_builders_SpanOrTermsBuilder_H

#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {

            class SpanOrTermsBuilder : public ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase {
            public:
              enum {
                mid_init$_31619410,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanOrTermsBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanOrTermsBuilder(const SpanOrTermsBuilder& obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {}

              SpanOrTermsBuilder(const ::org::apache::lucene::analysis::Analyzer &);
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
        namespace xml {
          namespace builders {
            extern PyTypeObject PY_TYPE(SpanOrTermsBuilder);

            class t_SpanOrTermsBuilder {
            public:
              PyObject_HEAD
              SpanOrTermsBuilder object;
              static PyObject *wrap_Object(const SpanOrTermsBuilder&);
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
