#ifndef org_apache_lucene_analysis_charfilter_NormalizeCharMap_H
#define org_apache_lucene_analysis_charfilter_NormalizeCharMap_H

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
      namespace analysis {
        namespace charfilter {

          class NormalizeCharMap : public ::java::lang::Object {
          public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizeCharMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NormalizeCharMap(const NormalizeCharMap& obj) : ::java::lang::Object(obj) {}
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
      namespace analysis {
        namespace charfilter {
          extern PyTypeObject PY_TYPE(NormalizeCharMap);

          class t_NormalizeCharMap {
          public:
            PyObject_HEAD
            NormalizeCharMap object;
            static PyObject *wrap_Object(const NormalizeCharMap&);
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
