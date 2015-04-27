#ifndef org_apache_lucene_sandbox_queries_SortedSetSortField_H
#define org_apache_lucene_sandbox_queries_SortedSetSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldComparator;
      }
      namespace sandbox {
        namespace queries {
          class SortedSetSortField$Selector;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class SortedSetSortField : public ::org::apache::lucene::search::SortField {
          public:
            enum {
              mid_init$_f3691645,
              mid_init$_95ba0b53,
              mid_equals_290588e2,
              mid_getComparator_f38637f4,
              mid_getSelector_01e98d5f,
              mid_hashCode_54c6a179,
              mid_setMissingValue_290588ee,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetSortField(const SortedSetSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

            SortedSetSortField(const ::java::lang::String &, jboolean);
            SortedSetSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::sandbox::queries::SortedSetSortField$Selector &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
            ::org::apache::lucene::sandbox::queries::SortedSetSortField$Selector getSelector() const;
            jint hashCode() const;
            void setMissingValue(const ::java::lang::Object &) const;
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(SortedSetSortField);

          class t_SortedSetSortField {
          public:
            PyObject_HEAD
            SortedSetSortField object;
            static PyObject *wrap_Object(const SortedSetSortField&);
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
