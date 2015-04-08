#ifndef org_apache_lucene_util_SentinelIntSet_H
#define org_apache_lucene_util_SentinelIntSet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SentinelIntSet : public ::java::lang::Object {
        public:
          enum {
            mid_init$_d8d154a6,
            mid_clear_54c6a166,
            mid_exists_39c7bd30,
            mid_find_39c7bd23,
            mid_getSlot_39c7bd23,
            mid_hash_39c7bd23,
            mid_put_39c7bd23,
            mid_ramBytesUsed_54c6a17a,
            mid_rehash_54c6a166,
            mid_size_54c6a179,
            max_mid
          };

          enum {
            fid_count,
            fid_emptyVal,
            fid_keys,
            fid_rehashCount,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SentinelIntSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SentinelIntSet(const SentinelIntSet& obj) : ::java::lang::Object(obj) {}

          jint _get_count() const;
          void _set_count(jint) const;
          jint _get_emptyVal() const;
          JArray< jint > _get_keys() const;
          void _set_keys(const JArray< jint > &) const;
          jint _get_rehashCount() const;
          void _set_rehashCount(jint) const;

          SentinelIntSet(jint, jint);

          void clear() const;
          jboolean exists(jint) const;
          jint find(jint) const;
          jint getSlot(jint) const;
          jint hash(jint) const;
          jint put(jint) const;
          jlong ramBytesUsed() const;
          void rehash() const;
          jint size() const;
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
        extern PyTypeObject PY_TYPE(SentinelIntSet);

        class t_SentinelIntSet {
        public:
          PyObject_HEAD
          SentinelIntSet object;
          static PyObject *wrap_Object(const SentinelIntSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
