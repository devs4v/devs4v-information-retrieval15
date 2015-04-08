#ifndef org_apache_lucene_queryparser_xml_builders_CachedFilterBuilder_H
#define org_apache_lucene_queryparser_xml_builders_CachedFilterBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          class FilterBuilder;
          class FilterBuilderFactory;
          class QueryBuilderFactory;
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

            class CachedFilterBuilder : public ::java::lang::Object {
            public:
              enum {
                mid_init$_11d0c47f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CachedFilterBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              CachedFilterBuilder(const CachedFilterBuilder& obj) : ::java::lang::Object(obj) {}

              CachedFilterBuilder(const ::org::apache::lucene::queryparser::xml::QueryBuilderFactory &, const ::org::apache::lucene::queryparser::xml::FilterBuilderFactory &, jint);
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
            extern PyTypeObject PY_TYPE(CachedFilterBuilder);

            class t_CachedFilterBuilder {
            public:
              PyObject_HEAD
              CachedFilterBuilder object;
              static PyObject *wrap_Object(const CachedFilterBuilder&);
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
