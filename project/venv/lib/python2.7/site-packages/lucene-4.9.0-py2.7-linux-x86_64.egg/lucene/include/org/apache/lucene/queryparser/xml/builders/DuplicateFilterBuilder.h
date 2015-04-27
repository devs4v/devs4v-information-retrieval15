#ifndef org_apache_lucene_queryparser_xml_builders_DuplicateFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_DuplicateFilterBuilder_H

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

            class DuplicateFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DuplicateFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DuplicateFilterBuilder(const DuplicateFilterBuilder& obj) : ::java::lang::Object(obj) {}

              DuplicateFilterBuilder();
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
            extern PyTypeObject PY_TYPE(DuplicateFilterBuilder);

            class t_DuplicateFilterBuilder {
            public:
              PyObject_HEAD
              DuplicateFilterBuilder object;
              static PyObject *wrap_Object(const DuplicateFilterBuilder&);
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
