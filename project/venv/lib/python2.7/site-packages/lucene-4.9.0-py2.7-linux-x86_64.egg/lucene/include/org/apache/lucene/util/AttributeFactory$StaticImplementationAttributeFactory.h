#ifndef org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H
#define org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H

#include "org/apache/lucene/util/AttributeFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Attribute;
        class AttributeImpl;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeFactory$StaticImplementationAttributeFactory : public ::org::apache::lucene::util::AttributeFactory {
        public:
          enum {
            mid_init$_a612bb24,
            mid_createAttributeInstance_4f9d0910,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_createInstance_a200d3c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeFactory$StaticImplementationAttributeFactory(jobject obj) : ::org::apache::lucene::util::AttributeFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AttributeFactory$StaticImplementationAttributeFactory(const AttributeFactory$StaticImplementationAttributeFactory& obj) : ::org::apache::lucene::util::AttributeFactory(obj) {}

          AttributeFactory$StaticImplementationAttributeFactory(const ::org::apache::lucene::util::AttributeFactory &, const ::java::lang::Class &);

          ::org::apache::lucene::util::AttributeImpl createAttributeInstance(const ::java::lang::Class &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyTypeObject PY_TYPE(AttributeFactory$StaticImplementationAttributeFactory);

        class t_AttributeFactory$StaticImplementationAttributeFactory {
        public:
          PyObject_HEAD
          AttributeFactory$StaticImplementationAttributeFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AttributeFactory$StaticImplementationAttributeFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AttributeFactory$StaticImplementationAttributeFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AttributeFactory$StaticImplementationAttributeFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
