#ifndef org_apache_lucene_analysis_util_ResourceLoaderAware_H
#define org_apache_lucene_analysis_util_ResourceLoaderAware_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class ResourceLoader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
        namespace util {

          class ResourceLoaderAware : public ::java::lang::Object {
          public:
            enum {
              mid_inform_d6a4bc97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ResourceLoaderAware(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ResourceLoaderAware(const ResourceLoaderAware& obj) : ::java::lang::Object(obj) {}

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
        namespace util {
          extern PyTypeObject PY_TYPE(ResourceLoaderAware);

          class t_ResourceLoaderAware {
          public:
            PyObject_HEAD
            ResourceLoaderAware object;
            static PyObject *wrap_Object(const ResourceLoaderAware&);
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
