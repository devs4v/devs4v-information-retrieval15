#ifndef org_apache_lucene_search_grouping_SearchGroup_H
#define org_apache_lucene_search_grouping_SearchGroup_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class SearchGroup : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_merge_8879ded5,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_groupValue,
              fid_sortValues,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearchGroup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SearchGroup(const SearchGroup& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_groupValue() const;
            void _set_groupValue(const ::java::lang::Object &) const;
            JArray< ::java::lang::Object > _get_sortValues() const;
            void _set_sortValues(const JArray< ::java::lang::Object > &) const;

            SearchGroup();

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            static ::java::util::Collection merge(const ::java::util::List &, jint, jint, const ::org::apache::lucene::search::Sort &);
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(SearchGroup);

          class t_SearchGroup {
          public:
            PyObject_HEAD
            SearchGroup object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearchGroup *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearchGroup&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearchGroup&, PyTypeObject *);
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
