#ifndef org_apache_lucene_analysis_CharFilter_H
#define org_apache_lucene_analysis_CharFilter_H

#include "java/io/Reader.h"

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
      namespace analysis {

        class CharFilter : public ::java::io::Reader {
        public:
          enum {
            mid_init$_cf2e3c10,
            mid_close_54c6a166,
            mid_correctOffset_39c7bd23,
            mid_correct_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharFilter(jobject obj) : ::java::io::Reader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CharFilter(const CharFilter& obj) : ::java::io::Reader(obj) {}

          CharFilter(const ::java::io::Reader &);

          void close() const;
          jint correctOffset(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(CharFilter);

        class t_CharFilter {
        public:
          PyObject_HEAD
          CharFilter object;
          static PyObject *wrap_Object(const CharFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
