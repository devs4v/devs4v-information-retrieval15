#ifndef org_apache_lucene_codecs_lucene42_Lucene42FieldInfosFormat_H
#define org_apache_lucene_codecs_lucene42_Lucene42FieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldInfosWriter;
        class FieldInfosReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene42 {

          class Lucene42FieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getFieldInfosReader_6ecd5494,
              mid_getFieldInfosWriter_211ffa60,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene42FieldInfosFormat(jobject obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene42FieldInfosFormat(const Lucene42FieldInfosFormat& obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {}

            Lucene42FieldInfosFormat();

            ::org::apache::lucene::codecs::FieldInfosReader getFieldInfosReader() const;
            ::org::apache::lucene::codecs::FieldInfosWriter getFieldInfosWriter() const;
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
          extern PyTypeObject PY_TYPE(Lucene42FieldInfosFormat);

          class t_Lucene42FieldInfosFormat {
          public:
            PyObject_HEAD
            Lucene42FieldInfosFormat object;
            static PyObject *wrap_Object(const Lucene42FieldInfosFormat&);
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
