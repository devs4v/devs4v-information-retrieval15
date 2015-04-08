#ifndef org_apache_lucene_util_FieldCacheSanityChecker_H
#define org_apache_lucene_util_FieldCacheSanityChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FieldCacheSanityChecker$Insanity;
      }
      namespace search {
        class FieldCache;
        class FieldCache$CacheEntry;
      }
    }
  }
}
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

        class FieldCacheSanityChecker : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_check_d93a601e,
            mid_checkSanity_ad442ffd,
            mid_checkSanity_d93a601e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheSanityChecker(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheSanityChecker(const FieldCacheSanityChecker& obj) : ::java::lang::Object(obj) {}

          FieldCacheSanityChecker();

          JArray< ::org::apache::lucene::util::FieldCacheSanityChecker$Insanity > check(const JArray< ::org::apache::lucene::search::FieldCache$CacheEntry > &) const;
          static JArray< ::org::apache::lucene::util::FieldCacheSanityChecker$Insanity > checkSanity(const ::org::apache::lucene::search::FieldCache &);
          static JArray< ::org::apache::lucene::util::FieldCacheSanityChecker$Insanity > checkSanity(const JArray< ::org::apache::lucene::search::FieldCache$CacheEntry > &);
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
        extern PyTypeObject PY_TYPE(FieldCacheSanityChecker);

        class t_FieldCacheSanityChecker {
        public:
          PyObject_HEAD
          FieldCacheSanityChecker object;
          static PyObject *wrap_Object(const FieldCacheSanityChecker&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
