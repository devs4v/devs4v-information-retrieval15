#ifndef org_apache_lucene_search_join_ToParentBlockJoinFieldComparator_H
#define org_apache_lucene_search_join_ToParentBlockJoinFieldComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
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

          class ToParentBlockJoinFieldComparator : public ::org::apache::lucene::search::FieldComparator {
          public:
            enum {
              mid_compare_d8d154b9,
              mid_setBottom_39c7bd3c,
              mid_setNextReader_6329aed7,
              mid_setTopValue_290588ee,
              mid_value_29be6a55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinFieldComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinFieldComparator(const ToParentBlockJoinFieldComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            jint compare(jint, jint) const;
            void setBottom(jint) const;
            ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
            void setTopValue(const ::java::lang::Object &) const;
            ::java::lang::Object value(jint) const;
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
          extern PyTypeObject PY_TYPE(ToParentBlockJoinFieldComparator);

          class t_ToParentBlockJoinFieldComparator {
          public:
            PyObject_HEAD
            ToParentBlockJoinFieldComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ToParentBlockJoinFieldComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ToParentBlockJoinFieldComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ToParentBlockJoinFieldComparator&, PyTypeObject *);
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
