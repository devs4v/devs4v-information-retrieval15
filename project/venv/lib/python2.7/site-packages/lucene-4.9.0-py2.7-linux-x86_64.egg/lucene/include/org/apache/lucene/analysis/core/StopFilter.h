#ifndef org_apache_lucene_analysis_core_StopFilter_H
#define org_apache_lucene_analysis_core_StopFilter_H

#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Object;
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

          class StopFilter : public ::org::apache::lucene::analysis::util::FilteringTokenFilter {
          public:
            enum {
              mid_init$_e67dd59e,
              mid_makeStopSet_9f4ce96f,
              mid_makeStopSet_bbdc7fc0,
              mid_makeStopSet_08a7acff,
              mid_makeStopSet_81b79166,
              mid_accept_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopFilter(jobject obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StopFilter(const StopFilter& obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {}

            StopFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            static ::org::apache::lucene::analysis::util::CharArraySet makeStopSet(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &);
            static ::org::apache::lucene::analysis::util::CharArraySet makeStopSet(const ::org::apache::lucene::util::Version &, const ::java::util::List &);
            static ::org::apache::lucene::analysis::util::CharArraySet makeStopSet(const ::org::apache::lucene::util::Version &, const ::java::util::List &, jboolean);
            static ::org::apache::lucene::analysis::util::CharArraySet makeStopSet(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, jboolean);
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
          extern PyTypeObject PY_TYPE(StopFilter);

          class t_StopFilter {
          public:
            PyObject_HEAD
            StopFilter object;
            static PyObject *wrap_Object(const StopFilter&);
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
