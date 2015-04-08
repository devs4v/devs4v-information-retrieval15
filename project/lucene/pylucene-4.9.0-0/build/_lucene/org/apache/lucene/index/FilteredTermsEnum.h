#ifndef org_apache_lucene_index_FilteredTermsEnum_H
#define org_apache_lucene_index_FilteredTermsEnum_H

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
        class TermState;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
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

        class FilteredTermsEnum : public ::org::apache::lucene::index::TermsEnum {
        public:
          enum {
            mid_init$_0f660bfe,
            mid_init$_3c71de47,
            mid_attributes_f901022b,
            mid_docFreq_54c6a179,
            mid_docs_e6d4c3ef,
            mid_docsAndPositions_b5d9c11b,
            mid_getComparator_5a7ff2fc,
            mid_next_4ae19461,
            mid_ord_54c6a17a,
            mid_seekCeil_fa9d72c4,
            mid_seekExact_7bc03dc8,
            mid_seekExact_0ee6df2f,
            mid_seekExact_fe46da51,
            mid_term_4ae19461,
            mid_termState_3e41fede,
            mid_totalTermFreq_54c6a17a,
            mid_accept_30bc08e1,
            mid_setInitialSeekTerm_7bc03dc4,
            mid_nextSeekTerm_21e43cb7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredTermsEnum(const FilteredTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          FilteredTermsEnum(const ::org::apache::lucene::index::TermsEnum &);
          FilteredTermsEnum(const ::org::apache::lucene::index::TermsEnum &, jboolean);

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
          ::java::util::Comparator getComparator() const;
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
      namespace index {
        extern PyTypeObject PY_TYPE(FilteredTermsEnum);

        class t_FilteredTermsEnum {
        public:
          PyObject_HEAD
          FilteredTermsEnum object;
          static PyObject *wrap_Object(const FilteredTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
