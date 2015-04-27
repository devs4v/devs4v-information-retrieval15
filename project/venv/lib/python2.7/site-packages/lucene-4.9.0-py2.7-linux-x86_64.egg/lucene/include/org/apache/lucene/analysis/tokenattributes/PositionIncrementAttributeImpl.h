#ifndef org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PositionIncrementAttribute;
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

          class PositionIncrementAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_getPositionIncrement_54c6a179,
              mid_hashCode_54c6a179,
              mid_setPositionIncrement_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionIncrementAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PositionIncrementAttributeImpl(const PositionIncrementAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PositionIncrementAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint hashCode() const;
            void setPositionIncrement(jint) const;
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
          extern PyTypeObject PY_TYPE(PositionIncrementAttributeImpl);

          class t_PositionIncrementAttributeImpl {
          public:
            PyObject_HEAD
            PositionIncrementAttributeImpl object;
            static PyObject *wrap_Object(const PositionIncrementAttributeImpl&);
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
