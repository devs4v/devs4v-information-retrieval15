#ifndef org_apache_lucene_queryparser_xml_FilterBuilderFactory_H
#define org_apache_lucene_queryparser_xml_FilterBuilderFactory_H

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

          class FilterBuilderFactory : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_addBuilder_a961e918,
              mid_getFilterBuilder_de450325,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterBuilderFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FilterBuilderFactory(const FilterBuilderFactory& obj) : ::java::lang::Object(obj) {}

            FilterBuilderFactory();

            void addBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::FilterBuilder &) const;
            ::org::apache::lucene::queryparser::xml::FilterBuilder getFilterBuilder(const ::java::lang::String &) const;
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
          extern PyTypeObject PY_TYPE(FilterBuilderFactory);

          class t_FilterBuilderFactory {
          public:
            PyObject_HEAD
            FilterBuilderFactory object;
            static PyObject *wrap_Object(const FilterBuilderFactory&);
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
