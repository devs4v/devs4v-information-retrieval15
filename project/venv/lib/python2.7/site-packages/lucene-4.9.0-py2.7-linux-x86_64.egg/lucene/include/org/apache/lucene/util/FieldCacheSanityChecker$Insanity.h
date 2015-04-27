#ifndef org_apache_lucene_util_FieldCacheSanityChecker$Insanity_H
#define org_apache_lucene_util_FieldCacheSanityChecker$Insanity_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FieldCacheSanityChecker$InsanityType;
      }
      namespace search {
        class FieldCache$CacheEntry;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FieldCacheSanityChecker$Insanity : public ::java::lang::Object {
        public:
          enum {
            mid_init$_9b412c8f,
            mid_getCacheEntries_2bd7104e,
            mid_getMsg_14c7b5c5,
            mid_getType_e7f4e575,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheSanityChecker$Insanity(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheSanityChecker$Insanity(const FieldCacheSanityChecker$Insanity& obj) : ::java::lang::Object(obj) {}

          FieldCacheSanityChecker$Insanity(const ::org::apache::lucene::util::FieldCacheSanityChecker$InsanityType &, const ::java::lang::String &, const JArray< ::org::apache::lucene::search::FieldCache$CacheEntry > &);

          JArray< ::org::apache::lucene::search::FieldCache$CacheEntry > getCacheEntries() const;
          ::java::lang::String getMsg() const;
          ::org::apache::lucene::util::FieldCacheSanityChecker$InsanityType getType() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(FieldCacheSanityChecker$Insanity);

        class t_FieldCacheSanityChecker$Insanity {
        public:
          PyObject_HEAD
          FieldCacheSanityChecker$Insanity object;
          static PyObject *wrap_Object(const FieldCacheSanityChecker$Insanity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
