#ifndef org_apache_lucene_util_CommandLineUtil_H
#define org_apache_lucene_util_CommandLineUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class FSDirectory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class ClassNotFoundException;
    class String;
    class IllegalAccessException;
    class NoSuchMethodException;
    class InstantiationException;
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CommandLineUtil : public ::java::lang::Object {
        public:
          enum {
            mid_loadDirectoryClass_7d663d97,
            mid_loadFSDirectoryClass_7d663d97,
            mid_newFSDirectory_96268b7b,
            mid_newFSDirectory_75db4bef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommandLineUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CommandLineUtil(const CommandLineUtil& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::Class loadDirectoryClass(const ::java::lang::String &);
          static ::java::lang::Class loadFSDirectoryClass(const ::java::lang::String &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::io::File &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::io::File &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(CommandLineUtil);

        class t_CommandLineUtil {
        public:
          PyObject_HEAD
          CommandLineUtil object;
          static PyObject *wrap_Object(const CommandLineUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
