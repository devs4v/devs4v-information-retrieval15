#ifndef org_apache_pylucene_analysis_PythonCharTokenizer_H
#define org_apache_pylucene_analysis_PythonCharTokenizer_H

#include "org/apache/lucene/analysis/util/CharTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonCharTokenizer : public ::org::apache::lucene::analysis::util::CharTokenizer {
        public:
          enum {
            mid_init$_7997a391,
            mid_finalize_54c6a166,
            mid_isTokenChar_39c7bd30,
            mid_normalize_39c7bd23,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonCharTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonCharTokenizer(const PythonCharTokenizer& obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {}

          PythonCharTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);

          void finalize() const;
          jboolean isTokenChar(jint) const;
          jint normalize(jint) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyTypeObject PY_TYPE(PythonCharTokenizer);

        class t_PythonCharTokenizer {
        public:
          PyObject_HEAD
          PythonCharTokenizer object;
          static PyObject *wrap_Object(const PythonCharTokenizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
