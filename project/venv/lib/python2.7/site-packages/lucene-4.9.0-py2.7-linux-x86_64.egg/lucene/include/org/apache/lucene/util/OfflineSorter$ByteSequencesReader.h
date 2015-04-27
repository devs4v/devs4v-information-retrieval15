#ifndef org_apache_lucene_util_OfflineSorter$ByteSequencesReader_H
#define org_apache_lucene_util_OfflineSorter$ByteSequencesReader_H

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
    class DataInput;
    class File;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter$ByteSequencesReader : public ::java::lang::Object {
        public:
          enum {
            mid_init$_c3dacf57,
            mid_init$_e051d6a6,
            mid_close_54c6a166,
            mid_read_dab10e7e,
            mid_read_7bc03dc8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$ByteSequencesReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$ByteSequencesReader(const OfflineSorter$ByteSequencesReader& obj) : ::java::lang::Object(obj) {}

          OfflineSorter$ByteSequencesReader(const ::java::io::File &);
          OfflineSorter$ByteSequencesReader(const ::java::io::DataInput &);

          void close() const;
          JArray< jbyte > read() const;
          jboolean read(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(OfflineSorter$ByteSequencesReader);

        class t_OfflineSorter$ByteSequencesReader {
        public:
          PyObject_HEAD
          OfflineSorter$ByteSequencesReader object;
          static PyObject *wrap_Object(const OfflineSorter$ByteSequencesReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
