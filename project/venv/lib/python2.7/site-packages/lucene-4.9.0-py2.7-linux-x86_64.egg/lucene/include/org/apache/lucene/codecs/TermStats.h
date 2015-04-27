#ifndef org_apache_lucene_codecs_TermStats_H
#define org_apache_lucene_codecs_TermStats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class TermStats : public ::java::lang::Object {
        public:
          enum {
            mid_init$_03b232b5,
            max_mid
          };

          enum {
            fid_docFreq,
            fid_totalTermFreq,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermStats(const TermStats& obj) : ::java::lang::Object(obj) {}

          jint _get_docFreq() const;
          jlong _get_totalTermFreq() const;

          TermStats(jint, jlong);
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
        extern PyTypeObject PY_TYPE(TermStats);

        class t_TermStats {
        public:
          PyObject_HEAD
          TermStats object;
          static PyObject *wrap_Object(const TermStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
