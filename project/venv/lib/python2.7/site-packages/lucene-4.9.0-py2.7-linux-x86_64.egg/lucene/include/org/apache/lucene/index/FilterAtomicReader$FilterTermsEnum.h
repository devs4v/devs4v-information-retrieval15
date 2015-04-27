#ifndef org_apache_lucene_index_FilterAtomicReader$FilterTermsEnum_H
#define org_apache_lucene_index_FilterAtomicReader$FilterTermsEnum_H

#include "org/apache/lucene/index/TermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class Bits;
        class BytesRef;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class DocsEnum;
        class DocsAndPositionsEnum;
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

        class FilterAtomicReader$FilterTermsEnum : public ::org::apache::lucene::index::TermsEnum {
        public:
          enum {
            mid_init$_0f660bfe,
            mid_attributes_f901022b,
            mid_docFreq_54c6a179,
            mid_docs_e6d4c3ef,
            mid_docsAndPositions_b5d9c11b,
            mid_getComparator_5a7ff2fc,
            mid_next_4ae19461,
            mid_ord_54c6a17a,
            mid_seekCeil_fa9d72c4,
            mid_seekExact_0ee6df2f,
            mid_term_4ae19461,
            mid_totalTermFreq_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader$FilterTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader$FilterTermsEnum(const FilterAtomicReader$FilterTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          FilterAtomicReader$FilterTermsEnum(const ::org::apache::lucene::index::TermsEnum &);

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          ::org::apache::lucene::util::BytesRef term() const;
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
        extern PyTypeObject PY_TYPE(FilterAtomicReader$FilterTermsEnum);

        class t_FilterAtomicReader$FilterTermsEnum {
        public:
          PyObject_HEAD
          FilterAtomicReader$FilterTermsEnum object;
          static PyObject *wrap_Object(const FilterAtomicReader$FilterTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
