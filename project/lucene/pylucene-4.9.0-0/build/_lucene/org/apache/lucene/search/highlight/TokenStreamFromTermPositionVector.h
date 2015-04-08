#ifndef org_apache_lucene_search_highlight_TokenStreamFromTermPositionVector_H
#define org_apache_lucene_search_highlight_TokenStreamFromTermPositionVector_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenStreamFromTermPositionVector : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_init$_d0b7bb17,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamFromTermPositionVector(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenStreamFromTermPositionVector(const TokenStreamFromTermPositionVector& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            TokenStreamFromTermPositionVector(const ::org::apache::lucene::index::Terms &);

            jboolean incrementToken() const;
            void reset() const;
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
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(TokenStreamFromTermPositionVector);

          class t_TokenStreamFromTermPositionVector {
          public:
            PyObject_HEAD
            TokenStreamFromTermPositionVector object;
            static PyObject *wrap_Object(const TokenStreamFromTermPositionVector&);
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
