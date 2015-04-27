#ifndef org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoFormat_H
#define org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoFormat_H

#include "org/apache/lucene/codecs/SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
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
        namespace lucene40 {

          class Lucene40SegmentInfoFormat : public ::org::apache::lucene::codecs::SegmentInfoFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getSegmentInfoReader_1e88b6e7,
              mid_getSegmentInfoWriter_2d4ab533,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40SegmentInfoFormat(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40SegmentInfoFormat(const Lucene40SegmentInfoFormat& obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {}

            static ::java::lang::String *SI_EXTENSION;

            Lucene40SegmentInfoFormat();

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
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40SegmentInfoFormat);

          class t_Lucene40SegmentInfoFormat {
          public:
            PyObject_HEAD
            Lucene40SegmentInfoFormat object;
            static PyObject *wrap_Object(const Lucene40SegmentInfoFormat&);
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
