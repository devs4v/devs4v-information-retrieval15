#ifndef org_apache_lucene_analysis_ru_RussianLetterTokenizer_H
#define org_apache_lucene_analysis_ru_RussianLetterTokenizer_H

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
        namespace ru {

          class RussianLetterTokenizer : public ::org::apache::lucene::analysis::util::CharTokenizer {
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

            explicit RussianLetterTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RussianLetterTokenizer(const RussianLetterTokenizer& obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {}

            RussianLetterTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            RussianLetterTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);
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
        namespace ru {
          extern PyTypeObject PY_TYPE(RussianLetterTokenizer);

          class t_RussianLetterTokenizer {
          public:
            PyObject_HEAD
            RussianLetterTokenizer object;
            static PyObject *wrap_Object(const RussianLetterTokenizer&);
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
