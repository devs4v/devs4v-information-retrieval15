#ifndef org_apache_lucene_analysis_standard_StandardFilter_H
#define org_apache_lucene_analysis_standard_StandardFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class StandardFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_8f50e725,
              mid_incrementToken_54c6a16a,
              mid_incrementTokenClassic_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StandardFilter(const StandardFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            StandardFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            jboolean incrementTokenClassic() const;
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
        namespace standard {
          extern PyTypeObject PY_TYPE(StandardFilter);

          class t_StandardFilter {
          public:
            PyObject_HEAD
            StandardFilter object;
            static PyObject *wrap_Object(const StandardFilter&);
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
