#ifndef org_apache_lucene_queryparser_xml_builders_UserInputQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_UserInputQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {

            class UserInputQueryBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_3b88137f,
                mid_init$_d77cc89a,
                mid_createQueryParser_0804498e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserInputQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              UserInputQueryBuilder(const UserInputQueryBuilder& obj) : ::java::lang::Object(obj) {}

              UserInputQueryBuilder(const ::org::apache::lucene::queryparser::classic::QueryParser &);
              UserInputQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
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
            extern PyTypeObject PY_TYPE(UserInputQueryBuilder);

            class t_UserInputQueryBuilder {
            public:
              PyObject_HEAD
              UserInputQueryBuilder object;
              static PyObject *wrap_Object(const UserInputQueryBuilder&);
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
