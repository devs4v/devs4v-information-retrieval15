#ifndef org_apache_lucene_codecs_lucene40_Lucene40StoredFieldsReader_H
#define org_apache_lucene_codecs_lucene40_Lucene40StoredFieldsReader_H

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
        class IndexInput;
        class IOContext;
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
        namespace lucene40 {

          class Lucene40StoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
          public:
            enum {
              mid_init$_3589180f,
              mid_checkIntegrity_54c6a166,
              mid_clone_2f3580b7,
              mid_close_54c6a166,
              mid_ramBytesUsed_54c6a17a,
              mid_rawDocs_1a4b1309,
              mid_size_54c6a179,
              mid_visitDocument_a2ea3ebe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40StoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40StoredFieldsReader(const Lucene40StoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            Lucene40StoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            Lucene40StoredFieldsReader clone() const;
            void close() const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::store::IndexInput rawDocs(const JArray< jint > &, jint, jint) const;
            jint size() const;
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
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40StoredFieldsReader);

          class t_Lucene40StoredFieldsReader {
          public:
            PyObject_HEAD
            Lucene40StoredFieldsReader object;
            static PyObject *wrap_Object(const Lucene40StoredFieldsReader&);
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
