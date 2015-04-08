#ifndef org_apache_lucene_search_SortField$Type_H
#define org_apache_lucene_search_SortField$Type_H

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
      namespace search {

        class SortField$Type : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_3d40a53b,
            mid_values_05ae94bd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField$Type(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortField$Type(const SortField$Type& obj) : ::java::lang::Enum(obj) {}

          static SortField$Type *BYTE;
          static SortField$Type *BYTES;
          static SortField$Type *CUSTOM;
          static SortField$Type *DOC;
          static SortField$Type *DOUBLE;
          static SortField$Type *FLOAT;
          static SortField$Type *INT;
          static SortField$Type *LONG;
          static SortField$Type *REWRITEABLE;
          static SortField$Type *SCORE;
          static SortField$Type *SHORT;
          static SortField$Type *STRING;
          static SortField$Type *STRING_VAL;

          static SortField$Type valueOf(const ::java::lang::String &);
          static JArray< SortField$Type > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(SortField$Type);

        class t_SortField$Type {
        public:
          PyObject_HEAD
          SortField$Type object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SortField$Type *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SortField$Type&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SortField$Type&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
