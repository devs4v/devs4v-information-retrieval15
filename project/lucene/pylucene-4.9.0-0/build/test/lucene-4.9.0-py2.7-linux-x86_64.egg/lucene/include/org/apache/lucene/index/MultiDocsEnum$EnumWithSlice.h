#ifndef org_apache_lucene_index_MultiDocsEnum$EnumWithSlice_H
#define org_apache_lucene_index_MultiDocsEnum$EnumWithSlice_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocsEnum;
        class ReaderSlice;
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

        class MultiDocsEnum$EnumWithSlice : public ::java::lang::Object {
        public:
          enum {
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_docsEnum,
            fid_slice,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocsEnum$EnumWithSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocsEnum$EnumWithSlice(const MultiDocsEnum$EnumWithSlice& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocsEnum _get_docsEnum() const;
          void _set_docsEnum(const ::org::apache::lucene::index::DocsEnum &) const;
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
        extern PyTypeObject PY_TYPE(MultiDocsEnum$EnumWithSlice);

        class t_MultiDocsEnum$EnumWithSlice {
        public:
          PyObject_HEAD
          MultiDocsEnum$EnumWithSlice object;
          static PyObject *wrap_Object(const MultiDocsEnum$EnumWithSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
