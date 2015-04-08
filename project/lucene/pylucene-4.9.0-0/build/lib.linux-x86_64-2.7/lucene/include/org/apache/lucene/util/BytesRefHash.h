#ifndef org_apache_lucene_util_BytesRefHash_H
#define org_apache_lucene_util_BytesRefHash_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefHash$BytesStartArray;
        class BytesRef;
        class ByteBlockPool;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefHash : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_ca821364,
            mid_init$_348f324e,
            mid_add_7bc03ddb,
            mid_addByPoolOffset_39c7bd23,
            mid_byteStart_39c7bd23,
            mid_clear_54c6a166,
            mid_clear_bb0c767f,
            mid_close_54c6a166,
            mid_find_7bc03ddb,
            mid_get_ce5e2005,
            mid_reinit_54c6a166,
            mid_size_54c6a179,
            mid_sort_402cb660,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash(const BytesRefHash& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_CAPACITY;

          BytesRefHash();
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &);
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &, jint, const ::org::apache::lucene::util::BytesRefHash$BytesStartArray &);

          jint add(const ::org::apache::lucene::util::BytesRef &) const;
          jint addByPoolOffset(jint) const;
          jint byteStart(jint) const;
          void clear() const;
          void clear(jboolean) const;
          void close() const;
          jint find(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef get(jint, const ::org::apache::lucene::util::BytesRef &) const;
          void reinit() const;
          jint size() const;
          JArray< jint > sort(const ::java::util::Comparator &) const;
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
        extern PyTypeObject PY_TYPE(BytesRefHash);

        class t_BytesRefHash {
        public:
          PyObject_HEAD
          BytesRefHash object;
          static PyObject *wrap_Object(const BytesRefHash&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
