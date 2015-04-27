#ifndef org_apache_lucene_analysis_ar_ArabicNormalizationFilterFactory_H
#define org_apache_lucene_analysis_ar_ArabicNormalizationFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class AbstractAnalysisFactory;
        }
        namespace ar {
          class ArabicNormalizationFilter;
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
        namespace ar {

          class ArabicNormalizationFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_4e13fbb2,
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArabicNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ArabicNormalizationFilterFactory(const ArabicNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            ArabicNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ar::ArabicNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace ar {
          extern PyTypeObject PY_TYPE(ArabicNormalizationFilterFactory);

          class t_ArabicNormalizationFilterFactory {
          public:
            PyObject_HEAD
            ArabicNormalizationFilterFactory object;
            static PyObject *wrap_Object(const ArabicNormalizationFilterFactory&);
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
