#ifndef org_apache_lucene_analysis_tokenattributes_FlagsAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_FlagsAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class FlagsAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class FlagsAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_getFlags_54c6a179,
              mid_hashCode_54c6a179,
              mid_setFlags_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlagsAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FlagsAttributeImpl(const FlagsAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            FlagsAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getFlags() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(FlagsAttributeImpl);

          class t_FlagsAttributeImpl {
          public:
            PyObject_HEAD
            FlagsAttributeImpl object;
            static PyObject *wrap_Object(const FlagsAttributeImpl&);
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
