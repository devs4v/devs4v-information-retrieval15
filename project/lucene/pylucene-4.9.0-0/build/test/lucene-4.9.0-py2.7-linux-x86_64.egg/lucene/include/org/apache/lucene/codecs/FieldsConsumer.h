#ifndef org_apache_lucene_codecs_FieldsConsumer_H
#define org_apache_lucene_codecs_FieldsConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class MergeState;
        class Fields;
      }
      namespace codecs {
        class TermsConsumer;
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
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class FieldsConsumer : public ::java::lang::Object {
        public:
          enum {
            mid_addField_eb6fab90,
            mid_close_54c6a166,
            mid_merge_f282c82a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldsConsumer(const FieldsConsumer& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::TermsConsumer addField(const ::org::apache::lucene::index::FieldInfo &) const;
          void close() const;
          void merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::index::Fields &) const;
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
        extern PyTypeObject PY_TYPE(FieldsConsumer);

        class t_FieldsConsumer {
        public:
          PyObject_HEAD
          FieldsConsumer object;
          static PyObject *wrap_Object(const FieldsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
