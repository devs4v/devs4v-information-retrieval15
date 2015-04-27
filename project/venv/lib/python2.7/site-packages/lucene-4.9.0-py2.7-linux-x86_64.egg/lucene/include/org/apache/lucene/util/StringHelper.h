#ifndef org_apache_lucene_util_StringHelper_H
#define org_apache_lucene_util_StringHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class StringHelper : public ::java::lang::Object {
        public:
          enum {
            mid_bytesDifference_594e5ef9,
            mid_endsWith_594e5eea,
            mid_equals_4a26474e,
            mid_getVersionComparator_5a7ff2fc,
            mid_murmurhash3_x86_32_738fc2d1,
            mid_murmurhash3_x86_32_96a25f14,
            mid_startsWith_594e5eea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StringHelper(const StringHelper& obj) : ::java::lang::Object(obj) {}

          static jint GOOD_FAST_HASH_SEED;

          static jint bytesDifference(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean endsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean equals(const ::java::lang::String &, const ::java::lang::String &);
          static ::java::util::Comparator getVersionComparator();
          static jint murmurhash3_x86_32(const ::org::apache::lucene::util::BytesRef &, jint);
          static jint murmurhash3_x86_32(const JArray< jbyte > &, jint, jint, jint);
          static jboolean startsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
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
        extern PyTypeObject PY_TYPE(StringHelper);

        class t_StringHelper {
        public:
          PyObject_HEAD
          StringHelper object;
          static PyObject *wrap_Object(const StringHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
