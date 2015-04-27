#ifndef org_apache_lucene_analysis_core_LowerCaseTokenizerFactory_H
#define org_apache_lucene_analysis_core_LowerCaseTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class AbstractAnalysisFactory;
        }
        namespace core {
          class LowerCaseTokenizer;
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

          class LowerCaseTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_3b72128c,
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LowerCaseTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LowerCaseTokenizerFactory(const LowerCaseTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            LowerCaseTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::core::LowerCaseTokenizer create(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &) const;
            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
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
          extern PyTypeObject PY_TYPE(LowerCaseTokenizerFactory);

          class t_LowerCaseTokenizerFactory {
          public:
            PyObject_HEAD
            LowerCaseTokenizerFactory object;
            static PyObject *wrap_Object(const LowerCaseTokenizerFactory&);
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
