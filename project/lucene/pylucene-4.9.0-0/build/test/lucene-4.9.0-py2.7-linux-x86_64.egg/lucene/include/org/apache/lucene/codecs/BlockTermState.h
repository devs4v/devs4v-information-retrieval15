#ifndef org_apache_lucene_codecs_BlockTermState_H
#define org_apache_lucene_codecs_BlockTermState_H

#include "org/apache/lucene/index/OrdTermState.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class BlockTermState : public ::org::apache::lucene::index::OrdTermState {
        public:
          enum {
            mid_copyFrom_d506ca07,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_blockFilePointer,
            fid_docFreq,
            fid_termBlockOrd,
            fid_totalTermFreq,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlockTermState(jobject obj) : ::org::apache::lucene::index::OrdTermState(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BlockTermState(const BlockTermState& obj) : ::org::apache::lucene::index::OrdTermState(obj) {}

          jlong _get_blockFilePointer() const;
          void _set_blockFilePointer(jlong) const;
          jint _get_docFreq() const;
          void _set_docFreq(jint) const;
          jint _get_termBlockOrd() const;
          void _set_termBlockOrd(jint) const;
          jlong _get_totalTermFreq() const;
          void _set_totalTermFreq(jlong) const;

          void copyFrom(const ::org::apache::lucene::index::TermState &) const;
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
        extern PyTypeObject PY_TYPE(BlockTermState);

        class t_BlockTermState {
        public:
          PyObject_HEAD
          BlockTermState object;
          static PyObject *wrap_Object(const BlockTermState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
