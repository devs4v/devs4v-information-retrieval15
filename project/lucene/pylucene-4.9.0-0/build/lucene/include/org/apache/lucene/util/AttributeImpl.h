#ifndef org_apache_lucene_util_AttributeImpl_H
#define org_apache_lucene_util_AttributeImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Attribute;
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeImpl : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clear_54c6a166,
            mid_clone_a200d3c2,
            mid_copyTo_d86caa9f,
            mid_reflectAsString_445a175e,
            mid_reflectWith_5f3f5102,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AttributeImpl(const AttributeImpl& obj) : ::java::lang::Object(obj) {}

          AttributeImpl();

          void clear() const;
          AttributeImpl clone() const;
          void copyTo(const AttributeImpl &) const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
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
        extern PyTypeObject PY_TYPE(AttributeImpl);

        class t_AttributeImpl {
        public:
          PyObject_HEAD
          AttributeImpl object;
          static PyObject *wrap_Object(const AttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
