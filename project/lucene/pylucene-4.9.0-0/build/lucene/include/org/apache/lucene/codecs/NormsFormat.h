#ifndef org_apache_lucene_codecs_NormsFormat_H
#define org_apache_lucene_codecs_NormsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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

        class NormsFormat : public ::java::lang::Object {
        public:
          enum {
            mid_normsConsumer_025deb44,
            mid_normsProducer_9b0d4e4a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NormsFormat(const NormsFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::DocValuesConsumer normsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::DocValuesProducer normsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        extern PyTypeObject PY_TYPE(NormsFormat);

        class t_NormsFormat {
        public:
          PyObject_HEAD
          NormsFormat object;
          static PyObject *wrap_Object(const NormsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
