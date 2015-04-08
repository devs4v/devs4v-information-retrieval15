#ifndef org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class TypeAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class TypeAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_5fdc3f48,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_setType_5fdc3f48,
              mid_type_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TypeAttributeImpl(const TypeAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            TypeAttributeImpl();
            TypeAttributeImpl(const ::java::lang::String &);

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void setType(const ::java::lang::String &) const;
            ::java::lang::String type() const;
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
        namespace tokenattributes {
          extern PyTypeObject PY_TYPE(TypeAttributeImpl);

          class t_TypeAttributeImpl {
          public:
            PyObject_HEAD
            TypeAttributeImpl object;
            static PyObject *wrap_Object(const TypeAttributeImpl&);
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
