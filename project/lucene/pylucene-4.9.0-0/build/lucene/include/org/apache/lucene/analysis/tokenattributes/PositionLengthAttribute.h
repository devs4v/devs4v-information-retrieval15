#ifndef org_apache_lucene_analysis_tokenattributes_PositionLengthAttribute_H
#define org_apache_lucene_analysis_tokenattributes_PositionLengthAttribute_H

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
        namespace tokenattributes {

          class PositionLengthAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_getPositionLength_54c6a179,
              mid_setPositionLength_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionLengthAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PositionLengthAttribute(const PositionLengthAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint getPositionLength() const;
            void setPositionLength(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          extern PyTypeObject PY_TYPE(PositionLengthAttribute);

          class t_PositionLengthAttribute {
          public:
            PyObject_HEAD
            PositionLengthAttribute object;
            static PyObject *wrap_Object(const PositionLengthAttribute&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
