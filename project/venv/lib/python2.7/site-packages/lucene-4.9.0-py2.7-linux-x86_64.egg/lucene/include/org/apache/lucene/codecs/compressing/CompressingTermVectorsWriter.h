#ifndef org_apache_lucene_codecs_compressing_CompressingTermVectorsWriter_H
#define org_apache_lucene_codecs_compressing_CompressingTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class SegmentInfo;
        class MergeState;
        class FieldInfo;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IOContext;
        class DataInput;
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
  namespace util {
    class Comparator;
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

          class CompressingTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
          public:
            enum {
              mid_init$_999e6287,
              mid_abort_54c6a166,
              mid_addPosition_ffd34a92,
              mid_addProx_395d0aa2,
              mid_close_54c6a166,
              mid_finish_48f050c2,
              mid_finishDocument_54c6a166,
              mid_finishField_54c6a166,
              mid_getComparator_5a7ff2fc,
              mid_merge_fd0cfdeb,
              mid_startDocument_39c7bd3c,
              mid_startField_07c4def5,
              mid_startTerm_738fc2ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingTermVectorsWriter(const CompressingTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

            CompressingTermVectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint);

            void abort() const;
            void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void finishDocument() const;
            void finishField() const;
            ::java::util::Comparator getComparator() const;
            jint merge(const ::org::apache::lucene::index::MergeState &) const;
            void startDocument(jint) const;
            void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
            void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
          extern PyTypeObject PY_TYPE(CompressingTermVectorsWriter);

          class t_CompressingTermVectorsWriter {
          public:
            PyObject_HEAD
            CompressingTermVectorsWriter object;
            static PyObject *wrap_Object(const CompressingTermVectorsWriter&);
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
