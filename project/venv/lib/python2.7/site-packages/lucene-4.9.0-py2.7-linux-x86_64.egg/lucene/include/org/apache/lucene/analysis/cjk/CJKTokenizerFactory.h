#ifndef org_apache_lucene_analysis_cjk_CJKTokenizerFactory_H
#define org_apache_lucene_analysis_cjk_CJKTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace cjk {
          class CJKTokenizer;
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
        namespace cjk {

          class CJKTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_277e6a01,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CJKTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CJKTokenizerFactory(const CJKTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            CJKTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::cjk::CJKTokenizer create(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &) const;
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
        namespace cjk {
          extern PyTypeObject PY_TYPE(CJKTokenizerFactory);

          class t_CJKTokenizerFactory {
          public:
            PyObject_HEAD
            CJKTokenizerFactory object;
            static PyObject *wrap_Object(const CJKTokenizerFactory&);
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
