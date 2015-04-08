#ifndef org_apache_lucene_codecs_TermVectorsWriter_H
#define org_apache_lucene_codecs_TermVectorsWriter_H

#include "java/lang/Object.h"

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

        class TermVectorsWriter : public ::java::lang::Object {
        public:
          enum {
            mid_abort_54c6a166,
            mid_addPosition_ffd34a92,
            mid_addProx_395d0aa2,
            mid_close_54c6a166,
            mid_finish_48f050c2,
            mid_finishDocument_54c6a166,
            mid_finishField_54c6a166,
            mid_finishTerm_54c6a166,
            mid_getComparator_5a7ff2fc,
            mid_merge_fd0cfdeb,
            mid_startDocument_39c7bd3c,
            mid_startField_07c4def5,
            mid_startTerm_738fc2ce,
            mid_addAllDocVectors_7f6315b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermVectorsWriter(const TermVectorsWriter& obj) : ::java::lang::Object(obj) {}

          void abort() const;
          void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
          void close() const;
          void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
          void finishDocument() const;
          void finishField() const;
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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(TermVectorsWriter);

        class t_TermVectorsWriter {
        public:
          PyObject_HEAD
          TermVectorsWriter object;
          static PyObject *wrap_Object(const TermVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
