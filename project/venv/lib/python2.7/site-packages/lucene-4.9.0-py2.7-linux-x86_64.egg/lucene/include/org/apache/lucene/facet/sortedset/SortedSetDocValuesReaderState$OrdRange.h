#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$OrdRange_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$OrdRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState$OrdRange : public ::java::lang::Object {
          public:
            enum {
              mid_init$_d8d154a6,
              max_mid
            };

            enum {
              fid_end,
              fid_start,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState$OrdRange(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState$OrdRange(const SortedSetDocValuesReaderState$OrdRange& obj) : ::java::lang::Object(obj) {}

            jint _get_end() const;
            jint _get_start() const;

            SortedSetDocValuesReaderState$OrdRange(jint, jint);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          extern PyTypeObject PY_TYPE(SortedSetDocValuesReaderState$OrdRange);

          class t_SortedSetDocValuesReaderState$OrdRange {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState$OrdRange object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState$OrdRange&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
