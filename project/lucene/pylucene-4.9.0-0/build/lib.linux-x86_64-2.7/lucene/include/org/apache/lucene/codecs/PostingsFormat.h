#ifndef org_apache_lucene_codecs_PostingsFormat_H
#define org_apache_lucene_codecs_PostingsFormat_H

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
        class FieldsProducer;
        class FieldsConsumer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class ClassLoader;
    class Class;
    class String;
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

        class PostingsFormat : public ::java::lang::Object {
        public:
          enum {
            mid_availablePostingsFormats_03e99967,
            mid_fieldsConsumer_a15793c6,
            mid_fieldsProducer_c86c62bc,
            mid_forName_19d2f1c6,
            mid_getName_14c7b5c5,
            mid_reloadPostingsFormats_9110048d,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PostingsFormat(const PostingsFormat& obj) : ::java::lang::Object(obj) {}

          static JArray< PostingsFormat > *EMPTY;

          static ::java::util::Set availablePostingsFormats();
          ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static PostingsFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadPostingsFormats(const ::java::lang::ClassLoader &);
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
        extern PyTypeObject PY_TYPE(PostingsFormat);

        class t_PostingsFormat {
        public:
          PyObject_HEAD
          PostingsFormat object;
          static PyObject *wrap_Object(const PostingsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
