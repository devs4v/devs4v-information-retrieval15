#ifndef org_apache_lucene_index_MultiDocsAndPositionsEnum_H
#define org_apache_lucene_index_MultiDocsAndPositionsEnum_H

#include "org/apache/lucene/index/DocsAndPositionsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class MultiDocsAndPositionsEnum$EnumWithSlice;
        class MultiTermsEnum;
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

        class MultiDocsAndPositionsEnum : public ::org::apache::lucene::index::DocsAndPositionsEnum {
        public:
          enum {
            mid_init$_7d44bb06,
            mid_advance_39c7bd23,
            mid_canReuse_4fe73d2c,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_endOffset_54c6a179,
            mid_freq_54c6a179,
            mid_getNumSubs_54c6a179,
            mid_getPayload_4ae19461,
            mid_getSubs_451af4aa,
            mid_nextDoc_54c6a179,
            mid_nextPosition_54c6a179,
            mid_reset_7ce62fbc,
            mid_startOffset_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocsAndPositionsEnum(jobject obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocsAndPositionsEnum(const MultiDocsAndPositionsEnum& obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {}

          MultiDocsAndPositionsEnum(const ::org::apache::lucene::index::MultiTermsEnum &, jint);

          jint advance(jint) const;
          jboolean canReuse(const ::org::apache::lucene::index::MultiTermsEnum &) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          jint getNumSubs() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          JArray< ::org::apache::lucene::index::MultiDocsAndPositionsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          jint nextPosition() const;
          MultiDocsAndPositionsEnum reset(const JArray< ::org::apache::lucene::index::MultiDocsAndPositionsEnum$EnumWithSlice > &, jint) const;
          jint startOffset() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(MultiDocsAndPositionsEnum);

        class t_MultiDocsAndPositionsEnum {
        public:
          PyObject_HEAD
          MultiDocsAndPositionsEnum object;
          static PyObject *wrap_Object(const MultiDocsAndPositionsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
