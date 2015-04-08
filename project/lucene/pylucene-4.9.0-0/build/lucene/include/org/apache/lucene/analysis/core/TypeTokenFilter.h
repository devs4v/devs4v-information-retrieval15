#ifndef org_apache_lucene_analysis_core_TypeTokenFilter_H
#define org_apache_lucene_analysis_core_TypeTokenFilter_H

#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"

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
  namespace util {
    class Set;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class TypeTokenFilter : public ::org::apache::lucene::analysis::util::FilteringTokenFilter {
          public:
            enum {
              mid_init$_ecce6e0b,
              mid_init$_eb1a7514,
              mid_init$_bac183a2,
              mid_init$_436958cb,
              mid_accept_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeTokenFilter(jobject obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TypeTokenFilter(const TypeTokenFilter& obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {}

            TypeTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
            TypeTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &, jboolean);
            TypeTokenFilter(const ::org::apache::lucene::util::Version &, jboolean, const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
            TypeTokenFilter(const ::org::apache::lucene::util::Version &, jboolean, const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &, jboolean);
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
        namespace core {
          extern PyTypeObject PY_TYPE(TypeTokenFilter);

          class t_TypeTokenFilter {
          public:
            PyObject_HEAD
            TypeTokenFilter object;
            static PyObject *wrap_Object(const TypeTokenFilter&);
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
