#ifndef org_apache_lucene_search_join_ToParentBlockJoinFieldComparator$Highest_H
#define org_apache_lucene_search_join_ToParentBlockJoinFieldComparator$Highest_H

#include "org/apache/lucene/search/join/ToParentBlockJoinFieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Filter;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

          class ToParentBlockJoinFieldComparator$Highest : public ::org::apache::lucene::search::join::ToParentBlockJoinFieldComparator {
          public:
            enum {
              mid_init$_f2105569,
              mid_compareBottom_39c7bd23,
              mid_compareTop_39c7bd23,
              mid_copy_d8d154a6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinFieldComparator$Highest(jobject obj) : ::org::apache::lucene::search::join::ToParentBlockJoinFieldComparator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinFieldComparator$Highest(const ToParentBlockJoinFieldComparator$Highest& obj) : ::org::apache::lucene::search::join::ToParentBlockJoinFieldComparator(obj) {}

            ToParentBlockJoinFieldComparator$Highest(const ::org::apache::lucene::search::FieldComparator &, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::Filter &, jint);

            jint compareBottom(jint) const;
            jint compareTop(jint) const;
            void copy(jint, jint) const;
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
          extern PyTypeObject PY_TYPE(ToParentBlockJoinFieldComparator$Highest);

          class t_ToParentBlockJoinFieldComparator$Highest {
          public:
            PyObject_HEAD
            ToParentBlockJoinFieldComparator$Highest object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ToParentBlockJoinFieldComparator$Highest *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ToParentBlockJoinFieldComparator$Highest&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ToParentBlockJoinFieldComparator$Highest&, PyTypeObject *);
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
