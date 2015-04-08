#ifndef org_apache_lucene_codecs_Codec_H
#define org_apache_lucene_codecs_Codec_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NamedSPILoader$NamedSPI;
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
  namespace util {
    class Set;
  }
  namespace lang {
    class ClassLoader;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class Codec : public ::java::lang::Object {
        public:
          enum {
            mid_availableCodecs_03e99967,
            mid_docValuesFormat_9a259760,
            mid_fieldInfosFormat_82160220,
            mid_forName_e21a4685,
            mid_getDefault_27f0a02b,
            mid_getName_14c7b5c5,
            mid_liveDocsFormat_fcc69d9a,
            mid_normsFormat_03b89e43,
            mid_postingsFormat_d12d16c8,
            mid_reloadCodecs_9110048d,
            mid_segmentInfoFormat_c24d8633,
            mid_setDefault_848f310e,
            mid_storedFieldsFormat_2b977101,
            mid_termVectorsFormat_bcd1d8b8,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Codec(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Codec(const Codec& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableCodecs();
          ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
          ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
          static Codec forName(const ::java::lang::String &);
          static Codec getDefault();
          ::java::lang::String getName() const;
          ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
          ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
          ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
          static void reloadCodecs(const ::java::lang::ClassLoader &);
          ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
          static void setDefault(const Codec &);
          ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
          ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(Codec);

        class t_Codec {
        public:
          PyObject_HEAD
          Codec object;
          static PyObject *wrap_Object(const Codec&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
