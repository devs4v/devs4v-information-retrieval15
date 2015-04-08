#ifndef org_apache_lucene_codecs_PostingsBaseFormat_H
#define org_apache_lucene_codecs_PostingsBaseFormat_H

#include "java/lang/Object.h"

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

        class PostingsBaseFormat : public ::java::lang::Object {
        public:
          enum {
            mid_postingsReaderBase_927fb3f2,
            mid_postingsWriterBase_c1fe85c2,
            max_mid
          };

          enum {
            fid_name,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsBaseFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PostingsBaseFormat(const PostingsBaseFormat& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_name() const;

          ::org::apache::lucene::codecs::PostingsReaderBase postingsReaderBase(const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::PostingsWriterBase postingsWriterBase(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
        extern PyTypeObject PY_TYPE(PostingsBaseFormat);

        class t_PostingsBaseFormat {
        public:
          PyObject_HEAD
          PostingsBaseFormat object;
          static PyObject *wrap_Object(const PostingsBaseFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
