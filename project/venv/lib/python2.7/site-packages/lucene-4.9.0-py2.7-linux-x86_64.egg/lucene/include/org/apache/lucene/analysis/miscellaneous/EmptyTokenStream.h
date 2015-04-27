#ifndef org_apache_lucene_analysis_miscellaneous_EmptyTokenStream_H
#define org_apache_lucene_analysis_miscellaneous_EmptyTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

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

          class EmptyTokenStream : public ::org::apache::lucene::analysis::TokenStream {
          public:
            enum {
              mid_init$_54c6a166,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EmptyTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EmptyTokenStream(const EmptyTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            EmptyTokenStream();

            jboolean incrementToken() const;
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
          extern PyTypeObject PY_TYPE(EmptyTokenStream);

          class t_EmptyTokenStream {
          public:
            PyObject_HEAD
            EmptyTokenStream object;
            static PyObject *wrap_Object(const EmptyTokenStream&);
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
