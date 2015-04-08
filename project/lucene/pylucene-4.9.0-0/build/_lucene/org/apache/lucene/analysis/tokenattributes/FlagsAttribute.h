#ifndef org_apache_lucene_analysis_tokenattributes_FlagsAttribute_H
#define org_apache_lucene_analysis_tokenattributes_FlagsAttribute_H

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

          class FlagsAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_getFlags_54c6a179,
              mid_setFlags_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlagsAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FlagsAttribute(const FlagsAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint getFlags() const;
            void setFlags(jint) const;
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
          extern PyTypeObject PY_TYPE(FlagsAttribute);

          class t_FlagsAttribute {
          public:
            PyObject_HEAD
            FlagsAttribute object;
            static PyObject *wrap_Object(const FlagsAttribute&);
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
