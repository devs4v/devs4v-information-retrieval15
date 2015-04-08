#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermToBytesRefAttribute;
          class CharTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class StringBuilder;
    class CharSequence;
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

          class CharTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_append_2b3c6943,
              mid_append_8fff6b0d,
              mid_append_ec8fc27b,
              mid_append_950755e3,
              mid_append_727d3f8d,
              mid_append_6505d5ab,
              mid_buffer_dab10e7f,
              mid_charAt_39c7bd29,
              mid_clear_54c6a166,
              mid_clone_c3b245d5,
              mid_copyBuffer_6f0bb356,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_fillBytesRef_54c6a166,
              mid_getBytesRef_4ae19461,
              mid_hashCode_54c6a179,
              mid_length_54c6a179,
              mid_reflectWith_5f3f5102,
              mid_resizeBuffer_b4292e99,
              mid_setEmpty_211a9257,
              mid_setLength_da4913e5,
              mid_subSequence_f88dfd57,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharTermAttributeImpl(const CharTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            CharTermAttributeImpl();

            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(jchar) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            jchar charAt(jint) const;
            void clear() const;
            CharTermAttributeImpl clone() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void fillBytesRef() const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            jint length() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            JArray< jchar > resizeBuffer(jint) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setEmpty() const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setLength(jint) const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(CharTermAttributeImpl);

          class t_CharTermAttributeImpl {
          public:
            PyObject_HEAD
            CharTermAttributeImpl object;
            static PyObject *wrap_Object(const CharTermAttributeImpl&);
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
