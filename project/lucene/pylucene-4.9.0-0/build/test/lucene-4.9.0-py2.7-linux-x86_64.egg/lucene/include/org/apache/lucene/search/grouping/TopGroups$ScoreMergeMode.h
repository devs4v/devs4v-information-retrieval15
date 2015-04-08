#ifndef org_apache_lucene_search_grouping_TopGroups$ScoreMergeMode_H
#define org_apache_lucene_search_grouping_TopGroups$ScoreMergeMode_H

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
      namespace search {
        namespace grouping {

          class TopGroups$ScoreMergeMode : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_10e490e6,
              mid_values_88270724,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TopGroups$ScoreMergeMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TopGroups$ScoreMergeMode(const TopGroups$ScoreMergeMode& obj) : ::java::lang::Enum(obj) {}

            static TopGroups$ScoreMergeMode *Avg;
            static TopGroups$ScoreMergeMode *None;
            static TopGroups$ScoreMergeMode *Total;

            static TopGroups$ScoreMergeMode valueOf(const ::java::lang::String &);
            static JArray< TopGroups$ScoreMergeMode > values();
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
      namespace search {
        namespace grouping {
          extern PyTypeObject PY_TYPE(TopGroups$ScoreMergeMode);

          class t_TopGroups$ScoreMergeMode {
          public:
            PyObject_HEAD
            TopGroups$ScoreMergeMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TopGroups$ScoreMergeMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TopGroups$ScoreMergeMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TopGroups$ScoreMergeMode&, PyTypeObject *);
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
