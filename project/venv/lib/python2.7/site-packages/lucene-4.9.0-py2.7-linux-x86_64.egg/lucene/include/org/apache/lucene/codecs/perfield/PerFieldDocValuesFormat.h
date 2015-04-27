#ifndef org_apache_lucene_codecs_perfield_PerFieldDocValuesFormat_H
#define org_apache_lucene_codecs_perfield_PerFieldDocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentWriteState;
        class SegmentReadState;
      }
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace perfield {

          class PerFieldDocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_fieldsConsumer_025deb44,
              mid_fieldsProducer_9b0d4e4a,
              mid_getDocValuesFormatForField_36ef78ba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldDocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PerFieldDocValuesFormat(const PerFieldDocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            static ::java::lang::String *PER_FIELD_FORMAT_KEY;
            static ::java::lang::String *PER_FIELD_NAME;
            static ::java::lang::String *PER_FIELD_SUFFIX_KEY;

            PerFieldDocValuesFormat();

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
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
        namespace perfield {
          extern PyTypeObject PY_TYPE(PerFieldDocValuesFormat);

          class t_PerFieldDocValuesFormat {
          public:
            PyObject_HEAD
            PerFieldDocValuesFormat object;
            static PyObject *wrap_Object(const PerFieldDocValuesFormat&);
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
