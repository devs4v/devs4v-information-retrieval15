#ifndef org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
        class AttributeImpl;
      }
      namespace analysis {
        namespace tokenattributes {
          class OffsetAttribute;
          class PositionIncrementAttribute;
          class PositionLengthAttribute;
          class TypeAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PackedTokenAttributeImpl : public ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_clone_2353e953,
              mid_copyTo_d86caa9f,
              mid_endOffset_54c6a179,
              mid_equals_290588e2,
              mid_getPositionIncrement_54c6a179,
              mid_getPositionLength_54c6a179,
              mid_hashCode_54c6a179,
              mid_reflectWith_5f3f5102,
              mid_setOffset_d8d154a6,
              mid_setPositionIncrement_39c7bd3c,
              mid_setPositionLength_39c7bd3c,
              mid_setType_5fdc3f48,
              mid_startOffset_54c6a179,
              mid_type_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedTokenAttributeImpl(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedTokenAttributeImpl(const PackedTokenAttributeImpl& obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {}

            PackedTokenAttributeImpl();

            void clear() const;
            PackedTokenAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
            void setType(const ::java::lang::String &) const;
            jint startOffset() const;
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
          extern PyTypeObject PY_TYPE(PackedTokenAttributeImpl);

          class t_PackedTokenAttributeImpl {
          public:
            PyObject_HEAD
            PackedTokenAttributeImpl object;
            static PyObject *wrap_Object(const PackedTokenAttributeImpl&);
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
