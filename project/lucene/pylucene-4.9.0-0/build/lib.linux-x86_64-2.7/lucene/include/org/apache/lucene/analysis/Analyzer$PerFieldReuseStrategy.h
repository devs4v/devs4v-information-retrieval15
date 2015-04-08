#ifndef org_apache_lucene_analysis_Analyzer$PerFieldReuseStrategy_H
#define org_apache_lucene_analysis_Analyzer$PerFieldReuseStrategy_H

#include "org/apache/lucene/analysis/Analyzer$ReuseStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
namespace java {
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

        class Analyzer$PerFieldReuseStrategy : public ::org::apache::lucene::analysis::Analyzer$ReuseStrategy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getReusableComponents_19769f4a,
            mid_setReusableComponents_66577a3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$PerFieldReuseStrategy(jobject obj) : ::org::apache::lucene::analysis::Analyzer$ReuseStrategy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Analyzer$PerFieldReuseStrategy(const Analyzer$PerFieldReuseStrategy& obj) : ::org::apache::lucene::analysis::Analyzer$ReuseStrategy(obj) {}

          Analyzer$PerFieldReuseStrategy();

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents getReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &) const;
          void setReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(Analyzer$PerFieldReuseStrategy);

        class t_Analyzer$PerFieldReuseStrategy {
        public:
          PyObject_HEAD
          Analyzer$PerFieldReuseStrategy object;
          static PyObject *wrap_Object(const Analyzer$PerFieldReuseStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
