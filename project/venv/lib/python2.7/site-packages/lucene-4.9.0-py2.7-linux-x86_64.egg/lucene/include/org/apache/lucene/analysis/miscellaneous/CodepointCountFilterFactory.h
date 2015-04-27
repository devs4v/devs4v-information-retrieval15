#ifndef org_apache_lucene_analysis_miscellaneous_CodepointCountFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_CodepointCountFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace miscellaneous {
          class CodepointCountFilter;
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
        namespace miscellaneous {

          class CodepointCountFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_0d6a0318,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CodepointCountFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CodepointCountFilterFactory(const CodepointCountFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *MAX_KEY;
            static ::java::lang::String *MIN_KEY;

            CodepointCountFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::CodepointCountFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(CodepointCountFilterFactory);

          class t_CodepointCountFilterFactory {
          public:
            PyObject_HEAD
            CodepointCountFilterFactory object;
            static PyObject *wrap_Object(const CodepointCountFilterFactory&);
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
