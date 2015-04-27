#ifndef org_apache_lucene_analysis_reverse_ReverseStringFilterFactory_H
#define org_apache_lucene_analysis_reverse_ReverseStringFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace reverse {
          class ReverseStringFilter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
        namespace reverse {

          class ReverseStringFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_b57d0b9a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReverseStringFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ReverseStringFilterFactory(const ReverseStringFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            ReverseStringFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::reverse::ReverseStringFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace reverse {
          extern PyTypeObject PY_TYPE(ReverseStringFilterFactory);

          class t_ReverseStringFilterFactory {
          public:
            PyObject_HEAD
            ReverseStringFilterFactory object;
            static PyObject *wrap_Object(const ReverseStringFilterFactory&);
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
