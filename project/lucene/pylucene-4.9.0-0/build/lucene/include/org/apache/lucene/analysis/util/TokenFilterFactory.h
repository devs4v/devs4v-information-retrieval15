#ifndef org_apache_lucene_analysis_util_TokenFilterFactory_H
#define org_apache_lucene_analysis_util_TokenFilterFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class TokenFilterFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
          public:
            enum {
              mid_availableTokenFilters_03e99967,
              mid_create_a65cd6ab,
              mid_forName_489c139a,
              mid_lookupClass_7d663d97,
              mid_reloadTokenFilters_9110048d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenFilterFactory(const TokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableTokenFilters();
            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            static TokenFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            static void reloadTokenFilters(const ::java::lang::ClassLoader &);
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
          extern PyTypeObject PY_TYPE(TokenFilterFactory);

          class t_TokenFilterFactory {
          public:
            PyObject_HEAD
            TokenFilterFactory object;
            static PyObject *wrap_Object(const TokenFilterFactory&);
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
