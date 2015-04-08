#ifndef org_apache_lucene_codecs_SegmentInfoFormat_H
#define org_apache_lucene_codecs_SegmentInfoFormat_H

#include "java/lang/Object.h"

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class SegmentInfoFormat : public ::java::lang::Object {
        public:
          enum {
            mid_getSegmentInfoReader_1e88b6e7,
            mid_getSegmentInfoWriter_2d4ab533,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfoFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentInfoFormat(const SegmentInfoFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::SegmentInfoReader getSegmentInfoReader() const;
          ::org::apache::lucene::codecs::SegmentInfoWriter getSegmentInfoWriter() const;
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
        extern PyTypeObject PY_TYPE(SegmentInfoFormat);

        class t_SegmentInfoFormat {
        public:
          PyObject_HEAD
          SegmentInfoFormat object;
          static PyObject *wrap_Object(const SegmentInfoFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
