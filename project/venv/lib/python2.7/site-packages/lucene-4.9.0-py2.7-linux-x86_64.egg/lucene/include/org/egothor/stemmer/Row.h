#ifndef org_egothor_stemmer_Row_H
#define org_egothor_stemmer_Row_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Character;
    class Class;
  }
  namespace io {
    class IOException;
    class DataOutput;
    class PrintStream;
    class DataInput;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Row : public ::java::lang::Object {
      public:
        enum {
          mid_init$_54c6a166,
          mid_init$_e051d6a6,
          mid_getCells_54c6a179,
          mid_getCellsPnt_54c6a179,
          mid_getCellsVal_54c6a179,
          mid_getCmd_35927258,
          mid_getCnt_35927258,
          mid_getRef_35927258,
          mid_print_1b7c898b,
          mid_setCmd_d2bbdccf,
          mid_setRef_d2bbdccf,
          mid_store_cfb051e6,
          mid_uniformCmd_bb0c7660,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Row(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Row(const Row& obj) : ::java::lang::Object(obj) {}

        Row();
        Row(const ::java::io::DataInput &);

        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        jint getCmd(const ::java::lang::Character &) const;
        jint getCnt(const ::java::lang::Character &) const;
        jint getRef(const ::java::lang::Character &) const;
        void print(const ::java::io::PrintStream &) const;
        void setCmd(const ::java::lang::Character &, jint) const;
        void setRef(const ::java::lang::Character &, jint) const;
        void store(const ::java::io::DataOutput &) const;
        jint uniformCmd(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(Row);

      class t_Row {
      public:
        PyObject_HEAD
        Row object;
        static PyObject *wrap_Object(const Row&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
