#ifndef org_apache_lucene_codecs_lucene41_Lucene41PostingsWriter_H
#define org_apache_lucene_codecs_lucene41_Lucene41PostingsWriter_H

#include "org/apache/lucene/codecs/PostingsWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
        class SegmentWriteState;
      }
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace codecs {
        class BlockTermState;
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
        namespace lucene41 {

          class Lucene41PostingsWriter : public ::org::apache::lucene::codecs::PostingsWriterBase {
          public:
            enum {
              mid_init$_3be9bed9,
              mid_init$_a7564e76,
              mid_addPosition_d481f39e,
              mid_close_54c6a166,
              mid_encodeTerm_1ec2f80c,
              mid_finishDoc_54c6a166,
              mid_finishTerm_47bdc871,
              mid_init_faad620a,
              mid_setField_5f0ccd17,
              mid_startDoc_d8d154a6,
              mid_startTerm_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene41PostingsWriter(jobject obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41PostingsWriter(const Lucene41PostingsWriter& obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {}

            Lucene41PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &);
            Lucene41PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &, jfloat);

            void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
            void close() const;
            void encodeTerm(const JArray< jlong > &, const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            void finishDoc() const;
            void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
            void init(const ::org::apache::lucene::store::IndexOutput &) const;
            jint setField(const ::org::apache::lucene::index::FieldInfo &) const;
            void startDoc(jint, jint) const;
            void startTerm() const;
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
          extern PyTypeObject PY_TYPE(Lucene41PostingsWriter);

          class t_Lucene41PostingsWriter {
          public:
            PyObject_HEAD
            Lucene41PostingsWriter object;
            static PyObject *wrap_Object(const Lucene41PostingsWriter&);
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
