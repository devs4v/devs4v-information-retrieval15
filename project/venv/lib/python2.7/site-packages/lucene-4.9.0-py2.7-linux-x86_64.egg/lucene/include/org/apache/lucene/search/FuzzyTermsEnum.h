#ifndef org_apache_lucene_search_FuzzyTermsEnum_H
#define org_apache_lucene_search_FuzzyTermsEnum_H

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
        class DocsEnum;
        class Terms;
        class DocsAndPositionsEnum;
        class Term;
        class TermsEnum$SeekStatus;
        class TermState;
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
      namespace search {

        class FuzzyTermsEnum : public ::org::apache::lucene::index::TermsEnum {
        public:
          enum {
            mid_init$_538f73aa,
            mid_docFreq_54c6a179,
            mid_docs_e6d4c3ef,
            mid_docsAndPositions_b5d9c11b,
            mid_getComparator_5a7ff2fc,
            mid_getMinSimilarity_54c6a176,
            mid_getScaleFactor_54c6a176,
            mid_next_4ae19461,
            mid_ord_54c6a17a,
            mid_seekCeil_fa9d72c4,
            mid_seekExact_7bc03dc8,
            mid_seekExact_0ee6df2f,
            mid_seekExact_fe46da51,
            mid_term_4ae19461,
            mid_termState_3e41fede,
            mid_totalTermFreq_54c6a17a,
            mid_maxEditDistanceChanged_0741f897,
            mid_getAutomatonEnum_6dd5cb2f,
            mid_setEnum_0f660bfe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum(const FuzzyTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          FuzzyTermsEnum(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::util::AttributeSource &, const ::org::apache::lucene::index::Term &, jfloat, jint, jboolean);

          jint docFreq() const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
          ::java::util::Comparator getComparator() const;
          jfloat getMinSimilarity() const;
          jfloat getScaleFactor() const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::org::apache::lucene::index::TermState termState() const;
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
      namespace search {
        extern PyTypeObject PY_TYPE(FuzzyTermsEnum);

        class t_FuzzyTermsEnum {
        public:
          PyObject_HEAD
          FuzzyTermsEnum object;
          static PyObject *wrap_Object(const FuzzyTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
