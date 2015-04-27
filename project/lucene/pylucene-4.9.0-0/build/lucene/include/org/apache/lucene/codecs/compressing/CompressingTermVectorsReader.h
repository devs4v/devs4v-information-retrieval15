#ifndef org_apache_lucene_codecs_compressing_CompressingTermVectorsReader_H
#define org_apache_lucene_codecs_compressing_CompressingTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class Fields;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
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
        namespace compressing {

          class CompressingTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
          public:
            enum {
              mid_init$_846e12dd,
              mid_checkIntegrity_54c6a166,
              mid_clone_475a2624,
              mid_close_54c6a166,
              mid_get_ef1c9c73,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingTermVectorsReader(const CompressingTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

            CompressingTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::TermVectorsReader clone() const;
            void close() const;
            ::org::apache::lucene::index::Fields get(jint) const;
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
          extern PyTypeObject PY_TYPE(CompressingTermVectorsReader);

          class t_CompressingTermVectorsReader {
          public:
            PyObject_HEAD
            CompressingTermVectorsReader object;
            static PyObject *wrap_Object(const CompressingTermVectorsReader&);
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
