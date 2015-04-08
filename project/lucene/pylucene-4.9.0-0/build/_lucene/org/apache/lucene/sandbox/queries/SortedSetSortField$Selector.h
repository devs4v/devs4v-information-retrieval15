#ifndef org_apache_lucene_sandbox_queries_SortedSetSortField$Selector_H
#define org_apache_lucene_sandbox_queries_SortedSetSortField$Selector_H

#include "java/lang/Enum.h"

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
      namespace sandbox {
        namespace queries {

          class SortedSetSortField$Selector : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_1826b9b5,
              mid_values_ab359d3f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetSortField$Selector(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetSortField$Selector(const SortedSetSortField$Selector& obj) : ::java::lang::Enum(obj) {}

            static SortedSetSortField$Selector *MAX;
            static SortedSetSortField$Selector *MIDDLE_MAX;
            static SortedSetSortField$Selector *MIDDLE_MIN;
            static SortedSetSortField$Selector *MIN;

            static SortedSetSortField$Selector valueOf(const ::java::lang::String &);
            static JArray< SortedSetSortField$Selector > values();
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(SortedSetSortField$Selector);

          class t_SortedSetSortField$Selector {
          public:
            PyObject_HEAD
            SortedSetSortField$Selector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SortedSetSortField$Selector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SortedSetSortField$Selector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SortedSetSortField$Selector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
