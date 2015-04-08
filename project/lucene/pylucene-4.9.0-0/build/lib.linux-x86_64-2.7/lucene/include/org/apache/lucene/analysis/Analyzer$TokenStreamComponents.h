#ifndef org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H
#define org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Tokenizer;
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
      namespace analysis {

        class Analyzer$TokenStreamComponents : public ::java::lang::Object {
        public:
          enum {
            mid_init$_789fa946,
            mid_init$_f0015a14,
            mid_getTokenStream_71f550c9,
            mid_getTokenizer_6c9709bb,
            mid_setReader_cf2e3c10,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$TokenStreamComponents(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Analyzer$TokenStreamComponents(const Analyzer$TokenStreamComponents& obj) : ::java::lang::Object(obj) {}

          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &);
          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &, const ::org::apache::lucene::analysis::TokenStream &);

          ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
          ::org::apache::lucene::analysis::Tokenizer getTokenizer() const;
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
        extern PyTypeObject PY_TYPE(Analyzer$TokenStreamComponents);

        class t_Analyzer$TokenStreamComponents {
        public:
          PyObject_HEAD
          Analyzer$TokenStreamComponents object;
          static PyObject *wrap_Object(const Analyzer$TokenStreamComponents&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
