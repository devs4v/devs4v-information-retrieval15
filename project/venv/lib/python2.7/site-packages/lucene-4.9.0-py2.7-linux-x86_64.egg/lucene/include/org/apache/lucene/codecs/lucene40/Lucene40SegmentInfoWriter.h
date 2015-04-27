#ifndef org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoWriter_H
#define org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoWriter_H

#include "org/apache/lucene/codecs/SegmentInfoWriter.h"

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

          class Lucene40SegmentInfoWriter : public ::org::apache::lucene::codecs::SegmentInfoWriter {
          public:
            enum {
              mid_init$_54c6a166,
              mid_write_3589180f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40SegmentInfoWriter(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40SegmentInfoWriter(const Lucene40SegmentInfoWriter& obj) : ::org::apache::lucene::codecs::SegmentInfoWriter(obj) {}

            Lucene40SegmentInfoWriter();

            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyTypeObject PY_TYPE(Lucene40SegmentInfoWriter);

          class t_Lucene40SegmentInfoWriter {
          public:
            PyObject_HEAD
            Lucene40SegmentInfoWriter object;
            static PyObject *wrap_Object(const Lucene40SegmentInfoWriter&);
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
