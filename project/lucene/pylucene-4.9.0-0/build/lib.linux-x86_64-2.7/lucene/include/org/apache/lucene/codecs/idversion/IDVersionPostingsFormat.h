#ifndef org_apache_lucene_codecs_idversion_IDVersionPostingsFormat_H
#define org_apache_lucene_codecs_idversion_IDVersionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
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
        namespace idversion {

          class IDVersionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_d8d154a6,
              mid_bytesToLong_7bc03dd8,
              mid_fieldsConsumer_a15793c6,
              mid_fieldsProducer_c86c62bc,
              mid_longToBytes_57875143,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IDVersionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IDVersionPostingsFormat(const IDVersionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jlong MAX_VERSION;
            static jlong MIN_VERSION;

            IDVersionPostingsFormat();
            IDVersionPostingsFormat(jint, jint);

            static jlong bytesToLong(const ::org::apache::lucene::util::BytesRef &);
            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            static void longToBytes(jlong, const ::org::apache::lucene::util::BytesRef &);
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
        namespace idversion {
          extern PyTypeObject PY_TYPE(IDVersionPostingsFormat);

          class t_IDVersionPostingsFormat {
          public:
            PyObject_HEAD
            IDVersionPostingsFormat object;
            static PyObject *wrap_Object(const IDVersionPostingsFormat&);
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
