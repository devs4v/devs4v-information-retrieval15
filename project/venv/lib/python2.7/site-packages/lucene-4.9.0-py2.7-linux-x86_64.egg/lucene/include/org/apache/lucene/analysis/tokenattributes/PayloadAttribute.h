#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttribute_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttribute_H

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

          class PayloadAttribute : public ::org::apache::lucene::util::Attribute {
          public:
            enum {
              mid_getPayload_4ae19461,
              mid_setPayload_7bc03dc4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadAttribute(const PayloadAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            ::org::apache::lucene::util::BytesRef getPayload() const;
            void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyTypeObject PY_TYPE(PayloadAttribute);

          class t_PayloadAttribute {
          public:
            PyObject_HEAD
            PayloadAttribute object;
            static PyObject *wrap_Object(const PayloadAttribute&);
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
