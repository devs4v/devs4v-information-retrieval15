#ifndef org_apache_lucene_index_FilterAtomicReader$FilterTerms_H
#define org_apache_lucene_index_FilterAtomicReader$FilterTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
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

        class FilterAtomicReader$FilterTerms : public ::org::apache::lucene::index::Terms {
        public:
          enum {
            mid_init$_d0b7bb17,
            mid_getComparator_5a7ff2fc,
            mid_getDocCount_54c6a179,
            mid_getSumDocFreq_54c6a17a,
            mid_getSumTotalTermFreq_54c6a17a,
            mid_hasFreqs_54c6a16a,
            mid_hasOffsets_54c6a16a,
            mid_hasPayloads_54c6a16a,
            mid_hasPositions_54c6a16a,
            mid_iterator_d737078b,
            mid_size_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader$FilterTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader$FilterTerms(const FilterAtomicReader$FilterTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          FilterAtomicReader$FilterTerms(const ::org::apache::lucene::index::Terms &);

          ::java::util::Comparator getComparator() const;
          jint getDocCount() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum iterator(const ::org::apache::lucene::index::TermsEnum &) const;
          jlong size() const;
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
        extern PyTypeObject PY_TYPE(FilterAtomicReader$FilterTerms);

        class t_FilterAtomicReader$FilterTerms {
        public:
          PyObject_HEAD
          FilterAtomicReader$FilterTerms object;
          static PyObject *wrap_Object(const FilterAtomicReader$FilterTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
