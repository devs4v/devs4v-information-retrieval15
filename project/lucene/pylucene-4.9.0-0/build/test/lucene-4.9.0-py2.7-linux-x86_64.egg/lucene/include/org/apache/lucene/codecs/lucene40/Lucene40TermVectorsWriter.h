#ifndef org_apache_lucene_codecs_lucene40_Lucene40TermVectorsWriter_H
#define org_apache_lucene_codecs_lucene40_Lucene40TermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
        class MergeState;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IOContext;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
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

          class Lucene40TermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
          public:
            enum {
              mid_init$_1962ccd4,
              mid_abort_54c6a166,
              mid_addPosition_ffd34a92,
              mid_addProx_395d0aa2,
              mid_close_54c6a166,
              mid_finish_48f050c2,
              mid_finishDocument_54c6a166,
              mid_finishTerm_54c6a166,
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

            explicit Lucene40TermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40TermVectorsWriter(const Lucene40TermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

            Lucene40TermVectorsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void abort() const;
            void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void finishDocument() const;
            void finishTerm() const;
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
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40TermVectorsWriter);

          class t_Lucene40TermVectorsWriter {
          public:
            PyObject_HEAD
            Lucene40TermVectorsWriter object;
            static PyObject *wrap_Object(const Lucene40TermVectorsWriter&);
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
