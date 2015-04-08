#ifndef org_apache_lucene_analysis_NumericTokenStream_H
#define org_apache_lucene_analysis_NumericTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
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
      namespace analysis {

        class NumericTokenStream : public ::org::apache::lucene::analysis::TokenStream {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_39c7bd3c,
            mid_init$_f6b58e9c,
            mid_getPrecisionStep_54c6a179,
            mid_incrementToken_54c6a16a,
            mid_reset_54c6a166,
            mid_setDoubleValue_9f5ef2d6,
            mid_setFloatValue_e2936734,
            mid_setIntValue_ca7ab323,
            mid_setLongValue_c6439648,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericTokenStream(const NumericTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          static ::java::lang::String *TOKEN_TYPE_FULL_PREC;
          static ::java::lang::String *TOKEN_TYPE_LOWER_PREC;

          NumericTokenStream();
          NumericTokenStream(jint);
          NumericTokenStream(const ::org::apache::lucene::util::AttributeFactory &, jint);

          jint getPrecisionStep() const;
          jboolean incrementToken() const;
          void reset() const;
          NumericTokenStream setDoubleValue(jdouble) const;
          NumericTokenStream setFloatValue(jfloat) const;
          NumericTokenStream setIntValue(jint) const;
          NumericTokenStream setLongValue(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(NumericTokenStream);

        class t_NumericTokenStream {
        public:
          PyObject_HEAD
          NumericTokenStream object;
          static PyObject *wrap_Object(const NumericTokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
