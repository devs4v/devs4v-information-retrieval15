#ifndef org_apache_lucene_codecs_CodecUtil_H
#define org_apache_lucene_codecs_CodecUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class DataInput;
        class IndexInput;
        class DataOutput;
        class ChecksumIndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class CodecUtil : public ::java::lang::Object {
        public:
          enum {
            mid_checkEOF_0441f0b2,
            mid_checkFooter_f5e506b9,
            mid_checkHeader_128b127c,
            mid_checkHeaderNoMagic_128b127c,
            mid_checksumEntireFile_0441f0ae,
            mid_footerLength_54c6a179,
            mid_headerLength_5fdc3f57,
            mid_retrieveChecksum_0441f0ae,
            mid_writeFooter_faad620a,
            mid_writeHeader_6b5c1111,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CodecUtil(const CodecUtil& obj) : ::java::lang::Object(obj) {}

          static jint CODEC_MAGIC;
          static jint FOOTER_MAGIC;

          static void checkEOF(const ::org::apache::lucene::store::IndexInput &);
          static jlong checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &);
          static jint checkHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkHeaderNoMagic(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jlong checksumEntireFile(const ::org::apache::lucene::store::IndexInput &);
          static jint footerLength();
          static jint headerLength(const ::java::lang::String &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &);
          static void writeFooter(const ::org::apache::lucene::store::IndexOutput &);
          static void writeHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(CodecUtil);

        class t_CodecUtil {
        public:
          PyObject_HEAD
          CodecUtil object;
          static PyObject *wrap_Object(const CodecUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
