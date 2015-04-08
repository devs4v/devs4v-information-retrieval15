#ifndef org_apache_lucene_codecs_lucene46_Lucene46SegmentInfoReader_H
#define org_apache_lucene_codecs_lucene46_Lucene46SegmentInfoReader_H

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
        namespace lucene46 {

          class Lucene46SegmentInfoReader : public ::org::apache::lucene::codecs::SegmentInfoReader {
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

            explicit Lucene46SegmentInfoReader(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene46SegmentInfoReader(const Lucene46SegmentInfoReader& obj) : ::org::apache::lucene::codecs::SegmentInfoReader(obj) {}

            Lucene46SegmentInfoReader();

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
        namespace lucene46 {
          extern PyTypeObject PY_TYPE(Lucene46SegmentInfoReader);

          class t_Lucene46SegmentInfoReader {
          public:
            PyObject_HEAD
            Lucene46SegmentInfoReader object;
            static PyObject *wrap_Object(const Lucene46SegmentInfoReader&);
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
