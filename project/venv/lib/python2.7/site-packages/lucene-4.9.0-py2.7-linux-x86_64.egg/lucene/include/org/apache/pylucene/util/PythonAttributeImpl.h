#ifndef org_apache_pylucene_util_PythonAttributeImpl_H
#define org_apache_pylucene_util_PythonAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Throwable;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clear_54c6a166,
            mid_copyTo_d86caa9f,
            mid_equals_290588e2,
            mid_finalize_54c6a166,
            mid_hashCode_54c6a179,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonAttributeImpl(const PythonAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          PythonAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          jint hashCode() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyTypeObject PY_TYPE(PythonAttributeImpl);

        class t_PythonAttributeImpl {
        public:
          PyObject_HEAD
          PythonAttributeImpl object;
          static PyObject *wrap_Object(const PythonAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
