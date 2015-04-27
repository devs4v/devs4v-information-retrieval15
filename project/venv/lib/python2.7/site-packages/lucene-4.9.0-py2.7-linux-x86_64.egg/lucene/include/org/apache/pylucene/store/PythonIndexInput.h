#ifndef org_apache_pylucene_store_PythonIndexInput_H
#define org_apache_pylucene_store_PythonIndexInput_H

#include "org/apache/lucene/store/BufferedIndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexInput : public ::org::apache::lucene::store::BufferedIndexInput {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_501c6f1c,
            mid_init$_6e53ccc6,
            mid_clone_f5aaa2d0,
            mid_close_54c6a166,
            mid_finalize_54c6a166,
            mid_length_54c6a17a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_readInternal_e1cb0133,
            mid_seekInternal_0ee6df2f,
            mid_readInternal_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexInput(jobject obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonIndexInput(const PythonIndexInput& obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {}

          PythonIndexInput(const ::java::lang::String &);
          PythonIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          PythonIndexInput(const ::java::lang::String &, jint);

          PythonIndexInput clone() const;
          void close() const;
          void finalize() const;
          jlong length() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          JArray< jbyte > readInternal(jint, jlong) const;
          void seekInternal(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyTypeObject PY_TYPE(PythonIndexInput);

        class t_PythonIndexInput {
        public:
          PyObject_HEAD
          PythonIndexInput object;
          static PyObject *wrap_Object(const PythonIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
