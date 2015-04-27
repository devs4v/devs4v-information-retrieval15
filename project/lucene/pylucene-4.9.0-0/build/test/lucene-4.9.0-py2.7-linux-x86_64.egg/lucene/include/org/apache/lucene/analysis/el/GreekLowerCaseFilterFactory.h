#ifndef org_apache_lucene_analysis_el_GreekLowerCaseFilterFactory_H
#define org_apache_lucene_analysis_el_GreekLowerCaseFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class AbstractAnalysisFactory;
        }
        namespace el {
          class GreekLowerCaseFilter;
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
        namespace el {

          class GreekLowerCaseFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_ce990bd7,
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GreekLowerCaseFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GreekLowerCaseFilterFactory(const GreekLowerCaseFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            GreekLowerCaseFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::el::GreekLowerCaseFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace el {
          extern PyTypeObject PY_TYPE(GreekLowerCaseFilterFactory);

          class t_GreekLowerCaseFilterFactory {
          public:
            PyObject_HEAD
            GreekLowerCaseFilterFactory object;
            static PyObject *wrap_Object(const GreekLowerCaseFilterFactory&);
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
