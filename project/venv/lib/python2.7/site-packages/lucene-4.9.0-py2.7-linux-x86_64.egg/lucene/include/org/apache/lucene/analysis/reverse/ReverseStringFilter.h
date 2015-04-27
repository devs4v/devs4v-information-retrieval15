#ifndef org_apache_lucene_analysis_reverse_ReverseStringFilter_H
#define org_apache_lucene_analysis_reverse_ReverseStringFilter_H

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
    class String;
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
        namespace reverse {

          class ReverseStringFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_8f50e725,
              mid_init$_0e43cbd7,
              mid_incrementToken_54c6a16a,
              mid_reverse_4b169143,
              mid_reverse_4fcde068,
              mid_reverse_dcd30fdb,
              mid_reverse_41701017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReverseStringFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ReverseStringFilter(const ReverseStringFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jchar INFORMATION_SEPARATOR_MARKER;
            static jchar PUA_EC00_MARKER;
            static jchar RTL_DIRECTION_MARKER;
            static jchar START_OF_HEADING_MARKER;

            ReverseStringFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);
            ReverseStringFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, jchar);

            jboolean incrementToken() const;
            static void reverse(const ::org::apache::lucene::util::Version &, const JArray< jchar > &);
            static ::java::lang::String reverse(const ::org::apache::lucene::util::Version &, const ::java::lang::String &);
            static void reverse(const ::org::apache::lucene::util::Version &, const JArray< jchar > &, jint);
            static void reverse(const ::org::apache::lucene::util::Version &, const JArray< jchar > &, jint, jint);
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
          extern PyTypeObject PY_TYPE(ReverseStringFilter);

          class t_ReverseStringFilter {
          public:
            PyObject_HEAD
            ReverseStringFilter object;
            static PyObject *wrap_Object(const ReverseStringFilter&);
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
