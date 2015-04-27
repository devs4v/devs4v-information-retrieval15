#ifndef org_apache_lucene_queryparser_xml_builders_SpanBuilderBase_H
#define org_apache_lucene_queryparser_xml_builders_SpanBuilderBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {
            class SpanQueryBuilder;
          }
        }
      }
      namespace search {
        class Query;
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

            class SpanBuilderBase : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanBuilderBase(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanBuilderBase(const SpanBuilderBase& obj) : ::java::lang::Object(obj) {}

              SpanBuilderBase();
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
            extern PyTypeObject PY_TYPE(SpanBuilderBase);

            class t_SpanBuilderBase {
            public:
              PyObject_HEAD
              SpanBuilderBase object;
              static PyObject *wrap_Object(const SpanBuilderBase&);
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
