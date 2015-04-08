#ifndef org_apache_lucene_codecs_MappingMultiDocsAndPositionsEnum_H
#define org_apache_lucene_codecs_MappingMultiDocsAndPositionsEnum_H

#include "org/apache/lucene/index/DocsAndPositionsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class MultiDocsAndPositionsEnum$EnumWithSlice;
        class MergeState;
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
      namespace codecs {

        class MappingMultiDocsAndPositionsEnum : public ::org::apache::lucene::index::DocsAndPositionsEnum {
        public:
          enum {
            mid_init$_54c6a166,
            mid_advance_39c7bd23,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_endOffset_54c6a179,
            mid_freq_54c6a179,
            mid_getNumSubs_54c6a179,
            mid_getPayload_4ae19461,
            mid_getSubs_451af4aa,
            mid_nextDoc_54c6a179,
            mid_nextPosition_54c6a179,
            mid_setMergeState_fd0cfdf4,
            mid_startOffset_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MappingMultiDocsAndPositionsEnum(jobject obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MappingMultiDocsAndPositionsEnum(const MappingMultiDocsAndPositionsEnum& obj) : ::org::apache::lucene::index::DocsAndPositionsEnum(obj) {}

          MappingMultiDocsAndPositionsEnum();

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          jint getNumSubs() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          JArray< ::org::apache::lucene::index::MultiDocsAndPositionsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          jint nextPosition() const;
          void setMergeState(const ::org::apache::lucene::index::MergeState &) const;
          jint startOffset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyTypeObject PY_TYPE(MappingMultiDocsAndPositionsEnum);

        class t_MappingMultiDocsAndPositionsEnum {
        public:
          PyObject_HEAD
          MappingMultiDocsAndPositionsEnum object;
          static PyObject *wrap_Object(const MappingMultiDocsAndPositionsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
