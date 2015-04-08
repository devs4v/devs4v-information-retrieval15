#ifndef org_apache_lucene_codecs_lucene3x_Lucene3xSegmentInfoFormat_H
#define org_apache_lucene_codecs_lucene3x_Lucene3xSegmentInfoFormat_H

#include "org/apache/lucene/codecs/SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
      }
      namespace codecs {
        class SegmentInfoWriter;
        class SegmentInfoReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene3x {

          class Lucene3xSegmentInfoFormat : public ::org::apache::lucene::codecs::SegmentInfoFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getDocStoreIsCompoundFile_196ca35f,
              mid_getDocStoreOffset_196ca34c,
              mid_getDocStoreSegment_44869e72,
              mid_getSegmentInfoReader_1e88b6e7,
              mid_getSegmentInfoWriter_2d4ab533,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene3xSegmentInfoFormat(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene3xSegmentInfoFormat(const Lucene3xSegmentInfoFormat& obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {}

            static ::java::lang::String *DS_COMPOUND_KEY;
            static ::java::lang::String *DS_NAME_KEY;
            static ::java::lang::String *DS_OFFSET_KEY;
            static jint FORMAT_3_1;
            static jint FORMAT_DIAGNOSTICS;
            static jint FORMAT_HAS_VECTORS;
            static ::java::lang::String *NORMGEN_KEY;
            static ::java::lang::String *NORMGEN_PREFIX;
            static ::java::lang::String *UPGRADED_SI_CODEC_NAME;
            static ::java::lang::String *UPGRADED_SI_EXTENSION;
            static jint UPGRADED_SI_VERSION_CURRENT;
            static jint UPGRADED_SI_VERSION_START;

            Lucene3xSegmentInfoFormat();

            static jboolean getDocStoreIsCompoundFile(const ::org::apache::lucene::index::SegmentInfo &);
            static jint getDocStoreOffset(const ::org::apache::lucene::index::SegmentInfo &);
            static ::java::lang::String getDocStoreSegment(const ::org::apache::lucene::index::SegmentInfo &);
            ::org::apache::lucene::codecs::SegmentInfoReader getSegmentInfoReader() const;
            ::org::apache::lucene::codecs::SegmentInfoWriter getSegmentInfoWriter() const;
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
          extern PyTypeObject PY_TYPE(Lucene3xSegmentInfoFormat);

          class t_Lucene3xSegmentInfoFormat {
          public:
            PyObject_HEAD
            Lucene3xSegmentInfoFormat object;
            static PyObject *wrap_Object(const Lucene3xSegmentInfoFormat&);
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
