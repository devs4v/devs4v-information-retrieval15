#ifndef org_apache_lucene_search_grouping_AbstractDistinctValuesCollector$GroupCount_H
#define org_apache_lucene_search_grouping_AbstractDistinctValuesCollector$GroupCount_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class AbstractDistinctValuesCollector$GroupCount : public ::java::lang::Object {
          public:
            enum {
              mid_init$_290588ee,
              max_mid
            };

            enum {
              fid_groupValue,
              fid_uniqueValues,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractDistinctValuesCollector$GroupCount(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractDistinctValuesCollector$GroupCount(const AbstractDistinctValuesCollector$GroupCount& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_groupValue() const;
            ::java::util::Set _get_uniqueValues() const;

            AbstractDistinctValuesCollector$GroupCount(const ::java::lang::Object &);
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
          extern PyTypeObject PY_TYPE(AbstractDistinctValuesCollector$GroupCount);

          class t_AbstractDistinctValuesCollector$GroupCount {
          public:
            PyObject_HEAD
            AbstractDistinctValuesCollector$GroupCount object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractDistinctValuesCollector$GroupCount *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractDistinctValuesCollector$GroupCount&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractDistinctValuesCollector$GroupCount&, PyTypeObject *);
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
