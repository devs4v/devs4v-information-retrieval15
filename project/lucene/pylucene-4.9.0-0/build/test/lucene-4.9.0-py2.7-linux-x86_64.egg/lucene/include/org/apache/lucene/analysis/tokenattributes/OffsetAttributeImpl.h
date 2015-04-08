#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class OffsetAttribute;
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

          class OffsetAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_endOffset_54c6a179,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_setOffset_d8d154a6,
              mid_startOffset_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OffsetAttributeImpl(const OffsetAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            OffsetAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void setOffset(jint, jint) const;
            jint startOffset() const;
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
          extern PyTypeObject PY_TYPE(OffsetAttributeImpl);

          class t_OffsetAttributeImpl {
          public:
            PyObject_HEAD
            OffsetAttributeImpl object;
            static PyObject *wrap_Object(const OffsetAttributeImpl&);
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
