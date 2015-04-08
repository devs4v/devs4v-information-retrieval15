#ifndef org_apache_lucene_codecs_blocktree_BlockTreeTermsReader_H
#define org_apache_lucene_codecs_blocktree_BlockTreeTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfos;
        class Terms;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class PostingsReaderBase;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Iterator;
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
        namespace blocktree {

          class BlockTreeTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
          public:
            enum {
              mid_init$_72076db5,
              mid_checkIntegrity_54c6a166,
              mid_close_54c6a166,
              mid_iterator_40858c90,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a179,
              mid_terms_ee262ab4,
              mid_readHeader_0441f0ad,
              mid_readIndexHeader_0441f0ad,
              mid_seekDir_ec9e0593,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTreeTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BlockTreeTermsReader(const BlockTreeTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            BlockTreeTermsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, jint);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        namespace blocktree {
          extern PyTypeObject PY_TYPE(BlockTreeTermsReader);

          class t_BlockTreeTermsReader {
          public:
            PyObject_HEAD
            BlockTreeTermsReader object;
            static PyObject *wrap_Object(const BlockTreeTermsReader&);
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
