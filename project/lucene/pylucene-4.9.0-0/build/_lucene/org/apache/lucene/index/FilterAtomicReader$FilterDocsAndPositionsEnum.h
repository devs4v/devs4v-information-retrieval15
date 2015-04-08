#ifndef org_apache_lucene_index_FilterAtomicReader$FilterDocsAndPositionsEnum_H
#define org_apache_lucene_index_FilterAtomicReader$FilterDocsAndPositionsEnum_H

#include "org/apache/lucene/index/DocsAndPositionsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class BytesRef;
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

        class FilterAtomicReader$FilterDocsAndPositionsEnum : public ::org::apache::lucene::index::DocsAndPositionsEnum {
        public:
          enum {
            mid_init$_9604ac16,
            mid_advance_39c7bd23,
            mid_attributes_f901022b,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_endOffset_54c6a179,
            mid_freq_54c6a179,
            mid_getPayload_4ae19461,
            mid_nextDoc_54c6a179,
            mid_nextPosition_54c6a179,
            mid_startOffset_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader$FilterDocsAndPositionsEnum(jobject obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader$FilterDocsAndPositionsEnum(const FilterAtomicReader$FilterDocsAndPositionsEnum& obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {}

          FilterAtomicReader$FilterDocsAndPositionsEnum(const ::org::apache::lucene::index::DocsAndPositionsEnum &);

          jint advance(jint) const;
          ::org::apache::lucene::util::AttributeSource attributes() const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
          jint nextPosition() const;
          jint startOffset() const;
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
        extern PyTypeObject PY_TYPE(FilterAtomicReader$FilterDocsAndPositionsEnum);

        class t_FilterAtomicReader$FilterDocsAndPositionsEnum {
        public:
          PyObject_HEAD
          FilterAtomicReader$FilterDocsAndPositionsEnum object;
          static PyObject *wrap_Object(const FilterAtomicReader$FilterDocsAndPositionsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
