#ifndef org_apache_lucene_analysis_core_WhitespaceTokenizerFactory_H
#define org_apache_lucene_analysis_core_WhitespaceTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace core {
          class WhitespaceTokenizer;
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
        namespace core {

          class WhitespaceTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_3e31041b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WhitespaceTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WhitespaceTokenizerFactory(const WhitespaceTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            WhitespaceTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::core::WhitespaceTokenizer create(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &) const;
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
          extern PyTypeObject PY_TYPE(WhitespaceTokenizerFactory);

          class t_WhitespaceTokenizerFactory {
          public:
            PyObject_HEAD
            WhitespaceTokenizerFactory object;
            static PyObject *wrap_Object(const WhitespaceTokenizerFactory&);
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
