#ifndef org_apache_lucene_index_MultiTermsEnum_H
#define org_apache_lucene_index_MultiTermsEnum_H

#include "org/apache/lucene/index/TermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BytesRef;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class DocsEnum;
        class DocsAndPositionsEnum;
        class ReaderSlice;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
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
      namespace index {

        class MultiTermsEnum : public ::org::apache::lucene::index::TermsEnum {
        public:
          enum {
            mid_init$_a8f03305,
            mid_docFreq_54c6a179,
            mid_docs_e6d4c3ef,
            mid_docsAndPositions_b5d9c11b,
            mid_getComparator_5a7ff2fc,
            mid_getMatchCount_54c6a179,
            mid_next_4ae19461,
            mid_ord_54c6a17a,
            mid_seekCeil_fa9d72c4,
            mid_seekExact_7bc03dc8,
            mid_seekExact_0ee6df2f,
            mid_term_4ae19461,
            mid_toString_14c7b5c5,
            mid_totalTermFreq_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTermsEnum(const MultiTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          MultiTermsEnum(const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          jint docFreq() const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
          ::java::util::Comparator getComparator() const;
          jint getMatchCount() const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
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
        extern PyTypeObject PY_TYPE(MultiTermsEnum);

        class t_MultiTermsEnum {
        public:
          PyObject_HEAD
          MultiTermsEnum object;
          static PyObject *wrap_Object(const MultiTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
