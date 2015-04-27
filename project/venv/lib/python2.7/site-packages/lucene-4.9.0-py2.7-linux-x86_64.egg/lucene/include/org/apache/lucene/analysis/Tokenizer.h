#ifndef org_apache_lucene_analysis_Tokenizer_H
#define org_apache_lucene_analysis_Tokenizer_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Tokenizer : public ::org::apache::lucene::analysis::TokenStream {
        public:
          enum {
            mid_close_54c6a166,
            mid_reset_54c6a166,
            mid_setReader_cf2e3c10,
            mid_correctOffset_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tokenizer(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Tokenizer(const Tokenizer& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          void close() const;
          void reset() const;
          void setReader(const ::java::io::Reader &) const;
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
        extern PyTypeObject PY_TYPE(Tokenizer);

        class t_Tokenizer {
        public:
          PyObject_HEAD
          Tokenizer object;
          static PyObject *wrap_Object(const Tokenizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
