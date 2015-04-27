#ifndef org_apache_lucene_analysis_util_TokenizerFactory_H
#define org_apache_lucene_analysis_util_TokenizerFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        class Tokenizer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class ClassLoader;
    class Class;
    class String;
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
        namespace util {

          class TokenizerFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
          public:
            enum {
              mid_availableTokenizers_03e99967,
              mid_create_02e4fecd,
              mid_create_e51780e9,
              mid_forName_9ff0ca4e,
              mid_lookupClass_7d663d97,
              mid_reloadTokenizers_9110048d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenizerFactory(const TokenizerFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableTokenizers();
            ::org::apache::lucene::analysis::Tokenizer create(const ::java::io::Reader &) const;
            ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &) const;
            static TokenizerFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            static void reloadTokenizers(const ::java::lang::ClassLoader &);
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
        namespace util {
          extern PyTypeObject PY_TYPE(TokenizerFactory);

          class t_TokenizerFactory {
          public:
            PyObject_HEAD
            TokenizerFactory object;
            static PyObject *wrap_Object(const TokenizerFactory&);
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
