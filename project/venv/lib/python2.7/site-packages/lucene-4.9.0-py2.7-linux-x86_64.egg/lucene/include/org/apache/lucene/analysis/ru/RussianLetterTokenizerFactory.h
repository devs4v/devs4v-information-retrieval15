#ifndef org_apache_lucene_analysis_ru_RussianLetterTokenizerFactory_H
#define org_apache_lucene_analysis_ru_RussianLetterTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace ru {
          class RussianLetterTokenizer;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
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

          class RussianLetterTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_ef75db74,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RussianLetterTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RussianLetterTokenizerFactory(const RussianLetterTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            RussianLetterTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ru::RussianLetterTokenizer create(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &) const;
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
          extern PyTypeObject PY_TYPE(RussianLetterTokenizerFactory);

          class t_RussianLetterTokenizerFactory {
          public:
            PyObject_HEAD
            RussianLetterTokenizerFactory object;
            static PyObject *wrap_Object(const RussianLetterTokenizerFactory&);
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
