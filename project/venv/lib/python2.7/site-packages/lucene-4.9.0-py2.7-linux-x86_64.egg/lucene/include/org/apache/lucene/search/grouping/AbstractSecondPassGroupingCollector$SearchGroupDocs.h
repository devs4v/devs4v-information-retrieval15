#ifndef org_apache_lucene_search_grouping_AbstractSecondPassGroupingCollector$SearchGroupDocs_H
#define org_apache_lucene_search_grouping_AbstractSecondPassGroupingCollector$SearchGroupDocs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocsCollector;
        namespace grouping {
          class AbstractSecondPassGroupingCollector;
        }
      }
    }
  }
}
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

          class AbstractSecondPassGroupingCollector$SearchGroupDocs : public ::java::lang::Object {
          public:
            enum {
              mid_init$_b73e617c,
              max_mid
            };

            enum {
              fid_collector,
              fid_groupValue,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractSecondPassGroupingCollector$SearchGroupDocs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractSecondPassGroupingCollector$SearchGroupDocs(const AbstractSecondPassGroupingCollector$SearchGroupDocs& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::search::TopDocsCollector _get_collector() const;
            ::java::lang::Object _get_groupValue() const;

            AbstractSecondPassGroupingCollector$SearchGroupDocs(const ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector &, const ::java::lang::Object &, const ::org::apache::lucene::search::TopDocsCollector &);
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
          extern PyTypeObject PY_TYPE(AbstractSecondPassGroupingCollector$SearchGroupDocs);

          class t_AbstractSecondPassGroupingCollector$SearchGroupDocs {
          public:
            PyObject_HEAD
            AbstractSecondPassGroupingCollector$SearchGroupDocs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractSecondPassGroupingCollector$SearchGroupDocs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractSecondPassGroupingCollector$SearchGroupDocs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractSecondPassGroupingCollector$SearchGroupDocs&, PyTypeObject *);
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
