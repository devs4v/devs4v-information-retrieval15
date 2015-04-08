#ifndef org_apache_lucene_codecs_idversion_IDVersionSegmentTermsEnum_H
#define org_apache_lucene_codecs_idversion_IDVersionSegmentTermsEnum_H

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
      namespace codecs {
        namespace idversion {

          class IDVersionSegmentTermsEnum : public ::org::apache::lucene::index::TermsEnum {
          public:
            enum {
              mid_docFreq_54c6a179,
              mid_docs_e6d4c3ef,
              mid_docsAndPositions_b5d9c11b,
              mid_getComparator_5a7ff2fc,
              mid_getVersion_54c6a17a,
              mid_next_4ae19461,
              mid_ord_54c6a17a,
              mid_seekCeil_fa9d72c4,
              mid_seekExact_7bc03dc8,
              mid_seekExact_0ee6df2f,
              mid_seekExact_fe46da51,
              mid_seekExact_9e70a0d1,
              mid_term_4ae19461,
              mid_termState_3e41fede,
              mid_toString_14c7b5c5,
              mid_totalTermFreq_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IDVersionSegmentTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IDVersionSegmentTermsEnum(const IDVersionSegmentTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
            ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
            ::java::util::Comparator getComparator() const;
            jlong getVersion() const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &, jlong) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            ::java::lang::String toString() const;
            jlong totalTermFreq() const;
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
      namespace codecs {
        namespace idversion {
          extern PyTypeObject PY_TYPE(IDVersionSegmentTermsEnum);

          class t_IDVersionSegmentTermsEnum {
          public:
            PyObject_HEAD
            IDVersionSegmentTermsEnum object;
            static PyObject *wrap_Object(const IDVersionSegmentTermsEnum&);
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
