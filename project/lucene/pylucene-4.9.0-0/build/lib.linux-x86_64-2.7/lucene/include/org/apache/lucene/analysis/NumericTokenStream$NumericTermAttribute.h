#ifndef org_apache_lucene_analysis_NumericTokenStream$NumericTermAttribute_H
#define org_apache_lucene_analysis_NumericTokenStream$NumericTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

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

        class NumericTokenStream$NumericTermAttribute : public ::org::apache::lucene::util::Attribute {
        public:
          enum {
            mid_getRawValue_54c6a17a,
            mid_getShift_54c6a179,
            mid_getValueSize_54c6a179,
            mid_incShift_54c6a179,
            mid_init_72e1d373,
            mid_setShift_39c7bd3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericTokenStream$NumericTermAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericTokenStream$NumericTermAttribute(const NumericTokenStream$NumericTermAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

          jlong getRawValue() const;
          jint getShift() const;
          jint getValueSize() const;
          jint incShift() const;
          void init(jlong, jint, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(NumericTokenStream$NumericTermAttribute);

        class t_NumericTokenStream$NumericTermAttribute {
        public:
          PyObject_HEAD
          NumericTokenStream$NumericTermAttribute object;
          static PyObject *wrap_Object(const NumericTokenStream$NumericTermAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
