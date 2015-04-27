#ifndef org_apache_lucene_codecs_lucene41_Lucene41PostingsReader_H
#define org_apache_lucene_codecs_lucene41_Lucene41PostingsReader_H

#include "org/apache/lucene/codecs/PostingsReaderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
        class DocsEnum;
        class DocsAndPositionsEnum;
        class FieldInfo;
      }
      namespace store {
        class Directory;
        class IndexInput;
        class IOContext;
        class DataInput;
      }
      namespace codecs {
        class BlockTermState;
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
        namespace lucene41 {

          class Lucene41PostingsReader : public ::org::apache::lucene::codecs::PostingsReaderBase {
          public:
            enum {
              mid_init$_b18a8355,
              mid_checkIntegrity_54c6a166,
              mid_close_54c6a166,
              mid_decodeTerm_0d1f34e8,
              mid_docs_4cca8a9c,
              mid_docsAndPositions_3ae1ca58,
              mid_init_0441f0b2,
              mid_newTermState_9f93879c,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene41PostingsReader(jobject obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41PostingsReader(const Lucene41PostingsReader& obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {}

            Lucene41PostingsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &);

            void checkIntegrity() const;
            void close() const;
            void decodeTerm(const JArray< jlong > &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
            ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
            void init(const ::org::apache::lucene::store::IndexInput &) const;
            ::org::apache::lucene::codecs::BlockTermState newTermState() const;
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
        namespace lucene41 {
          extern PyTypeObject PY_TYPE(Lucene41PostingsReader);

          class t_Lucene41PostingsReader {
          public:
            PyObject_HEAD
            Lucene41PostingsReader object;
            static PyObject *wrap_Object(const Lucene41PostingsReader&);
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
