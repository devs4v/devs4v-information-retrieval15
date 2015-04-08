#ifndef org_apache_lucene_codecs_lucene3x_Lucene3xCodec_H
#define org_apache_lucene_codecs_lucene3x_Lucene3xCodec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
      }
      namespace codecs {
        class DocValuesFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
        class NormsFormat;
        class TermVectorsFormat;
        class LiveDocsFormat;
        class FieldInfosFormat;
        class PostingsFormat;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene3x {

          class Lucene3xCodec : public ::org::apache::lucene::codecs::Codec {
          public:
            enum {
              mid_init$_54c6a166,
              mid_docValuesFormat_9a259760,
              mid_fieldInfosFormat_82160220,
              mid_getDocStoreFiles_e7e0a956,
              mid_liveDocsFormat_fcc69d9a,
              mid_normsFormat_03b89e43,
              mid_postingsFormat_d12d16c8,
              mid_segmentInfoFormat_c24d8633,
              mid_storedFieldsFormat_2b977101,
              mid_termVectorsFormat_bcd1d8b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene3xCodec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene3xCodec(const Lucene3xCodec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene3xCodec();

            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            static ::java::util::Set getDocStoreFiles(const ::org::apache::lucene::index::SegmentInfo &);
            ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
            ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
            ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
            ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
            ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
            ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
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
          extern PyTypeObject PY_TYPE(Lucene3xCodec);

          class t_Lucene3xCodec {
          public:
            PyObject_HEAD
            Lucene3xCodec object;
            static PyObject *wrap_Object(const Lucene3xCodec&);
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
