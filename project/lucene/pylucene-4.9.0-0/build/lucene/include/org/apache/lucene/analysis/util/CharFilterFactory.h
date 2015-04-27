#ifndef org_apache_lucene_analysis_util_CharFilterFactory_H
#define org_apache_lucene_analysis_util_CharFilterFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class ClassLoader;
    class Class;
    class String;
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
        namespace util {

          class CharFilterFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
          public:
            enum {
              mid_availableCharFilters_03e99967,
              mid_create_6d741e4f,
              mid_forName_75151912,
              mid_lookupClass_7d663d97,
              mid_reloadCharFilters_9110048d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharFilterFactory(const CharFilterFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableCharFilters();
            ::java::io::Reader create(const ::java::io::Reader &) const;
            static CharFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            static void reloadCharFilters(const ::java::lang::ClassLoader &);
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
        namespace util {
          extern PyTypeObject PY_TYPE(CharFilterFactory);

          class t_CharFilterFactory {
          public:
            PyObject_HEAD
            CharFilterFactory object;
            static PyObject *wrap_Object(const CharFilterFactory&);
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
