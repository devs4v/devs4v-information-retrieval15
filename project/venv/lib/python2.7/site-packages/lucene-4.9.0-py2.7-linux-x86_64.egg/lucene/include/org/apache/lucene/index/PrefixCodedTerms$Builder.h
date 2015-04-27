#ifndef org_apache_lucene_index_PrefixCodedTerms$Builder_H
#define org_apache_lucene_index_PrefixCodedTerms$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
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
      namespace index {

        class PrefixCodedTerms$Builder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_7eca6a81,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms$Builder(const PrefixCodedTerms$Builder& obj) : ::java::lang::Object(obj) {}

          PrefixCodedTerms$Builder();

          void add(const ::org::apache::lucene::index::Term &) const;
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
        extern PyTypeObject PY_TYPE(PrefixCodedTerms$Builder);

        class t_PrefixCodedTerms$Builder {
        public:
          PyObject_HEAD
          PrefixCodedTerms$Builder object;
          static PyObject *wrap_Object(const PrefixCodedTerms$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
