#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsIndexReader_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsIndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {

          class CompressingStoredFieldsIndexReader : public ::java::lang::Object {
          public:
            enum {
              mid_clone_b704ed60,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsIndexReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsIndexReader(const CompressingStoredFieldsIndexReader& obj) : ::java::lang::Object(obj) {}

            CompressingStoredFieldsIndexReader clone() const;
            jlong ramBytesUsed() const;
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
          extern PyTypeObject PY_TYPE(CompressingStoredFieldsIndexReader);

          class t_CompressingStoredFieldsIndexReader {
          public:
            PyObject_HEAD
            CompressingStoredFieldsIndexReader object;
            static PyObject *wrap_Object(const CompressingStoredFieldsIndexReader&);
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
