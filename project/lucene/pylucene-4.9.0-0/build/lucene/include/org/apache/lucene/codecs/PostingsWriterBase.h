#ifndef org_apache_lucene_codecs_PostingsWriterBase_H
#define org_apache_lucene_codecs_PostingsWriterBase_H

#include "org/apache/lucene/codecs/PostingsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
      }
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace codecs {
        class BlockTermState;
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

        class PostingsWriterBase : public ::org::apache::lucene::codecs::PostingsConsumer {
        public:
          enum {
            mid_close_54c6a166,
            mid_encodeTerm_1ec2f80c,
            mid_finishTerm_47bdc871,
            mid_init_faad620a,
            mid_newTermState_9f93879c,
            mid_setField_5f0ccd17,
            mid_startTerm_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsWriterBase(jobject obj) : ::org::apache::lucene::codecs::PostingsConsumer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PostingsWriterBase(const PostingsWriterBase& obj) : ::org::apache::lucene::codecs::PostingsConsumer(obj) {}

          void close() const;
          void encodeTerm(const JArray< jlong > &, const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
          void init(const ::org::apache::lucene::store::IndexOutput &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          jint setField(const ::org::apache::lucene::index::FieldInfo &) const;
          void startTerm() const;
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
        extern PyTypeObject PY_TYPE(PostingsWriterBase);

        class t_PostingsWriterBase {
        public:
          PyObject_HEAD
          PostingsWriterBase object;
          static PyObject *wrap_Object(const PostingsWriterBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
