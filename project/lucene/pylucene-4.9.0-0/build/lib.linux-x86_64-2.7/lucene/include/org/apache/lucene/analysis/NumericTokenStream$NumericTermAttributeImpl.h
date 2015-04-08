#ifndef org_apache_lucene_analysis_NumericTokenStream$NumericTermAttributeImpl_H
#define org_apache_lucene_analysis_NumericTokenStream$NumericTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        class NumericTokenStream$NumericTermAttribute;
        namespace tokenattributes {
          class TermToBytesRefAttribute;
        }
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
      namespace analysis {

        class NumericTokenStream$NumericTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clear_54c6a166,
            mid_copyTo_d86caa9f,
            mid_fillBytesRef_54c6a166,
            mid_getBytesRef_4ae19461,
            mid_getRawValue_54c6a17a,
            mid_getShift_54c6a179,
            mid_getValueSize_54c6a179,
            mid_incShift_54c6a179,
            mid_init_72e1d373,
            mid_reflectWith_5f3f5102,
            mid_setShift_39c7bd3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericTokenStream$NumericTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericTokenStream$NumericTermAttributeImpl(const NumericTokenStream$NumericTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          NumericTokenStream$NumericTermAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          void fillBytesRef() const;
          ::org::apache::lucene::util::BytesRef getBytesRef() const;
          jlong getRawValue() const;
          jint getShift() const;
          jint getValueSize() const;
          jint incShift() const;
          void init(jlong, jint, jint, jint) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setShift(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(NumericTokenStream$NumericTermAttributeImpl);

        class t_NumericTokenStream$NumericTermAttributeImpl {
        public:
          PyObject_HEAD
          NumericTokenStream$NumericTermAttributeImpl object;
          static PyObject *wrap_Object(const NumericTokenStream$NumericTermAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
