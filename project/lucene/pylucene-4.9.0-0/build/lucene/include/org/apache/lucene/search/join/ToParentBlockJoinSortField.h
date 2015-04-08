#ifndef org_apache_lucene_search_join_ToParentBlockJoinSortField_H
#define org_apache_lucene_search_join_ToParentBlockJoinSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
        class SortField$Type;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
        namespace join {

          class ToParentBlockJoinSortField : public ::org::apache::lucene::search::SortField {
          public:
            enum {
              mid_init$_71ee501b,
              mid_init$_f8b18760,
              mid_getComparator_f38637f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinSortField(const ToParentBlockJoinSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::Filter &);
            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, jboolean, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::Filter &);

            ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
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
        namespace join {
          extern PyTypeObject PY_TYPE(ToParentBlockJoinSortField);

          class t_ToParentBlockJoinSortField {
          public:
            PyObject_HEAD
            ToParentBlockJoinSortField object;
            static PyObject *wrap_Object(const ToParentBlockJoinSortField&);
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
