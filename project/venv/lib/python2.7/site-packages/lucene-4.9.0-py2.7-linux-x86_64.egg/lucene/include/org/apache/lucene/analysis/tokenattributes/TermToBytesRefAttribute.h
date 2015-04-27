#ifndef org_apache_lucene_analysis_tokenattributes_TermToBytesRefAttribute_H
#define org_apache_lucene_analysis_tokenattributes_TermToBytesRefAttribute_H

#include "org/apache/lucene/util/Attribute.h"

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
      namespace analysis {
        namespace tokenattributes {

          class TermToBytesRefAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_fillBytesRef_54c6a166,
              mid_getBytesRef_4ae19461,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermToBytesRefAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TermToBytesRefAttribute(const TermToBytesRefAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            void fillBytesRef() const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
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
          extern PyTypeObject PY_TYPE(TermToBytesRefAttribute);

          class t_TermToBytesRefAttribute {
          public:
            PyObject_HEAD
            TermToBytesRefAttribute object;
            static PyObject *wrap_Object(const TermToBytesRefAttribute&);
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
