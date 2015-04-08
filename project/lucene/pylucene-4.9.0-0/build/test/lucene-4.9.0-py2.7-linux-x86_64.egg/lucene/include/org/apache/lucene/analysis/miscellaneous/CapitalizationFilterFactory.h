#ifndef org_apache_lucene_analysis_miscellaneous_CapitalizationFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_CapitalizationFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace miscellaneous {
          class CapitalizationFilter;
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

          class CapitalizationFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_9cf532c8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CapitalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CapitalizationFilterFactory(const CapitalizationFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *FORCE_FIRST_LETTER;
            static ::java::lang::String *KEEP;
            static ::java::lang::String *KEEP_IGNORE_CASE;
            static ::java::lang::String *MAX_TOKEN_LENGTH;
            static ::java::lang::String *MAX_WORD_COUNT;
            static ::java::lang::String *MIN_WORD_LENGTH;
            static ::java::lang::String *OK_PREFIX;
            static ::java::lang::String *ONLY_FIRST_WORD;

            CapitalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::CapitalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyTypeObject PY_TYPE(CapitalizationFilterFactory);

          class t_CapitalizationFilterFactory {
          public:
            PyObject_HEAD
            CapitalizationFilterFactory object;
            static PyObject *wrap_Object(const CapitalizationFilterFactory&);
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
