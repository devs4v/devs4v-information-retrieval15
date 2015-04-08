#ifndef org_apache_lucene_search_FieldCache$CacheEntry_H
#define org_apache_lucene_search_FieldCache$CacheEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
      namespace search {

        class FieldCache$CacheEntry : public ::java::lang::Object {
        public:
          enum {
            mid_init$_6f799b58,
            mid_getCacheType_44a5f2c9,
            mid_getCustom_846352c3,
            mid_getEstimatedSize_14c7b5c5,
            mid_getFieldName_14c7b5c5,
            mid_getReaderKey_846352c3,
            mid_getValue_846352c3,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$CacheEntry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$CacheEntry(const FieldCache$CacheEntry& obj) : ::java::lang::Object(obj) {}

          FieldCache$CacheEntry(const ::java::lang::Object &, const ::java::lang::String &, const ::java::lang::Class &, const ::java::lang::Object &, const ::org::apache::lucene::util::Accountable &);

          ::java::lang::Class getCacheType() const;
          ::java::lang::Object getCustom() const;
          ::java::lang::String getEstimatedSize() const;
          ::java::lang::String getFieldName() const;
          ::java::lang::Object getReaderKey() const;
          ::java::lang::Object getValue() const;
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
      namespace search {
        extern PyTypeObject PY_TYPE(FieldCache$CacheEntry);

        class t_FieldCache$CacheEntry {
        public:
          PyObject_HEAD
          FieldCache$CacheEntry object;
          static PyObject *wrap_Object(const FieldCache$CacheEntry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
