#ifndef org_apache_lucene_codecs_lucene42_Lucene42DocValuesFormat_H
#define org_apache_lucene_codecs_lucene42_Lucene42DocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
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

          class Lucene42DocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_fieldsConsumer_025deb44,
              mid_fieldsProducer_9b0d4e4a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene42DocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene42DocValuesFormat(const Lucene42DocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            static jint MAX_BINARY_FIELD_LENGTH;

            Lucene42DocValuesFormat();
            Lucene42DocValuesFormat(jfloat);

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
          extern PyTypeObject PY_TYPE(Lucene42DocValuesFormat);

          class t_Lucene42DocValuesFormat {
          public:
            PyObject_HEAD
            Lucene42DocValuesFormat object;
            static PyObject *wrap_Object(const Lucene42DocValuesFormat&);
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
