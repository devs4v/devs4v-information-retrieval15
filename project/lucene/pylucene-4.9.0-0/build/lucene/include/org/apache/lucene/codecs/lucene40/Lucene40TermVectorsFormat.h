#ifndef org_apache_lucene_codecs_lucene40_Lucene40TermVectorsFormat_H
#define org_apache_lucene_codecs_lucene40_Lucene40TermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

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
        namespace lucene40 {

          class Lucene40TermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_vectorsReader_9c23221f,
              mid_vectorsWriter_0c8458c9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40TermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40TermVectorsFormat(const Lucene40TermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

            Lucene40TermVectorsFormat();

            ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyTypeObject PY_TYPE(Lucene40TermVectorsFormat);

          class t_Lucene40TermVectorsFormat {
          public:
            PyObject_HEAD
            Lucene40TermVectorsFormat object;
            static PyObject *wrap_Object(const Lucene40TermVectorsFormat&);
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
