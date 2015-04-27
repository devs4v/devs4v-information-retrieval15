#ifndef org_apache_lucene_analysis_util_ResourceLoader_H
#define org_apache_lucene_analysis_util_ResourceLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class ResourceLoader : public ::java::lang::Object {
          public:
            enum {
              mid_findClass_4aee1c89,
              mid_newInstance_61899367,
              mid_openResource_222e59eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ResourceLoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ResourceLoader(const ResourceLoader& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Class findClass(const ::java::lang::String &, const ::java::lang::Class &) const;
            ::java::lang::Object newInstance(const ::java::lang::String &, const ::java::lang::Class &) const;
            ::java::io::InputStream openResource(const ::java::lang::String &) const;
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
          extern PyTypeObject PY_TYPE(ResourceLoader);

          class t_ResourceLoader {
          public:
            PyObject_HEAD
            ResourceLoader object;
            static PyObject *wrap_Object(const ResourceLoader&);
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
