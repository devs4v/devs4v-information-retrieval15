#ifndef org_egothor_stemmer_MultiTrie_H
#define org_egothor_stemmer_MultiTrie_H

#include "org/egothor/stemmer/Trie.h"

namespace org {
  namespace egothor {
    namespace stemmer {
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
    class DataInput;
    class PrintStream;
    class DataOutput;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie : public ::org::egothor::stemmer::Trie {
      public:
        enum {
          mid_init$_e051d6a6,
          mid_init$_bb0c767f,
          mid_add_db1d05ae,
          mid_getFully_856f5013,
          mid_getLastOnPath_856f5013,
          mid_printInfo_bd6af9ff,
          mid_reduce_6ee87cd1,
          mid_store_cfb051e6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie(jobject obj) : ::org::egothor::stemmer::Trie(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        MultiTrie(const MultiTrie& obj) : ::org::egothor::stemmer::Trie(obj) {}

        MultiTrie(const ::java::io::DataInput &);
        MultiTrie(jboolean);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
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
      extern PyTypeObject PY_TYPE(MultiTrie);

      class t_MultiTrie {
      public:
        PyObject_HEAD
        MultiTrie object;
        static PyObject *wrap_Object(const MultiTrie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
