#ifndef org_apache_pylucene_search_PythonDoubleParser_H
#define org_apache_pylucene_search_PythonDoubleParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class Terms;
        class TermsEnum;
      }
      namespace search {
        class FieldCache$DoubleParser;
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        class PythonDoubleParser : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_finalize_54c6a166,
            mid_parseDouble_7bc03dd6,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_termsEnum_fb3ac14e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDoubleParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonDoubleParser(const PythonDoubleParser& obj) : ::java::lang::Object(obj) {}

          PythonDoubleParser();

          void finalize() const;
          jdouble parseDouble(const ::org::apache::lucene::util::BytesRef &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::apache::lucene::index::TermsEnum termsEnum(const ::org::apache::lucene::index::Terms &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyTypeObject PY_TYPE(PythonDoubleParser);

        class t_PythonDoubleParser {
        public:
          PyObject_HEAD
          PythonDoubleParser object;
          static PyObject *wrap_Object(const PythonDoubleParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
