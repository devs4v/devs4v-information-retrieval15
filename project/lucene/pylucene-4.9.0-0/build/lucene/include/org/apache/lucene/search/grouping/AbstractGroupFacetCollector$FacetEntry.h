#ifndef org_apache_lucene_search_grouping_AbstractGroupFacetCollector$FacetEntry_H
#define org_apache_lucene_search_grouping_AbstractGroupFacetCollector$FacetEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class AbstractGroupFacetCollector$FacetEntry : public ::java::lang::Object {
          public:
            enum {
              mid_init$_738fc2ce,
              mid_equals_290588e2,
              mid_getCount_54c6a179,
              mid_getValue_4ae19461,
              mid_hashCode_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractGroupFacetCollector$FacetEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractGroupFacetCollector$FacetEntry(const AbstractGroupFacetCollector$FacetEntry& obj) : ::java::lang::Object(obj) {}

            AbstractGroupFacetCollector$FacetEntry(const ::org::apache::lucene::util::BytesRef &, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getCount() const;
            ::org::apache::lucene::util::BytesRef getValue() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(AbstractGroupFacetCollector$FacetEntry);

          class t_AbstractGroupFacetCollector$FacetEntry {
          public:
            PyObject_HEAD
            AbstractGroupFacetCollector$FacetEntry object;
            static PyObject *wrap_Object(const AbstractGroupFacetCollector$FacetEntry&);
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
