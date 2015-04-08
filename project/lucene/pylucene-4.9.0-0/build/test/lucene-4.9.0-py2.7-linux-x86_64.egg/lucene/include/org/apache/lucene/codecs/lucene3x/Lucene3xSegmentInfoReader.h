#ifndef org_apache_lucene_codecs_lucene3x_Lucene3xSegmentInfoReader_H
#define org_apache_lucene_codecs_lucene3x_Lucene3xSegmentInfoReader_H

#include "org/apache/lucene/codecs/SegmentInfoReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class SegmentInfos;
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
        namespace lucene3x {

          class Lucene3xSegmentInfoReader : public ::org::apache::lucene::codecs::SegmentInfoReader {
          public:
            enum {
              mid_init$_54c6a166,
              mid_read_ff05cda4,
              mid_readLegacyInfos_1ebc3dab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene3xSegmentInfoReader(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene3xSegmentInfoReader(const Lucene3xSegmentInfoReader& obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {}

            Lucene3xSegmentInfoReader();

            ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            static void readLegacyInfos(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::IndexInput &, jint);
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
        namespace lucene3x {
          extern PyTypeObject PY_TYPE(Lucene3xSegmentInfoReader);

          class t_Lucene3xSegmentInfoReader {
          public:
            PyObject_HEAD
            Lucene3xSegmentInfoReader object;
            static PyObject *wrap_Object(const Lucene3xSegmentInfoReader&);
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
