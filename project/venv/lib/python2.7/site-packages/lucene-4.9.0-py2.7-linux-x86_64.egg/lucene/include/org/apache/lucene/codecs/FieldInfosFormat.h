#ifndef org_apache_lucene_codecs_FieldInfosFormat_H
#define org_apache_lucene_codecs_FieldInfosFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldInfosWriter;
        class FieldInfosReader;
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

        class FieldInfosFormat : public ::java::lang::Object {
        public:
          enum {
            mid_getFieldInfosReader_6ecd5494,
            mid_getFieldInfosWriter_211ffa60,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfosFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInfosFormat(const FieldInfosFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::FieldInfosReader getFieldInfosReader() const;
          ::org::apache::lucene::codecs::FieldInfosWriter getFieldInfosWriter() const;
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
        extern PyTypeObject PY_TYPE(FieldInfosFormat);

        class t_FieldInfosFormat {
        public:
          PyObject_HEAD
          FieldInfosFormat object;
          static PyObject *wrap_Object(const FieldInfosFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
