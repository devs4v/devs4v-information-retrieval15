#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsIndexWriter_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsIndexWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {

          class CompressingStoredFieldsIndexWriter : public ::java::lang::Object {
          public:
            enum {
              mid_close_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsIndexWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsIndexWriter(const CompressingStoredFieldsIndexWriter& obj) : ::java::lang::Object(obj) {}

            void close() const;
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
        namespace compressing {
          extern PyTypeObject PY_TYPE(CompressingStoredFieldsIndexWriter);

          class t_CompressingStoredFieldsIndexWriter {
          public:
            PyObject_HEAD
            CompressingStoredFieldsIndexWriter object;
            static PyObject *wrap_Object(const CompressingStoredFieldsIndexWriter&);
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
