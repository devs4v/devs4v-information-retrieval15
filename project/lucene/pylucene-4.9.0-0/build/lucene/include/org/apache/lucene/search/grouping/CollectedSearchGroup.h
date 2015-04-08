#ifndef org_apache_lucene_search_grouping_CollectedSearchGroup_H
#define org_apache_lucene_search_grouping_CollectedSearchGroup_H

#include "org/apache/lucene/search/grouping/SearchGroup.h"

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

          class CollectedSearchGroup : public ::org::apache::lucene::search::grouping::SearchGroup {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CollectedSearchGroup(jobject obj) : ::org::apache::lucene::search::grouping::SearchGroup(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CollectedSearchGroup(const CollectedSearchGroup& obj) : ::org::apache::lucene::search::grouping::SearchGroup(obj) {}

            CollectedSearchGroup();
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
          extern PyTypeObject PY_TYPE(CollectedSearchGroup);

          class t_CollectedSearchGroup {
          public:
            PyObject_HEAD
            CollectedSearchGroup object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CollectedSearchGroup *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CollectedSearchGroup&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CollectedSearchGroup&, PyTypeObject *);
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
