#ifndef org_apache_lucene_analysis_core_LowerCaseTokenizer_H
#define org_apache_lucene_analysis_core_LowerCaseTokenizer_H

#include "org/apache/lucene/analysis/core/LetterTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class Version;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class LowerCaseTokenizer : public ::org::apache::lucene::analysis::core::LetterTokenizer {
          public:
            enum {
              mid_init$_7997a391,
              mid_init$_be7a3ecf,
              mid_normalize_39c7bd23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LowerCaseTokenizer(jobject obj) : ::org::apache::lucene::analysis::core::LetterTokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LowerCaseTokenizer(const LowerCaseTokenizer& obj) : ::org::apache::lucene::analysis::core::LetterTokenizer(obj) {}

            LowerCaseTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            LowerCaseTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);
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
        namespace core {
          extern PyTypeObject PY_TYPE(LowerCaseTokenizer);

          class t_LowerCaseTokenizer {
          public:
            PyObject_HEAD
            LowerCaseTokenizer object;
            static PyObject *wrap_Object(const LowerCaseTokenizer&);
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
