#ifndef org_apache_lucene_analysis_pattern_PatternReplaceCharFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternReplaceCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharFilter;
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
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternReplaceCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_567624d1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceCharFilterFactory(const PatternReplaceCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            PatternReplaceCharFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::CharFilter create(const ::java::io::Reader &) const;
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
          extern PyTypeObject PY_TYPE(PatternReplaceCharFilterFactory);

          class t_PatternReplaceCharFilterFactory {
          public:
            PyObject_HEAD
            PatternReplaceCharFilterFactory object;
            static PyObject *wrap_Object(const PatternReplaceCharFilterFactory&);
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
