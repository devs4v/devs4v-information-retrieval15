#ifndef org_apache_lucene_analysis_tokenattributes_PositionLengthAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PositionLengthAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PositionLengthAttribute;
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

          class PositionLengthAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_getPositionLength_54c6a179,
              mid_hashCode_54c6a179,
              mid_setPositionLength_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionLengthAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PositionLengthAttributeImpl(const PositionLengthAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PositionLengthAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionLength() const;
            jint hashCode() const;
            void setPositionLength(jint) const;
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
          extern PyTypeObject PY_TYPE(PositionLengthAttributeImpl);

          class t_PositionLengthAttributeImpl {
          public:
            PyObject_HEAD
            PositionLengthAttributeImpl object;
            static PyObject *wrap_Object(const PositionLengthAttributeImpl&);
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
