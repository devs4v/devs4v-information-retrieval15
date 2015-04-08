#ifndef org_apache_lucene_codecs_lucene41_Lucene41Codec_H
#define org_apache_lucene_codecs_lucene41_Lucene41Codec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene41 {

          class Lucene41Codec : public ::org::apache::lucene::codecs::Codec {
          public:
            enum {
              mid_init$_54c6a166,
              mid_docValuesFormat_9a259760,
              mid_fieldInfosFormat_82160220,
              mid_getPostingsFormatForField_19d2f1c6,
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

            explicit Lucene41Codec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41Codec(const Lucene41Codec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene41Codec();

            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            ::org::apache::lucene::codecs::PostingsFormat getPostingsFormatForField(const ::java::lang::String &) const;
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
        namespace lucene41 {
          extern PyTypeObject PY_TYPE(Lucene41Codec);

          class t_Lucene41Codec {
          public:
            PyObject_HEAD
            Lucene41Codec object;
            static PyObject *wrap_Object(const Lucene41Codec&);
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
