#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader$ChildrenIterator_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader$ChildrenIterator_H

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
        namespace taxonomy {

          class TaxonomyReader$ChildrenIterator : public ::java::lang::Object {
          public:
            enum {
              mid_next_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyReader$ChildrenIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyReader$ChildrenIterator(const TaxonomyReader$ChildrenIterator& obj) : ::java::lang::Object(obj) {}

            jint next() const;
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
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(TaxonomyReader$ChildrenIterator);

          class t_TaxonomyReader$ChildrenIterator {
          public:
            PyObject_HEAD
            TaxonomyReader$ChildrenIterator object;
            static PyObject *wrap_Object(const TaxonomyReader$ChildrenIterator&);
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
