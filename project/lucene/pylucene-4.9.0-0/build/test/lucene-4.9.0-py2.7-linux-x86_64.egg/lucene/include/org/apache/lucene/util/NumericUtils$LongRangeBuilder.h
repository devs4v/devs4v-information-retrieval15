#ifndef org_apache_lucene_util_NumericUtils$LongRangeBuilder_H
#define org_apache_lucene_util_NumericUtils$LongRangeBuilder_H

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

        class NumericUtils$LongRangeBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_addRange_594e5ee6,
            mid_addRange_42663baa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils$LongRangeBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericUtils$LongRangeBuilder(const NumericUtils$LongRangeBuilder& obj) : ::java::lang::Object(obj) {}

          NumericUtils$LongRangeBuilder();

          void addRange(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          void addRange(jlong, jlong, jint) const;
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
        extern PyTypeObject PY_TYPE(NumericUtils$LongRangeBuilder);

        class t_NumericUtils$LongRangeBuilder {
        public:
          PyObject_HEAD
          NumericUtils$LongRangeBuilder object;
          static PyObject *wrap_Object(const NumericUtils$LongRangeBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
