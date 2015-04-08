#ifndef org_apache_lucene_util_packed_PackedInts_H
#define org_apache_lucene_util_packed_PackedInts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$FormatAndBits;
          class PackedInts$Encoder;
          class PackedInts$Mutable;
          class PackedInts$ReaderIterator;
          class PackedInts$Header;
          class PackedInts$Format;
          class PackedInts$Decoder;
          class PackedInts$Writer;
          class PackedInts$Reader;
        }
      }
      namespace store {
        class IndexInput;
        class DataInput;
        class DataOutput;
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
      namespace util {
        namespace packed {

          class PackedInts : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_bitsRequired_0ee6df30,
              mid_checkVersion_39c7bd3c,
              mid_copy_5dfb99d8,
              mid_fastestFormatAndBits_a44dbe2e,
              mid_getDecoder_a1fc44e7,
              mid_getDirectReader_dd96fa63,
              mid_getDirectReaderNoHeader_6d5658ed,
              mid_getDirectReaderNoHeader_185fc68d,
              mid_getEncoder_82bbe26f,
              mid_getMutable_5fda8e82,
              mid_getMutable_2ab94ab5,
              mid_getReader_5e1a18f4,
              mid_getReaderIterator_edd93a0e,
              mid_getReaderIteratorNoHeader_25f812d4,
              mid_getReaderNoHeader_5f216dfc,
              mid_getReaderNoHeader_6f168df2,
              mid_getWriter_7e94d221,
              mid_getWriterNoHeader_ec8145b0,
              mid_maxValue_39c7bd20,
              mid_readHeader_1e64173a,
              mid_unsignedBitsRequired_0ee6df30,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts(const PackedInts& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat COMPACT;
            static jfloat DEFAULT;
            static jint DEFAULT_BUFFER_SIZE;
            static jfloat FAST;
            static jfloat FASTEST;
            static jint VERSION_BYTE_ALIGNED;
            static jint VERSION_CURRENT;
            static jint VERSION_MONOTONIC_WITHOUT_ZIGZAG;
            static jint VERSION_START;

            PackedInts();

            static jint bitsRequired(jlong);
            static void checkVersion(jint);
            static void copy(const ::org::apache::lucene::util::packed::PackedInts$Reader &, jint, const ::org::apache::lucene::util::packed::PackedInts$Mutable &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$FormatAndBits fastestFormatAndBits(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Decoder getDecoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getDirectReader(const ::org::apache::lucene::store::IndexInput &);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getDirectReaderNoHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::util::packed::PackedInts$Header &);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getDirectReaderNoHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Encoder getEncoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, const ::org::apache::lucene::util::packed::PackedInts$Format &);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getReader(const ::org::apache::lucene::store::DataInput &);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIterator(const ::org::apache::lucene::store::DataInput &, jint);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIteratorNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getReaderNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Header &);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getReaderNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriter(const ::org::apache::lucene::store::DataOutput &, jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriterNoHeader(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static jlong maxValue(jint);
            static ::org::apache::lucene::util::packed::PackedInts$Header readHeader(const ::org::apache::lucene::store::DataInput &);
            static jint unsignedBitsRequired(jlong);
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
          extern PyTypeObject PY_TYPE(PackedInts);

          class t_PackedInts {
          public:
            PyObject_HEAD
            PackedInts object;
            static PyObject *wrap_Object(const PackedInts&);
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
