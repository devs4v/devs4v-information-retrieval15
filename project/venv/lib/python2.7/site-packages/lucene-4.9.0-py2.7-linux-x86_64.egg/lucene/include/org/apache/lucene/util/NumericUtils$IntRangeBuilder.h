#ifndef org_apache_lucene_util_NumericUtils$IntRangeBuilder_H
#define org_apache_lucene_util_NumericUtils$IntRangeBuilder_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NumericUtils$IntRangeBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_addRange_594e5ee6,
            mid_addRange_d3236aa4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils$IntRangeBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericUtils$IntRangeBuilder(const NumericUtils$IntRangeBuilder& obj) : ::java::lang::Object(obj) {}

          NumericUtils$IntRangeBuilder();

          void addRange(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          void addRange(jint, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(NumericUtils$IntRangeBuilder);

        class t_NumericUtils$IntRangeBuilder {
        public:
          PyObject_HEAD
          NumericUtils$IntRangeBuilder object;
          static PyObject *wrap_Object(const NumericUtils$IntRangeBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
