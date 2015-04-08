#ifndef org_apache_lucene_analysis_miscellaneous_SingleTokenTokenStream_H
#define org_apache_lucene_analysis_miscellaneous_SingleTokenTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Token;
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
        namespace miscellaneous {

          class SingleTokenTokenStream : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_init$_4f6e7002,
              mid_getToken_55852c17,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setToken_4f6e7002,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingleTokenTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SingleTokenTokenStream(const SingleTokenTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            SingleTokenTokenStream(const ::org::apache::lucene::analysis::Token &);

            ::org::apache::lucene::analysis::Token getToken() const;
            jboolean incrementToken() const;
            void reset() const;
            void setToken(const ::org::apache::lucene::analysis::Token &) const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(SingleTokenTokenStream);

          class t_SingleTokenTokenStream {
          public:
            PyObject_HEAD
            SingleTokenTokenStream object;
            static PyObject *wrap_Object(const SingleTokenTokenStream&);
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
