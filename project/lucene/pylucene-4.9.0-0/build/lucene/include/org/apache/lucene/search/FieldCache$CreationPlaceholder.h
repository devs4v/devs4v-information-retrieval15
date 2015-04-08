#ifndef org_apache_lucene_search_FieldCache$CreationPlaceholder_H
#define org_apache_lucene_search_FieldCache$CreationPlaceholder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldCache$CreationPlaceholder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$CreationPlaceholder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$CreationPlaceholder(const FieldCache$CreationPlaceholder& obj) : ::java::lang::Object(obj) {}

          FieldCache$CreationPlaceholder();

          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(FieldCache$CreationPlaceholder);

        class t_FieldCache$CreationPlaceholder {
        public:
          PyObject_HEAD
          FieldCache$CreationPlaceholder object;
          static PyObject *wrap_Object(const FieldCache$CreationPlaceholder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
