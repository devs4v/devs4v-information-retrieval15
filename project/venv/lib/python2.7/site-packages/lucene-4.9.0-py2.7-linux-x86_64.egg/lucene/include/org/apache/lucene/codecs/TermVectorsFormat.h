#ifndef org_apache_lucene_codecs_TermVectorsFormat_H
#define org_apache_lucene_codecs_TermVectorsFormat_H

#include "java/lang/Object.h"

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
        class TermVectorsReader;
        class TermVectorsWriter;
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

        class TermVectorsFormat : public ::java::lang::Object {
        public:
          enum {
            mid_vectorsReader_9c23221f,
            mid_vectorsWriter_0c8458c9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermVectorsFormat(const TermVectorsFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyTypeObject PY_TYPE(TermVectorsFormat);

        class t_TermVectorsFormat {
        public:
          PyObject_HEAD
          TermVectorsFormat object;
          static PyObject *wrap_Object(const TermVectorsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
