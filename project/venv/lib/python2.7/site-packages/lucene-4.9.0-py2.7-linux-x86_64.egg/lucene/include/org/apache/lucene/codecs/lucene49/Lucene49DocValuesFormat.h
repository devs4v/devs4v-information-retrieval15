#ifndef org_apache_lucene_codecs_lucene49_Lucene49DocValuesFormat_H
#define org_apache_lucene_codecs_lucene49_Lucene49DocValuesFormat_H

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
        namespace lucene49 {

          class Lucene49DocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_fieldsConsumer_025deb44,
              mid_fieldsProducer_9b0d4e4a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene49DocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene49DocValuesFormat(const Lucene49DocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            Lucene49DocValuesFormat();

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace lucene49 {
          extern PyTypeObject PY_TYPE(Lucene49DocValuesFormat);

          class t_Lucene49DocValuesFormat {
          public:
            PyObject_HEAD
            Lucene49DocValuesFormat object;
            static PyObject *wrap_Object(const Lucene49DocValuesFormat&);
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
