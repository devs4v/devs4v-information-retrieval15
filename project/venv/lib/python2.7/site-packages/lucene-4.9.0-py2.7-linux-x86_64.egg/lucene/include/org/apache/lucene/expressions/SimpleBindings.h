#ifndef org_apache_lucene_expressions_SimpleBindings_H
#define org_apache_lucene_expressions_SimpleBindings_H

#include "org/apache/lucene/expressions/Bindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        class Expression;
      }
      namespace search {
        class SortField;
      }
      namespace queries {
        namespace function {
          class ValueSource;
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
      namespace expressions {

        class SimpleBindings : public ::org::apache::lucene::expressions::Bindings {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_3578f7bf,
            mid_add_bca05986,
            mid_getValueSource_3afe260d,
            mid_validate_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleBindings(jobject obj) : ::org::apache::lucene::expressions::Bindings(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SimpleBindings(const SimpleBindings& obj) : ::org::apache::lucene::expressions::Bindings(obj) {}

          SimpleBindings();

          void add(const ::org::apache::lucene::search::SortField &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::expressions::Expression &) const;
          ::org::apache::lucene::queries::function::ValueSource getValueSource(const ::java::lang::String &) const;
          void validate() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        extern PyTypeObject PY_TYPE(SimpleBindings);

        class t_SimpleBindings {
        public:
          PyObject_HEAD
          SimpleBindings object;
          static PyObject *wrap_Object(const SimpleBindings&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
