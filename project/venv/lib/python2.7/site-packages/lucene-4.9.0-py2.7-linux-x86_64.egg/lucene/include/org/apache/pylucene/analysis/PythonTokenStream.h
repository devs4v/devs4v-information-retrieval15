#ifndef org_apache_pylucene_analysis_PythonTokenStream_H
#define org_apache_pylucene_analysis_PythonTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonTokenStream : public ::org::apache::lucene::analysis::TokenStream {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_end_54c6a166,
            mid_finalize_54c6a166,
            mid_incrementToken_54c6a16a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_reset_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonTokenStream(const PythonTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          PythonTokenStream();

          void close() const;
          void end() const;
          void finalize() const;
          jboolean incrementToken() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(PythonTokenStream);

        class t_PythonTokenStream {
        public:
          PyObject_HEAD
          PythonTokenStream object;
          static PyObject *wrap_Object(const PythonTokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
