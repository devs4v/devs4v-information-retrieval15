#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttribute_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttribute_H

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

          class OffsetAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_endOffset_54c6a179,
              mid_setOffset_d8d154a6,
              mid_startOffset_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OffsetAttribute(const OffsetAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint endOffset() const;
            void setOffset(jint, jint) const;
            jint startOffset() const;
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
          extern PyTypeObject PY_TYPE(OffsetAttribute);

          class t_OffsetAttribute {
          public:
            PyObject_HEAD
            OffsetAttribute object;
            static PyObject *wrap_Object(const OffsetAttribute&);
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
