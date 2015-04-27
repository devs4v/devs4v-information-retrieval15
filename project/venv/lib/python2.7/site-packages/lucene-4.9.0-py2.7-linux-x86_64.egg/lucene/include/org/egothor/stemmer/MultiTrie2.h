#ifndef org_egothor_stemmer_MultiTrie2_H
#define org_egothor_stemmer_MultiTrie2_H

#include "org/egothor/stemmer/MultiTrie.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Reduce;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class DataOutput;
    class DataInput;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie2 : public ::org::egothor::stemmer::MultiTrie {
      public:
        enum {
          mid_init$_e051d6a6,
          mid_init$_bb0c767f,
          mid_add_db1d05ae,
          mid_decompose_2fa560b3,
          mid_getFully_856f5013,
          mid_getLastOnPath_856f5013,
          mid_reduce_6ee87cd1,
          mid_store_cfb051e6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie2(jobject obj) : ::org::egothor::stemmer::MultiTrie(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        MultiTrie2(const MultiTrie2& obj) : ::org::egothor::stemmer::MultiTrie(obj) {}

        MultiTrie2(const ::java::io::DataInput &);
        MultiTrie2(jboolean);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::CharSequence > decompose(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        ::org::egothor::stemmer::Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(MultiTrie2);

      class t_MultiTrie2 {
      public:
        PyObject_HEAD
        MultiTrie2 object;
        static PyObject *wrap_Object(const MultiTrie2&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
