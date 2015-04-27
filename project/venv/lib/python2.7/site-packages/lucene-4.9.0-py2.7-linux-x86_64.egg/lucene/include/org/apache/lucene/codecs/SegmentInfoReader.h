#ifndef org_apache_lucene_codecs_SegmentInfoReader_H
#define org_apache_lucene_codecs_SegmentInfoReader_H

#include "java/lang/Object.h"

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

        class SegmentInfoReader : public ::java::lang::Object {
        public:
          enum {
            mid_read_ff05cda4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfoReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentInfoReader(const SegmentInfoReader& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyTypeObject PY_TYPE(SegmentInfoReader);

        class t_SegmentInfoReader {
        public:
          PyObject_HEAD
          SegmentInfoReader object;
          static PyObject *wrap_Object(const SegmentInfoReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
