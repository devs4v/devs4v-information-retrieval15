#ifndef org_apache_lucene_codecs_DocValuesFormat_H
#define org_apache_lucene_codecs_DocValuesFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
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
    class ClassLoader;
    class Class;
    class String;
  }
  namespace util {
    class Set;
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

        class DocValuesFormat : public ::java::lang::Object {
        public:
          enum {
            mid_availableDocValuesFormats_03e99967,
            mid_fieldsConsumer_025deb44,
            mid_fieldsProducer_9b0d4e4a,
            mid_forName_36ef78ba,
            mid_getName_14c7b5c5,
            mid_reloadDocValuesFormats_9110048d,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocValuesFormat(const DocValuesFormat& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableDocValuesFormats();
          ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static DocValuesFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadDocValuesFormats(const ::java::lang::ClassLoader &);
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(DocValuesFormat);

        class t_DocValuesFormat {
        public:
          PyObject_HEAD
          DocValuesFormat object;
          static PyObject *wrap_Object(const DocValuesFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
