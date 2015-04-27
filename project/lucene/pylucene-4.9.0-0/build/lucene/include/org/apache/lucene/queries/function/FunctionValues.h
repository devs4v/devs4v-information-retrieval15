#ifndef org_apache_lucene_queries_function_FunctionValues_H
#define org_apache_lucene_queries_function_FunctionValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Explanation;
      }
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          class ValueSourceScorer;
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
      namespace queries {
        namespace function {

          class FunctionValues : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_boolVal_39c7bd30,
              mid_byteVal_39c7bd28,
              mid_byteVal_5d2e3265,
              mid_bytesVal_b7fef192,
              mid_doubleVal_39c7bd2e,
              mid_doubleVal_08239127,
              mid_exists_39c7bd30,
              mid_explain_ae608291,
              mid_floatVal_39c7bd2c,
              mid_floatVal_b130a809,
              mid_getRangeScorer_d201bc96,
              mid_getScorer_fca96384,
              mid_getValueFiller_7731f0bd,
              mid_intVal_39c7bd23,
              mid_intVal_dd2db71e,
              mid_longVal_39c7bd20,
              mid_longVal_b24cd90d,
              mid_numOrd_54c6a179,
              mid_objectVal_29be6a55,
              mid_ordVal_39c7bd23,
              mid_shortVal_39c7bd39,
              mid_shortVal_df2a0648,
              mid_strVal_141401b3,
              mid_strVal_2f05a56a,
              mid_toString_141401b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionValues(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FunctionValues(const FunctionValues& obj) : ::java::lang::Object(obj) {}

            FunctionValues();

            jboolean boolVal(jint) const;
            jbyte byteVal(jint) const;
            void byteVal(jint, const JArray< jbyte > &) const;
            jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRef &) const;
            jdouble doubleVal(jint) const;
            void doubleVal(jint, const JArray< jdouble > &) const;
            jboolean exists(jint) const;
            ::org::apache::lucene::search::Explanation explain(jint) const;
            jfloat floatVal(jint) const;
            void floatVal(jint, const JArray< jfloat > &) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getScorer(const ::org::apache::lucene::index::IndexReader &) const;
            ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
            jint intVal(jint) const;
            void intVal(jint, const JArray< jint > &) const;
            jlong longVal(jint) const;
            void longVal(jint, const JArray< jlong > &) const;
            jint numOrd() const;
            ::java::lang::Object objectVal(jint) const;
            jint ordVal(jint) const;
            jshort shortVal(jint) const;
            void shortVal(jint, const JArray< jshort > &) const;
            ::java::lang::String strVal(jint) const;
            void strVal(jint, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString(jint) const;
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
      namespace queries {
        namespace function {
          extern PyTypeObject PY_TYPE(FunctionValues);

          class t_FunctionValues {
          public:
            PyObject_HEAD
            FunctionValues object;
            static PyObject *wrap_Object(const FunctionValues&);
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
