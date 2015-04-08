#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsReader_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfos;
        class StoredFieldVisitor;
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

          class CompressingStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
          public:
            enum {
              mid_init$_846e12dd,
              mid_checkIntegrity_54c6a166,
              mid_clone_ef585f0d,
              mid_close_54c6a166,
              mid_ramBytesUsed_54c6a17a,
              mid_visitDocument_a2ea3ebe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsReader(const CompressingStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            CompressingStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
            void close() const;
            jlong ramBytesUsed() const;
            void visitDocument(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
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
          extern PyTypeObject PY_TYPE(CompressingStoredFieldsReader);

          class t_CompressingStoredFieldsReader {
          public:
            PyObject_HEAD
            CompressingStoredFieldsReader object;
            static PyObject *wrap_Object(const CompressingStoredFieldsReader&);
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
