#ifndef org_apache_lucene_util_packed_EliasFanoDecoder_H
#define org_apache_lucene_util_packed_EliasFanoDecoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class EliasFanoEncoder;
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
      namespace util {
        namespace packed {

          class EliasFanoDecoder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_dd0d7538,
              mid_advanceToIndex_0ee6df23,
              mid_advanceToValue_0ee6df33,
              mid_backToValue_0ee6df33,
              mid_currentIndex_54c6a17a,
              mid_currentValue_54c6a17a,
              mid_getEliasFanoEncoder_803fc555,
              mid_nextValue_54c6a17a,
              mid_numEncoded_54c6a17a,
              mid_previousValue_54c6a17a,
              mid_toAfterSequence_54c6a166,
              mid_toBeforeSequence_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EliasFanoDecoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EliasFanoDecoder(const EliasFanoDecoder& obj) : ::java::lang::Object(obj) {}

            static jlong NO_MORE_VALUES;

            EliasFanoDecoder(const ::org::apache::lucene::util::packed::EliasFanoEncoder &);

            jboolean advanceToIndex(jlong) const;
            jlong advanceToValue(jlong) const;
            jlong backToValue(jlong) const;
            jlong currentIndex() const;
            jlong currentValue() const;
            ::org::apache::lucene::util::packed::EliasFanoEncoder getEliasFanoEncoder() const;
            jlong nextValue() const;
            jlong numEncoded() const;
            jlong previousValue() const;
            void toAfterSequence() const;
            void toBeforeSequence() const;
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
      namespace util {
        namespace packed {
          extern PyTypeObject PY_TYPE(EliasFanoDecoder);

          class t_EliasFanoDecoder {
          public:
            PyObject_HEAD
            EliasFanoDecoder object;
            static PyObject *wrap_Object(const EliasFanoDecoder&);
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
