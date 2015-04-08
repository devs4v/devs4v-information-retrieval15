#ifndef org_apache_lucene_collation_CollationKeyAnalyzer_H
#define org_apache_lucene_collation_CollationKeyAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationKeyAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
        public:
          enum {
            mid_init$_c5e10a9c,
            mid_init$_09eedbb5,
            mid_createComponents_1be39cae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationKeyAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CollationKeyAnalyzer(const CollationKeyAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          CollationKeyAnalyzer(const ::java::text::Collator &);
          CollationKeyAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::text::Collator &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyTypeObject PY_TYPE(CollationKeyAnalyzer);

        class t_CollationKeyAnalyzer {
        public:
          PyObject_HEAD
          CollationKeyAnalyzer object;
          static PyObject *wrap_Object(const CollationKeyAnalyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
