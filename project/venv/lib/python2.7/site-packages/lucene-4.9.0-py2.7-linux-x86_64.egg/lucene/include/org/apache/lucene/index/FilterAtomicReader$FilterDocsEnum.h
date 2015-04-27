#ifndef org_apache_lucene_index_FilterAtomicReader$FilterDocsEnum_H
#define org_apache_lucene_index_FilterAtomicReader$FilterDocsEnum_H

#include "org/apache/lucene/index/DocsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace index {

        class FilterAtomicReader$FilterDocsEnum : public ::org::apache::lucene::index::DocsEnum {
        public:
          enum {
            mid_init$_ea9b58a1,
            mid_advance_39c7bd23,
            mid_attributes_f901022b,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_freq_54c6a179,
            mid_nextDoc_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader$FilterDocsEnum(jobject obj) : ::org::apache::lucene::index::DocsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader$FilterDocsEnum(const FilterAtomicReader$FilterDocsEnum& obj) : ::org::apache::lucene::index::DocsEnum(obj) {}

          FilterAtomicReader$FilterDocsEnum(const ::org::apache::lucene::index::DocsEnum &);

          jint advance(jint) const;
          ::org::apache::lucene::util::AttributeSource attributes() const;
          jlong cost() const;
          jint docID() const;
          jint freq() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(FilterAtomicReader$FilterDocsEnum);

        class t_FilterAtomicReader$FilterDocsEnum {
        public:
          PyObject_HEAD
          FilterAtomicReader$FilterDocsEnum object;
          static PyObject *wrap_Object(const FilterAtomicReader$FilterDocsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
