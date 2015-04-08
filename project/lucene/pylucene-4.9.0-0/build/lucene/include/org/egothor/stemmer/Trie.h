#ifndef org_egothor_stemmer_Trie_H
#define org_egothor_stemmer_Trie_H

#include "java/lang/Object.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
      class Row;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

      class Trie : public ::java::lang::Object {
      public:
        enum {
          mid_init$_e051d6a6,
          mid_init$_bb0c767f,
          mid_init$_ed85fe83,
          mid_getAll_2fa560b3,
          mid_getCells_54c6a179,
          mid_getCellsPnt_54c6a179,
          mid_getCellsVal_54c6a179,
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

        explicit Trie(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Trie(const Trie& obj) : ::java::lang::Object(obj) {}

        Trie(const ::java::io::DataInput &);
        Trie(jboolean);
        Trie(jboolean, jint, const ::java::util::List &, const ::java::util::List &);

        JArray< ::java::lang::CharSequence > getAll(const ::java::lang::CharSequence &) const;
        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(Trie);

      class t_Trie {
      public:
        PyObject_HEAD
        Trie object;
        static PyObject *wrap_Object(const Trie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
