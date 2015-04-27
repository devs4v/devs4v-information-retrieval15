#ifndef org_apache_lucene_codecs_lucene42_Lucene42TermVectorsFormat_H
#define org_apache_lucene_codecs_lucene42_Lucene42TermVectorsFormat_H

#include "org/apache/lucene/codecs/compressing/CompressingTermVectorsFormat.h"

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
        namespace lucene42 {

          class Lucene42TermVectorsFormat : public ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene42TermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene42TermVectorsFormat(const Lucene42TermVectorsFormat& obj) : ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat(obj) {}

            Lucene42TermVectorsFormat();
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
        namespace lucene42 {
          extern PyTypeObject PY_TYPE(Lucene42TermVectorsFormat);

          class t_Lucene42TermVectorsFormat {
          public:
            PyObject_HEAD
            Lucene42TermVectorsFormat object;
            static PyObject *wrap_Object(const Lucene42TermVectorsFormat&);
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
