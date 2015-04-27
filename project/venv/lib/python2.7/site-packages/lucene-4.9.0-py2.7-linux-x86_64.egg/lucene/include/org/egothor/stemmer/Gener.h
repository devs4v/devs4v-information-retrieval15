#ifndef org_egothor_stemmer_Gener_H
#define org_egothor_stemmer_Gener_H

#include "org/egothor/stemmer/Reduce.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
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
  namespace egothor {
    namespace stemmer {

      class Gener : public ::org::egothor::stemmer::Reduce {
      public:
        enum {
          mid_init$_54c6a166,
          mid_eat_9f3e69e2,
          mid_optimize_c26c0475,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Gener(jobject obj) : ::org::egothor::stemmer::Reduce(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Gener(const Gener& obj) : ::org::egothor::stemmer::Reduce(obj) {}

        Gener();

        jboolean eat(const ::org::egothor::stemmer::Row &, const JArray< jint > &) const;
        ::org::egothor::stemmer::Trie optimize(const ::org::egothor::stemmer::Trie &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(Gener);

      class t_Gener {
      public:
        PyObject_HEAD
        Gener object;
        static PyObject *wrap_Object(const Gener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
