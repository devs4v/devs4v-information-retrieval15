#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsWriter_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfo;
        class MergeState;
        class IndexableField;
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

          class CompressingStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
          public:
            enum {
              mid_init$_999e6287,
              mid_abort_54c6a166,
              mid_close_54c6a166,
              mid_finish_48f050c2,
              mid_finishDocument_54c6a166,
              mid_merge_fd0cfdeb,
              mid_startDocument_54c6a166,
              mid_writeField_0de3c993,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsWriter(const CompressingStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            CompressingStoredFieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint);

            void abort() const;
            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void finishDocument() const;
            jint merge(const ::org::apache::lucene::index::MergeState &) const;
            void startDocument() const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::IndexableField &) const;
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
          extern PyTypeObject PY_TYPE(CompressingStoredFieldsWriter);

          class t_CompressingStoredFieldsWriter {
          public:
            PyObject_HEAD
            CompressingStoredFieldsWriter object;
            static PyObject *wrap_Object(const CompressingStoredFieldsWriter&);
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
