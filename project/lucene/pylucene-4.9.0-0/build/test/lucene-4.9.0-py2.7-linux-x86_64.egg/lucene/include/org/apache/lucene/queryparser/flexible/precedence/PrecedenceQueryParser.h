#ifndef org_apache_lucene_queryparser_flexible_precedence_PrecedenceQueryParser_H
#define org_apache_lucene_queryparser_flexible_precedence_PrecedenceQueryParser_H

#include "org/apache/lucene/queryparser/flexible/standard/StandardQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
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
        namespace flexible {
          namespace precedence {

            class PrecedenceQueryParser : public ::org::apache::lucene::queryparser::flexible::standard::StandardQueryParser {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_31619410,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PrecedenceQueryParser(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::StandardQueryParser(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              PrecedenceQueryParser(const PrecedenceQueryParser& obj) : ::org::apache::lucene::queryparser::flexible::standard::StandardQueryParser(obj) {}

              PrecedenceQueryParser();
              PrecedenceQueryParser(const ::org::apache::lucene::analysis::Analyzer &);
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
        namespace flexible {
          namespace precedence {
            extern PyTypeObject PY_TYPE(PrecedenceQueryParser);

            class t_PrecedenceQueryParser {
            public:
              PyObject_HEAD
              PrecedenceQueryParser object;
              static PyObject *wrap_Object(const PrecedenceQueryParser&);
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
