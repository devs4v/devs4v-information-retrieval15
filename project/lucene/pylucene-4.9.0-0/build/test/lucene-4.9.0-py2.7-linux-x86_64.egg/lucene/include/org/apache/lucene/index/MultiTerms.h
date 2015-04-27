#ifndef org_apache_lucene_index_MultiTerms_H
#define org_apache_lucene_index_MultiTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace index {
        class ReaderSlice;
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

        class MultiTerms : public ::org::apache::lucene::index::Terms {
        public:
          enum {
            mid_init$_cc1bf630,
            mid_getComparator_5a7ff2fc,
            mid_getDocCount_54c6a179,
            mid_getMax_4ae19461,
            mid_getMin_4ae19461,
            mid_getSubSlices_df2851e8,
            mid_getSubTerms_a3c12bfa,
            mid_getSumDocFreq_54c6a17a,
            mid_getSumTotalTermFreq_54c6a17a,
            mid_hasFreqs_54c6a16a,
            mid_hasOffsets_54c6a16a,
            mid_hasPayloads_54c6a16a,
            mid_hasPositions_54c6a16a,
            mid_intersect_b8f2b1bc,
            mid_iterator_d737078b,
            mid_size_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTerms(const MultiTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          MultiTerms(const JArray< ::org::apache::lucene::index::Terms > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          ::java::util::Comparator getComparator() const;
          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          JArray< ::org::apache::lucene::index::ReaderSlice > getSubSlices() const;
          JArray< ::org::apache::lucene::index::Terms > getSubTerms() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyTypeObject PY_TYPE(MultiTerms);

        class t_MultiTerms {
        public:
          PyObject_HEAD
          MultiTerms object;
          static PyObject *wrap_Object(const MultiTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
