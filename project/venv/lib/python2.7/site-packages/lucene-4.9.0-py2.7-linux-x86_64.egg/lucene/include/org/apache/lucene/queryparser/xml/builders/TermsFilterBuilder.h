#ifndef org_apache_lucene_queryparser_xml_builders_TermsFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_TermsFilterBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
      }
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
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

            class TermsFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_31619410,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermsFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermsFilterBuilder(const TermsFilterBuilder& obj) : ::java::lang::Object(obj) {}

              TermsFilterBuilder(const ::org::apache::lucene::analysis::Analyzer &);
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
            extern PyTypeObject PY_TYPE(TermsFilterBuilder);

            class t_TermsFilterBuilder {
            public:
              PyObject_HEAD
              TermsFilterBuilder object;
              static PyObject *wrap_Object(const TermsFilterBuilder&);
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
