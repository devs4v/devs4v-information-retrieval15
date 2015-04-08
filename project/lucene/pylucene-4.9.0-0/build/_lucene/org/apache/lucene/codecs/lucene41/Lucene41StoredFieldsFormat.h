#ifndef org_apache_lucene_codecs_lucene41_Lucene41StoredFieldsFormat_H
#define org_apache_lucene_codecs_lucene41_Lucene41StoredFieldsFormat_H

#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsFormat.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene41 {

          class Lucene41StoredFieldsFormat : public ::org::apache::lucene::codecs::compressing::CompressingStoredFieldsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene41StoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::compressing::CompressingStoredFieldsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41StoredFieldsFormat(const Lucene41StoredFieldsFormat& obj) : ::org::apache::lucene::codecs::compressing::CompressingStoredFieldsFormat(obj) {}

            Lucene41StoredFieldsFormat();
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
      namespace codecs {
        namespace lucene41 {
          extern PyTypeObject PY_TYPE(Lucene41StoredFieldsFormat);

          class t_Lucene41StoredFieldsFormat {
          public:
            PyObject_HEAD
            Lucene41StoredFieldsFormat object;
            static PyObject *wrap_Object(const Lucene41StoredFieldsFormat&);
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
