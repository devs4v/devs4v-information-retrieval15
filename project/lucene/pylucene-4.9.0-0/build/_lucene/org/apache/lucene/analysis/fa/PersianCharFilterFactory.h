#ifndef org_apache_lucene_analysis_fa_PersianCharFilterFactory_H
#define org_apache_lucene_analysis_fa_PersianCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharFilter;
        namespace util {
          class MultiTermAwareComponent;
          class AbstractAnalysisFactory;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
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
        namespace fa {

          class PersianCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_567624d1,
              mid_getMultiTermComponent_0a3f1d72,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PersianCharFilterFactory(const PersianCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            PersianCharFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::CharFilter create(const ::java::io::Reader &) const;
            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
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
        namespace fa {
          extern PyTypeObject PY_TYPE(PersianCharFilterFactory);

          class t_PersianCharFilterFactory {
          public:
            PyObject_HEAD
            PersianCharFilterFactory object;
            static PyObject *wrap_Object(const PersianCharFilterFactory&);
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
