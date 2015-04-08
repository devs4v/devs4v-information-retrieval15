#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace analysis {
        namespace tokenattributes {
          class PayloadAttribute;
        }
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
      namespace analysis {
        namespace tokenattributes {

          class PayloadAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_7bc03dc4,
              mid_clear_54c6a166,
              mid_clone_fdeb4a36,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_getPayload_4ae19461,
              mid_hashCode_54c6a179,
              mid_setPayload_7bc03dc4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadAttributeImpl(const PayloadAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PayloadAttributeImpl();
            PayloadAttributeImpl(const ::org::apache::lucene::util::BytesRef &);

            void clear() const;
            PayloadAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getPayload() const;
            jint hashCode() const;
            void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyTypeObject PY_TYPE(PayloadAttributeImpl);

          class t_PayloadAttributeImpl {
          public:
            PyObject_HEAD
            PayloadAttributeImpl object;
            static PyObject *wrap_Object(const PayloadAttributeImpl&);
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
