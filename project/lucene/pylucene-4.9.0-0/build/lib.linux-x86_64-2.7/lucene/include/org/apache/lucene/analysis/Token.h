#ifndef org_apache_lucene_analysis_Token_H
#define org_apache_lucene_analysis_Token_H

#include "org/apache/lucene/analysis/tokenattributes/PackedTokenAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class BytesRef;
        class AttributeReflector;
        class AttributeImpl;
      }
      namespace analysis {
        namespace tokenattributes {
          class FlagsAttribute;
          class PayloadAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class Token : public ::org::apache::lucene::analysis::tokenattributes::PackedTokenAttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_d8d154a6,
            mid_init$_6cc8d7e2,
            mid_init$_490a7ef0,
            mid_init$_d3236aa4,
            mid_init$_734c49c6,
            mid_init$_b8e753a2,
            mid_init$_f453acf6,
            mid_clear_54c6a166,
            mid_clone_55852c17,
            mid_copyTo_d86caa9f,
            mid_equals_290588e2,
            mid_getFlags_54c6a179,
            mid_getPayload_4ae19461,
            mid_hashCode_54c6a179,
            mid_reflectWith_5f3f5102,
            mid_reinit_4f6e7002,
            mid_reinit_4b41519c,
            mid_reinit_fca163e5,
            mid_reinit_9e1b3a5a,
            mid_reinit_ca2a1773,
            mid_reinit_53bb4fe3,
            mid_reinit_d4354d15,
            mid_reinit_4c56913b,
            mid_reinit_6aec2009,
            mid_setFlags_39c7bd3c,
            mid_setPayload_7bc03dc4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Token(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::PackedTokenAttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Token(const Token& obj) : ::org::apache::lucene::analysis::tokenattributes::PackedTokenAttributeImpl(obj) {}

          static ::org::apache::lucene::util::AttributeFactory *TOKEN_ATTRIBUTE_FACTORY;

          Token();
          Token(jint, jint);
          Token(const ::java::lang::CharSequence &, jint, jint);
          Token(jint, jint, const ::java::lang::String &);
          Token(jint, jint, jint);
          Token(const ::java::lang::String &, jint, jint, const ::java::lang::String &);
          Token(const ::java::lang::String &, jint, jint, jint);
          Token(const JArray< jchar > &, jint, jint, jint, jint);

          void clear() const;
          Token clone() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getFlags() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint hashCode() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void reinit(const Token &) const;
          void reinit(const Token &, const ::java::lang::String &) const;
          Token reinit(const ::java::lang::String &, jint, jint) const;
          void reinit(const Token &, const JArray< jchar > &, jint, jint) const;
          Token reinit(const ::java::lang::String &, jint, jint, const ::java::lang::String &) const;
          Token reinit(const JArray< jchar > &, jint, jint, jint, jint) const;
          Token reinit(const ::java::lang::String &, jint, jint, jint, jint) const;
          Token reinit(const ::java::lang::String &, jint, jint, jint, jint, const ::java::lang::String &) const;
          Token reinit(const JArray< jchar > &, jint, jint, jint, jint, const ::java::lang::String &) const;
          void setFlags(jint) const;
          void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(Token);

        class t_Token {
        public:
          PyObject_HEAD
          Token object;
          static PyObject *wrap_Object(const Token&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
