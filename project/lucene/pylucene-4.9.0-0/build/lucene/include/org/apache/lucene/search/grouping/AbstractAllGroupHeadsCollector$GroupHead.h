#ifndef org_apache_lucene_search_grouping_AbstractAllGroupHeadsCollector$GroupHead_H
#define org_apache_lucene_search_grouping_AbstractAllGroupHeadsCollector$GroupHead_H

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
      namespace search {
        namespace grouping {

          class AbstractAllGroupHeadsCollector$GroupHead : public ::java::lang::Object {
          public:
            enum {
              mid_compare_d8d154b9,
              mid_updateDocHead_39c7bd3c,
              max_mid
            };

            enum {
              fid_doc,
              fid_groupValue,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAllGroupHeadsCollector$GroupHead(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAllGroupHeadsCollector$GroupHead(const AbstractAllGroupHeadsCollector$GroupHead& obj) : ::java::lang::Object(obj) {}

            jint _get_doc() const;
            void _set_doc(jint) const;
            ::java::lang::Object _get_groupValue() const;
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
          extern PyTypeObject PY_TYPE(AbstractAllGroupHeadsCollector$GroupHead);

          class t_AbstractAllGroupHeadsCollector$GroupHead {
          public:
            PyObject_HEAD
            AbstractAllGroupHeadsCollector$GroupHead object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractAllGroupHeadsCollector$GroupHead *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractAllGroupHeadsCollector$GroupHead&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractAllGroupHeadsCollector$GroupHead&, PyTypeObject *);
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
