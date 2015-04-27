#ifndef org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class MultiTermAwareComponent;
          class ResourceLoader;
          class ResourceLoaderAware;
          class AbstractAnalysisFactory;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class MappingCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_6d741e4f,
              mid_getMultiTermComponent_0a3f1d72,
              mid_inform_d6a4bc97,
              mid_parseRules_c71ecf97,
              mid_parseString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MappingCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MappingCharFilterFactory(const MappingCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            MappingCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory getMultiTermComponent() const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
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
        namespace charfilter {
          extern PyTypeObject PY_TYPE(MappingCharFilterFactory);

          class t_MappingCharFilterFactory {
          public:
            PyObject_HEAD
            MappingCharFilterFactory object;
            static PyObject *wrap_Object(const MappingCharFilterFactory&);
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
