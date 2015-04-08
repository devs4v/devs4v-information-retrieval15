#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsFormat_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class StoredFieldsReader;
        class StoredFieldsWriter;
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

          class CompressingStoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
          public:
            enum {
              mid_init$_41920a78,
              mid_init$_5a706bd2,
              mid_fieldsReader_bbe26ec4,
              mid_fieldsWriter_c73cceda,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsFormat(const CompressingStoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

            CompressingStoredFieldsFormat(const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint);
            CompressingStoredFieldsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint);

            ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace compressing {
          extern PyTypeObject PY_TYPE(CompressingStoredFieldsFormat);

          class t_CompressingStoredFieldsFormat {
          public:
            PyObject_HEAD
            CompressingStoredFieldsFormat object;
            static PyObject *wrap_Object(const CompressingStoredFieldsFormat&);
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
