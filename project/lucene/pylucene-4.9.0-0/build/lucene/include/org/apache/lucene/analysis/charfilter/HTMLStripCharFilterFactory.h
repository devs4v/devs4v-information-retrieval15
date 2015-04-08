#ifndef org_apache_lucene_analysis_charfilter_HTMLStripCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_HTMLStripCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {
          class HTMLStripCharFilter;
        }
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
        namespace charfilter {

          class HTMLStripCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_ca5f8ca1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HTMLStripCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HTMLStripCharFilterFactory(const HTMLStripCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            HTMLStripCharFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::charfilter::HTMLStripCharFilter create(const ::java::io::Reader &) const;
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
          extern PyTypeObject PY_TYPE(HTMLStripCharFilterFactory);

          class t_HTMLStripCharFilterFactory {
          public:
            PyObject_HEAD
            HTMLStripCharFilterFactory object;
            static PyObject *wrap_Object(const HTMLStripCharFilterFactory&);
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
