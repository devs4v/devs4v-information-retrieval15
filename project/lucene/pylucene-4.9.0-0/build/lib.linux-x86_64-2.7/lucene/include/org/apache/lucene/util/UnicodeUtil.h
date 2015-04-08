#ifndef org_apache_lucene_util_UnicodeUtil_H
#define org_apache_lucene_util_UnicodeUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
        class CharsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class UnicodeUtil : public ::java::lang::Object {
        public:
          enum {
            mid_UTF16toUTF8_08c4d28c,
            mid_UTF16toUTF8_edea5d3c,
            mid_UTF8toUTF16_5b2f2c58,
            mid_UTF8toUTF16_3aa183dd,
            mid_UTF8toUTF32_079b7c7a,
            mid_codePointCount_7bc03ddb,
            mid_newString_3ade3c03,
            mid_toHexString_97a5258f,
            mid_validUTF16String_a8afc646,
            mid_validUTF16String_ec6430f8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnicodeUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          UnicodeUtil(const UnicodeUtil& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::BytesRef *BIG_TERM;
          static jint UNI_REPLACEMENT_CHAR;
          static jint UNI_SUR_HIGH_END;
          static jint UNI_SUR_HIGH_START;
          static jint UNI_SUR_LOW_END;
          static jint UNI_SUR_LOW_START;

          static void UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const ::org::apache::lucene::util::BytesRef &);
          static void UTF16toUTF8(const JArray< jchar > &, jint, jint, const ::org::apache::lucene::util::BytesRef &);
          static void UTF8toUTF16(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::CharsRef &);
          static void UTF8toUTF16(const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::util::CharsRef &);
          static void UTF8toUTF32(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRef &);
          static jint codePointCount(const ::org::apache::lucene::util::BytesRef &);
          static ::java::lang::String newString(const JArray< jint > &, jint, jint);
          static ::java::lang::String toHexString(const ::java::lang::String &);
          static jboolean validUTF16String(const ::java::lang::CharSequence &);
          static jboolean validUTF16String(const JArray< jchar > &, jint);
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
        extern PyTypeObject PY_TYPE(UnicodeUtil);

        class t_UnicodeUtil {
        public:
          PyObject_HEAD
          UnicodeUtil object;
          static PyObject *wrap_Object(const UnicodeUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
