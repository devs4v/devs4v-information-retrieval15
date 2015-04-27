#ifndef org_apache_lucene_analysis_core_LetterTokenizer_H
#define org_apache_lucene_analysis_core_LetterTokenizer_H

#include "org/apache/lucene/analysis/util/CharTokenizer.h"

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

          class LetterTokenizer : public ::org::apache::lucene::analysis::util::CharTokenizer {
          public:
            enum {
              mid_init$_7997a391,
              mid_init$_be7a3ecf,
              mid_isTokenChar_39c7bd30,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LetterTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LetterTokenizer(const LetterTokenizer& obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {}

            LetterTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            LetterTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);
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
          extern PyTypeObject PY_TYPE(LetterTokenizer);

          class t_LetterTokenizer {
          public:
            PyObject_HEAD
            LetterTokenizer object;
            static PyObject *wrap_Object(const LetterTokenizer&);
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
