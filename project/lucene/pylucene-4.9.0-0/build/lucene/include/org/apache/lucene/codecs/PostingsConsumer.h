#ifndef org_apache_lucene_codecs_PostingsConsumer_H
#define org_apache_lucene_codecs_PostingsConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FixedBitSet;
        class BytesRef;
      }
      namespace index {
        class MergeState;
        class DocsEnum;
        class FieldInfo$IndexOptions;
      }
      namespace codecs {
        class TermStats;
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

        class PostingsConsumer : public ::java::lang::Object {
        public:
          enum {
            mid_addPosition_d481f39e,
            mid_finishDoc_54c6a166,
            mid_merge_3a3a1af6,
            mid_startDoc_d8d154a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PostingsConsumer(const PostingsConsumer& obj) : ::java::lang::Object(obj) {}

          void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
          void finishDoc() const;
          ::org::apache::lucene::codecs::TermStats merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::index::FieldInfo$IndexOptions &, const ::org::apache::lucene::index::DocsEnum &, const ::org::apache::lucene::util::FixedBitSet &) const;
          void startDoc(jint, jint) const;
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
        extern PyTypeObject PY_TYPE(PostingsConsumer);

        class t_PostingsConsumer {
        public:
          PyObject_HEAD
          PostingsConsumer object;
          static PyObject *wrap_Object(const PostingsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
