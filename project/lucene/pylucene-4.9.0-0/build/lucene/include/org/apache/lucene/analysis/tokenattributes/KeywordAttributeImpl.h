#ifndef org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class KeywordAttribute;
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

          class KeywordAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_copyTo_d86caa9f,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_isKeyword_54c6a16a,
              mid_setKeyword_bb0c767f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            KeywordAttributeImpl(const KeywordAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            KeywordAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isKeyword() const;
            void setKeyword(jboolean) const;
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
          extern PyTypeObject PY_TYPE(KeywordAttributeImpl);

          class t_KeywordAttributeImpl {
          public:
            PyObject_HEAD
            KeywordAttributeImpl object;
            static PyObject *wrap_Object(const KeywordAttributeImpl&);
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
