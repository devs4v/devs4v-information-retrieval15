#ifndef org_apache_lucene_queryparser_xml_builders_RangeFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_RangeFilterBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
        }
      }
      namespace search {
        class Filter;
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

            class RangeFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RangeFilterBuilder(const RangeFilterBuilder& obj) : ::java::lang::Object(obj) {}

              RangeFilterBuilder();
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
            extern PyTypeObject PY_TYPE(RangeFilterBuilder);

            class t_RangeFilterBuilder {
            public:
              PyObject_HEAD
              RangeFilterBuilder object;
              static PyObject *wrap_Object(const RangeFilterBuilder&);
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
