#ifndef org_apache_lucene_codecs_StoredFieldsFormat_H
#define org_apache_lucene_codecs_StoredFieldsFormat_H

#include "java/lang/Object.h"

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
      namespace codecs {
        class StoredFieldsReader;
        class StoredFieldsWriter;
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

        class StoredFieldsFormat : public ::java::lang::Object {
        public:
          enum {
            mid_fieldsReader_bbe26ec4,
            mid_fieldsWriter_c73cceda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsFormat(const StoredFieldsFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyTypeObject PY_TYPE(StoredFieldsFormat);

        class t_StoredFieldsFormat {
        public:
          PyObject_HEAD
          StoredFieldsFormat object;
          static PyObject *wrap_Object(const StoredFieldsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
