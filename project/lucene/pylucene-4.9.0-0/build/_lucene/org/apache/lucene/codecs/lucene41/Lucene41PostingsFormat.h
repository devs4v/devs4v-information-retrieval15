#ifndef org_apache_lucene_codecs_lucene41_Lucene41PostingsFormat_H
#define org_apache_lucene_codecs_lucene41_Lucene41PostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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
        namespace lucene41 {

          class Lucene41PostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_d8d154a6,
              mid_fieldsConsumer_a15793c6,
              mid_fieldsProducer_c86c62bc,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene41PostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41PostingsFormat(const Lucene41PostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jint BLOCK_SIZE;
            static ::java::lang::String *DOC_EXTENSION;
            static ::java::lang::String *PAY_EXTENSION;
            static ::java::lang::String *POS_EXTENSION;

            Lucene41PostingsFormat();
            Lucene41PostingsFormat(jint, jint);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(Lucene41PostingsFormat);

          class t_Lucene41PostingsFormat {
          public:
            PyObject_HEAD
            Lucene41PostingsFormat object;
            static PyObject *wrap_Object(const Lucene41PostingsFormat&);
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
