#ifndef org_apache_lucene_index_TermsEnum_H
#define org_apache_lucene_index_TermsEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class Bits;
        class BytesRefIterator;
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

        class TermsEnum : public ::java::lang::Object {
        public:
          enum {
            mid_attributes_f901022b,
            mid_docFreq_54c6a179,
            mid_docs_fb0743a7,
            mid_docs_e6d4c3ef,
            mid_docsAndPositions_ffc1634d,
            mid_docsAndPositions_b5d9c11b,
            mid_ord_54c6a17a,
            mid_seekCeil_fa9d72c4,
            mid_seekExact_7bc03dc8,
            mid_seekExact_0ee6df2f,
            mid_seekExact_fe46da51,
            mid_term_4ae19461,
            mid_termState_3e41fede,
            mid_totalTermFreq_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsEnum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermsEnum(const TermsEnum& obj) : ::java::lang::Object(obj) {}

          static TermsEnum *EMPTY;

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &) const;
          ::org::apache::lucene::index::DocsEnum docs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsEnum &, jint) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum docsAndPositions(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::index::DocsAndPositionsEnum &, jint) const;
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
        extern PyTypeObject PY_TYPE(TermsEnum);

        class t_TermsEnum {
        public:
          PyObject_HEAD
          TermsEnum object;
          static PyObject *wrap_Object(const TermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
