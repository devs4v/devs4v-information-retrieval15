#ifndef org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoReader_H
#define org_apache_lucene_codecs_lucene40_Lucene40SegmentInfoReader_H

#include "org/apache/lucene/codecs/SegmentInfoReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
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
        namespace lucene40 {

          class Lucene40SegmentInfoReader : public ::org::apache::lucene::codecs::SegmentInfoReader {
          public:
            enum {
              mid_init$_54c6a166,
              mid_read_ff05cda4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40SegmentInfoReader(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40SegmentInfoReader(const Lucene40SegmentInfoReader& obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {}

            Lucene40SegmentInfoReader();

            ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyTypeObject PY_TYPE(Lucene40SegmentInfoReader);

          class t_Lucene40SegmentInfoReader {
          public:
            PyObject_HEAD
            Lucene40SegmentInfoReader object;
            static PyObject *wrap_Object(const Lucene40SegmentInfoReader&);
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
