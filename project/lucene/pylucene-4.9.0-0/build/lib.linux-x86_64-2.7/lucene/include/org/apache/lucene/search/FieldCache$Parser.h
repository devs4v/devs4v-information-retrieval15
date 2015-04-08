#ifndef org_apache_lucene_search_FieldCache$Parser_H
#define org_apache_lucene_search_FieldCache$Parser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class TermsEnum;
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
      namespace search {

        class FieldCache$Parser : public ::java::lang::Object {
        public:
          enum {
            mid_termsEnum_fb3ac14e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCache$Parser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCache$Parser(const FieldCache$Parser& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::TermsEnum termsEnum(const ::org::apache::lucene::index::Terms &) const;
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
        extern PyTypeObject PY_TYPE(FieldCache$Parser);

        class t_FieldCache$Parser {
        public:
          PyObject_HEAD
          FieldCache$Parser object;
          static PyObject *wrap_Object(const FieldCache$Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
