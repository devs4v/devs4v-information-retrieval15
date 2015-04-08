#ifndef org_apache_lucene_index_TermsEnum$SeekStatus_H
#define org_apache_lucene_index_TermsEnum$SeekStatus_H

#include "java/lang/Enum.h"

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
      namespace index {

        class TermsEnum$SeekStatus : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_e0b0a2bc,
            mid_values_5e8184a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsEnum$SeekStatus(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermsEnum$SeekStatus(const TermsEnum$SeekStatus& obj) : ::java::lang::Enum(obj) {}

          static TermsEnum$SeekStatus *END;
          static TermsEnum$SeekStatus *FOUND;
          static TermsEnum$SeekStatus *NOT_FOUND;

          static TermsEnum$SeekStatus valueOf(const ::java::lang::String &);
          static JArray< TermsEnum$SeekStatus > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(TermsEnum$SeekStatus);

        class t_TermsEnum$SeekStatus {
        public:
          PyObject_HEAD
          TermsEnum$SeekStatus object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TermsEnum$SeekStatus *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TermsEnum$SeekStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TermsEnum$SeekStatus&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
