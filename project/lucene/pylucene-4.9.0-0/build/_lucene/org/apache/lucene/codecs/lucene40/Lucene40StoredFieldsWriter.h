#ifndef org_apache_lucene_codecs_lucene40_Lucene40StoredFieldsWriter_H
#define org_apache_lucene_codecs_lucene40_Lucene40StoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class IndexableField;
        class MergeState;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IndexInput;
        class IOContext;
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
        namespace lucene40 {

          class Lucene40StoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
          public:
            enum {
              mid_init$_1962ccd4,
              mid_abort_54c6a166,
              mid_addRawDocuments_9a4782ba,
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

            explicit Lucene40StoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40StoredFieldsWriter(const Lucene40StoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            static ::java::lang::String *FIELDS_EXTENSION;
            static ::java::lang::String *FIELDS_INDEX_EXTENSION;

            Lucene40StoredFieldsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void abort() const;
            void addRawDocuments(const ::org::apache::lucene::store::IndexInput &, const JArray< jint > &, jint) const;
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
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40StoredFieldsWriter);

          class t_Lucene40StoredFieldsWriter {
          public:
            PyObject_HEAD
            Lucene40StoredFieldsWriter object;
            static PyObject *wrap_Object(const Lucene40StoredFieldsWriter&);
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
