#ifndef org_apache_lucene_codecs_blocktree_BlockTreeTermsWriter_H
#define org_apache_lucene_codecs_blocktree_BlockTreeTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class SegmentWriteState;
      }
      namespace codecs {
        class TermsConsumer;
        class PostingsWriterBase;
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
        namespace blocktree {

          class BlockTreeTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
          public:
            enum {
              mid_init$_3f2db6e1,
              mid_addField_eb6fab90,
              mid_close_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTreeTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BlockTreeTermsWriter(const BlockTreeTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint DEFAULT_MAX_BLOCK_SIZE;
            static jint DEFAULT_MIN_BLOCK_SIZE;
            static jint VERSION_APPEND_ONLY;
            static jint VERSION_CHECKSUM;
            static jint VERSION_CURRENT;
            static jint VERSION_META_ARRAY;
            static jint VERSION_MIN_MAX_TERMS;
            static jint VERSION_START;

            BlockTreeTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &, jint, jint);

            ::org::apache::lucene::codecs::TermsConsumer addField(const ::org::apache::lucene::index::FieldInfo &) const;
            void close() const;
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
          extern PyTypeObject PY_TYPE(BlockTreeTermsWriter);

          class t_BlockTreeTermsWriter {
          public:
            PyObject_HEAD
            BlockTreeTermsWriter object;
            static PyObject *wrap_Object(const BlockTreeTermsWriter&);
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
