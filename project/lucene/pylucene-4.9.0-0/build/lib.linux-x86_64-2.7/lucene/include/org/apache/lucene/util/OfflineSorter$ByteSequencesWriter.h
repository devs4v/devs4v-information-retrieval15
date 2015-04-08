#ifndef org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H
#define org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
    class DataOutput;
    class File;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter$ByteSequencesWriter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_c3dacf57,
            mid_init$_cfb051e6,
            mid_close_54c6a166,
            mid_write_7bc03dc4,
            mid_write_49b4f12b,
            mid_write_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$ByteSequencesWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$ByteSequencesWriter(const OfflineSorter$ByteSequencesWriter& obj) : ::java::lang::Object(obj) {}

          OfflineSorter$ByteSequencesWriter(const ::java::io::File &);
          OfflineSorter$ByteSequencesWriter(const ::java::io::DataOutput &);

          void close() const;
          void write(const ::org::apache::lucene::util::BytesRef &) const;
          void write(const JArray< jbyte > &) const;
          void write(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(OfflineSorter$ByteSequencesWriter);

        class t_OfflineSorter$ByteSequencesWriter {
        public:
          PyObject_HEAD
          OfflineSorter$ByteSequencesWriter object;
          static PyObject *wrap_Object(const OfflineSorter$ByteSequencesWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
