#ifndef org_apache_lucene_codecs_StoredFieldsWriter_H
#define org_apache_lucene_codecs_StoredFieldsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class IndexableField;
        class MergeState;
        class FieldInfos;
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
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class StoredFieldsWriter : public ::java::lang::Object {
        public:
          enum {
            mid_abort_54c6a166,
            mid_close_54c6a166,
            mid_finish_48f050c2,
            mid_finishDocument_54c6a166,
            mid_merge_fd0cfdeb,
            mid_startDocument_54c6a166,
            mid_writeField_0de3c993,
            mid_addDocument_2c3bf2c7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsWriter(const StoredFieldsWriter& obj) : ::java::lang::Object(obj) {}

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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(StoredFieldsWriter);

        class t_StoredFieldsWriter {
        public:
          PyObject_HEAD
          StoredFieldsWriter object;
          static PyObject *wrap_Object(const StoredFieldsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
