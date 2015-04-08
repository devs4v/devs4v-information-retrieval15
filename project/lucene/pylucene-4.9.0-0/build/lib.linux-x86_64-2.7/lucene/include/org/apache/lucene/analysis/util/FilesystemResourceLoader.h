#ifndef org_apache_lucene_analysis_util_FilesystemResourceLoader_H
#define org_apache_lucene_analysis_util_FilesystemResourceLoader_H

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
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class File;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class FilesystemResourceLoader : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_c3dacf57,
              mid_init$_002bf8fe,
              mid_findClass_4aee1c89,
              mid_newInstance_61899367,
              mid_openResource_222e59eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilesystemResourceLoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FilesystemResourceLoader(const FilesystemResourceLoader& obj) : ::java::lang::Object(obj) {}

            FilesystemResourceLoader();
            FilesystemResourceLoader(const ::java::io::File &);
            FilesystemResourceLoader(const ::java::io::File &, const ::org::apache::lucene::analysis::util::ResourceLoader &);

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
          extern PyTypeObject PY_TYPE(FilesystemResourceLoader);

          class t_FilesystemResourceLoader {
          public:
            PyObject_HEAD
            FilesystemResourceLoader object;
            static PyObject *wrap_Object(const FilesystemResourceLoader&);
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
