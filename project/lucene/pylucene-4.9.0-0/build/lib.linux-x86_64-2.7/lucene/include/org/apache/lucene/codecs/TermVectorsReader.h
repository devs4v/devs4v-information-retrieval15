#ifndef org_apache_lucene_codecs_TermVectorsReader_H
#define org_apache_lucene_codecs_TermVectorsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class Fields;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
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

        class TermVectorsReader : public ::java::lang::Object {
        public:
          enum {
            mid_checkIntegrity_54c6a166,
            mid_clone_475a2624,
            mid_get_ef1c9c73,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermVectorsReader(const TermVectorsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          TermVectorsReader clone() const;
          ::org::apache::lucene::index::Fields get(jint) const;
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
        extern PyTypeObject PY_TYPE(TermVectorsReader);

        class t_TermVectorsReader {
        public:
          PyObject_HEAD
          TermVectorsReader object;
          static PyObject *wrap_Object(const TermVectorsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
