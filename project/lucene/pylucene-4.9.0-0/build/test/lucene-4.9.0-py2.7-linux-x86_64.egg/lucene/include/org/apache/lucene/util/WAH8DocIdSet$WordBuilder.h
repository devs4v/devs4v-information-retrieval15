#ifndef org_apache_lucene_util_WAH8DocIdSet$WordBuilder_H
#define org_apache_lucene_util_WAH8DocIdSet$WordBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class WAH8DocIdSet;
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

        class WAH8DocIdSet$WordBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_build_b0ef9fd4,
            mid_setIndexInterval_3cc37a2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WAH8DocIdSet$WordBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          WAH8DocIdSet$WordBuilder(const WAH8DocIdSet$WordBuilder& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::WAH8DocIdSet build() const;
          WAH8DocIdSet$WordBuilder setIndexInterval(jint) const;
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
        extern PyTypeObject PY_TYPE(WAH8DocIdSet$WordBuilder);

        class t_WAH8DocIdSet$WordBuilder {
        public:
          PyObject_HEAD
          WAH8DocIdSet$WordBuilder object;
          static PyObject *wrap_Object(const WAH8DocIdSet$WordBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
