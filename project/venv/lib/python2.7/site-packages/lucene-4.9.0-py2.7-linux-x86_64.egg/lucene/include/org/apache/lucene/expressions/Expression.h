#ifndef org_apache_lucene_expressions_Expression_H
#define org_apache_lucene_expressions_Expression_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class Rescorer;
      }
      namespace expressions {
        class Bindings;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {

        class Expression : public ::java::lang::Object {
        public:
          enum {
            mid_evaluate_d2e34bbb,
            mid_getRescorer_2fab3242,
            mid_getSortField_5395b0cd,
            mid_getValueSource_125265df,
            max_mid
          };

          enum {
            fid_sourceText,
            fid_variables,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Expression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Expression(const Expression& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_sourceText() const;
          JArray< ::java::lang::String > _get_variables() const;

          jdouble evaluate(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &) const;
          ::org::apache::lucene::search::Rescorer getRescorer(const ::org::apache::lucene::expressions::Bindings &) const;
          ::org::apache::lucene::search::SortField getSortField(const ::org::apache::lucene::expressions::Bindings &, jboolean) const;
          ::org::apache::lucene::queries::function::ValueSource getValueSource(const ::org::apache::lucene::expressions::Bindings &) const;
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
        extern PyTypeObject PY_TYPE(Expression);

        class t_Expression {
        public:
          PyObject_HEAD
          Expression object;
          static PyObject *wrap_Object(const Expression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
