#ifndef org_apache_lucene_analysis_pattern_PatternReplaceFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternReplaceFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          class PatternReplaceFilter;
        }
        class TokenStream;
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
        namespace pattern {

          class PatternReplaceFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_d0c93252,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceFilterFactory(const PatternReplaceFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            PatternReplaceFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::PatternReplaceFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace pattern {
          extern PyTypeObject PY_TYPE(PatternReplaceFilterFactory);

          class t_PatternReplaceFilterFactory {
          public:
            PyObject_HEAD
            PatternReplaceFilterFactory object;
            static PyObject *wrap_Object(const PatternReplaceFilterFactory&);
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
