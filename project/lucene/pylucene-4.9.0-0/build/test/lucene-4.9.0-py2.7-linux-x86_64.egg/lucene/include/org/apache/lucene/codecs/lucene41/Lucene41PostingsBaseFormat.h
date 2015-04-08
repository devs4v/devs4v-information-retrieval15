#ifndef org_apache_lucene_codecs_lucene41_Lucene41PostingsBaseFormat_H
#define org_apache_lucene_codecs_lucene41_Lucene41PostingsBaseFormat_H

#include "org/apache/lucene/codecs/PostingsBaseFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class PostingsWriterBase;
        class PostingsReaderBase;
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
        namespace lucene41 {

          class Lucene41PostingsBaseFormat : public ::org::apache::lucene::codecs::PostingsBaseFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_postingsReaderBase_927fb3f2,
              mid_postingsWriterBase_c1fe85c2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene41PostingsBaseFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsBaseFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene41PostingsBaseFormat(const Lucene41PostingsBaseFormat& obj) : ::org::apache::lucene::codecs::PostingsBaseFormat(obj) {}

            Lucene41PostingsBaseFormat();

            ::org::apache::lucene::codecs::PostingsReaderBase postingsReaderBase(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::PostingsWriterBase postingsWriterBase(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
          extern PyTypeObject PY_TYPE(Lucene41PostingsBaseFormat);

          class t_Lucene41PostingsBaseFormat {
          public:
            PyObject_HEAD
            Lucene41PostingsBaseFormat object;
            static PyObject *wrap_Object(const Lucene41PostingsBaseFormat&);
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
