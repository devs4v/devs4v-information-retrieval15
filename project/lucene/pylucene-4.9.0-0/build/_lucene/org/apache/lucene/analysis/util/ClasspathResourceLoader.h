#ifndef org_apache_lucene_analysis_util_ClasspathResourceLoader_H
#define org_apache_lucene_analysis_util_ClasspathResourceLoader_H

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
    class ClassLoader;
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

          class ClasspathResourceLoader : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_a5deaff4,
              mid_init$_9110048d,
              mid_findClass_4aee1c89,
              mid_newInstance_61899367,
              mid_openResource_222e59eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClasspathResourceLoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ClasspathResourceLoader(const ClasspathResourceLoader& obj) : ::java::lang::Object(obj) {}

            ClasspathResourceLoader();
            ClasspathResourceLoader(const ::java::lang::Class &);
            ClasspathResourceLoader(const ::java::lang::ClassLoader &);

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
          extern PyTypeObject PY_TYPE(ClasspathResourceLoader);

          class t_ClasspathResourceLoader {
          public:
            PyObject_HEAD
            ClasspathResourceLoader object;
            static PyObject *wrap_Object(const ClasspathResourceLoader&);
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
