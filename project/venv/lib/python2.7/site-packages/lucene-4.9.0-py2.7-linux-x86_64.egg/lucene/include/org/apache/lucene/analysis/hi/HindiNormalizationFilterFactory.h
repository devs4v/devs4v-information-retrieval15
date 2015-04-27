#ifndef org_apache_lucene_analysis_hi_HindiNormalizationFilterFactory_H
#define org_apache_lucene_analysis_hi_HindiNormalizationFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class AbstractAnalysisFactory;
          class MultiTermAwareComponent;
        }
        class TokenStream;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hi {

          class HindiNormalizationFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_a65cd6ab,
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HindiNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HindiNormalizationFilterFactory(const HindiNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            HindiNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace hi {
          extern PyTypeObject PY_TYPE(HindiNormalizationFilterFactory);

          class t_HindiNormalizationFilterFactory {
          public:
            PyObject_HEAD
            HindiNormalizationFilterFactory object;
            static PyObject *wrap_Object(const HindiNormalizationFilterFactory&);
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
