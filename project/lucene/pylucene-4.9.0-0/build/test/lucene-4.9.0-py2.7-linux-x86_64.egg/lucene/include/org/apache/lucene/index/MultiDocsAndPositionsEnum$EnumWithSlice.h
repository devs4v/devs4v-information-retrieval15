#ifndef org_apache_lucene_index_MultiDocsAndPositionsEnum$EnumWithSlice_H
#define org_apache_lucene_index_MultiDocsAndPositionsEnum$EnumWithSlice_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ReaderSlice;
        class DocsAndPositionsEnum;
      }
    }
  }
}
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

        class MultiDocsAndPositionsEnum$EnumWithSlice : public ::java::lang::Object {
        public:
          enum {
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_docsAndPositionsEnum,
            fid_slice,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocsAndPositionsEnum$EnumWithSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocsAndPositionsEnum$EnumWithSlice(const MultiDocsAndPositionsEnum$EnumWithSlice& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocsAndPositionsEnum _get_docsAndPositionsEnum() const;
          void _set_docsAndPositionsEnum(const ::org::apache::lucene::index::DocsAndPositionsEnum &) const;
          ::org::apache::lucene::index::ReaderSlice _get_slice() const;
          void _set_slice(const ::org::apache::lucene::index::ReaderSlice &) const;

          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(MultiDocsAndPositionsEnum$EnumWithSlice);

        class t_MultiDocsAndPositionsEnum$EnumWithSlice {
        public:
          PyObject_HEAD
          MultiDocsAndPositionsEnum$EnumWithSlice object;
          static PyObject *wrap_Object(const MultiDocsAndPositionsEnum$EnumWithSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
