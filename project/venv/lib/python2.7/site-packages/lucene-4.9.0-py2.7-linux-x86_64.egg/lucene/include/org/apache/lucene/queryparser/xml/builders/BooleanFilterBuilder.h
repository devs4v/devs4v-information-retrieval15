#ifndef org_apache_lucene_queryparser_xml_builders_BooleanFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_BooleanFilterBuilder_H

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

            class BooleanFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_26bb3a92,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BooleanFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BooleanFilterBuilder(const BooleanFilterBuilder& obj) : ::java::lang::Object(obj) {}

              BooleanFilterBuilder(const ::org::apache::lucene::queryparser::xml::FilterBuilder &);
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
            extern PyTypeObject PY_TYPE(BooleanFilterBuilder);

            class t_BooleanFilterBuilder {
            public:
              PyObject_HEAD
              BooleanFilterBuilder object;
              static PyObject *wrap_Object(const BooleanFilterBuilder&);
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
