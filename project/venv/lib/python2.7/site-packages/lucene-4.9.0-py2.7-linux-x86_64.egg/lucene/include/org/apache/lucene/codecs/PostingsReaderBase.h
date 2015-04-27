#ifndef org_apache_lucene_codecs_PostingsReaderBase_H
#define org_apache_lucene_codecs_PostingsReaderBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace index {
        class FieldInfo;
        class DocsEnum;
        class DocsAndPositionsEnum;
      }
      namespace store {
        class IndexInput;
        class DataInput;
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

        class PostingsReaderBase : public ::java::lang::Object {
        public:
          enum {
            mid_checkIntegrity_54c6a166,
            mid_close_54c6a166,
            mid_decodeTerm_0d1f34e8,
            mid_docs_4cca8a9c,
            mid_docsAndPositions_3ae1ca58,
            mid_init_0441f0b2,
            mid_newTermState_9f93879c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsReaderBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PostingsReaderBase(const PostingsReaderBase& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          void close() const;
          void decodeTerm(const JArray< jlong > &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
          void init(const ::org::apache::lucene::store::IndexInput &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
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
        extern PyTypeObject PY_TYPE(PostingsReaderBase);

        class t_PostingsReaderBase {
        public:
          PyObject_HEAD
          PostingsReaderBase object;
          static PyObject *wrap_Object(const PostingsReaderBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
