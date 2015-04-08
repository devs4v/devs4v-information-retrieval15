#ifndef org_apache_lucene_index_DocTermOrds_H
#define org_apache_lucene_index_DocTermOrds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
        class BytesRef;
      }
      namespace index {
        class AtomicReader;
        class SortedSetDocValues;
        class TermsEnum;
      }
    }
  }
}
namespace java {
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

        class DocTermOrds : public ::java::lang::Object {
        public:
          enum {
            mid_init$_5230fbcf,
            mid_init$_ba2c6033,
            mid_init$_69c8f813,
            mid_init$_6c95794f,
            mid_getOrdTermsEnum_e7b033b0,
            mid_isEmpty_54c6a16a,
            mid_iterator_e09eae6c,
            mid_lookupTerm_fc839edf,
            mid_numTerms_54c6a179,
            mid_ramBytesUsed_54c6a17a,
            mid_visitTerm_619ad8a4,
            mid_uninvert_728f7de9,
            mid_setActualDocFreq_d8d154a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocTermOrds(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocTermOrds(const DocTermOrds& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_INDEX_INTERVAL_BITS;

          DocTermOrds(const ::org::apache::lucene::index::AtomicReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &);
          DocTermOrds(const ::org::apache::lucene::index::AtomicReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          DocTermOrds(const ::org::apache::lucene::index::AtomicReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          DocTermOrds(const ::org::apache::lucene::index::AtomicReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint, jint);

          ::org::apache::lucene::index::TermsEnum getOrdTermsEnum(const ::org::apache::lucene::index::AtomicReader &) const;
          jboolean isEmpty() const;
          ::org::apache::lucene::index::SortedSetDocValues iterator(const ::org::apache::lucene::index::AtomicReader &) const;
          ::org::apache::lucene::util::BytesRef lookupTerm(const ::org::apache::lucene::index::TermsEnum &, jint) const;
          jint numTerms() const;
          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(DocTermOrds);

        class t_DocTermOrds {
        public:
          PyObject_HEAD
          DocTermOrds object;
          static PyObject *wrap_Object(const DocTermOrds&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
