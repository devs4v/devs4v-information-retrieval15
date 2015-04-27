#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
        class IndexReader;
      }
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          class ValueSourceScorer;
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {

            class DocTermsIndexDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
            public:
              enum {
                mid_init$_96c8ee4d,
                mid_boolVal_39c7bd30,
                mid_bytesVal_b7fef192,
                mid_exists_39c7bd30,
                mid_getRangeScorer_d201bc96,
                mid_getValueFiller_7731f0bd,
                mid_numOrd_54c6a179,
                mid_objectVal_29be6a55,
                mid_ordVal_39c7bd23,
                mid_strVal_141401b3,
                mid_toString_141401b3,
                mid_toTerm_97a5258f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocTermsIndexDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DocTermsIndexDocValues(const DocTermsIndexDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              DocTermsIndexDocValues(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::index::AtomicReaderContext &, const ::java::lang::String &);

              jboolean boolVal(jint) const;
              jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRef &) const;
              jboolean exists(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint numOrd() const;
              ::java::lang::Object objectVal(jint) const;
              jint ordVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
      namespace queries {
        namespace function {
          namespace docvalues {
            extern PyTypeObject PY_TYPE(DocTermsIndexDocValues);

            class t_DocTermsIndexDocValues {
            public:
              PyObject_HEAD
              DocTermsIndexDocValues object;
              static PyObject *wrap_Object(const DocTermsIndexDocValues&);
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
