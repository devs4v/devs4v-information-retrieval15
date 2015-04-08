#ifndef org_apache_lucene_codecs_MappingMultiDocsEnum_H
#define org_apache_lucene_codecs_MappingMultiDocsEnum_H

#include "org/apache/lucene/index/DocsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class MultiDocsEnum$EnumWithSlice;
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

        class MappingMultiDocsEnum : public ::org::apache::lucene::index::DocsEnum {
        public:
          enum {
            mid_init$_54c6a166,
            mid_advance_39c7bd23,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_freq_54c6a179,
            mid_getNumSubs_54c6a179,
            mid_getSubs_1bdfab69,
            mid_nextDoc_54c6a179,
            mid_setMergeState_fd0cfdf4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MappingMultiDocsEnum(jobject obj) : ::org::apache::lucene::index::DocsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MappingMultiDocsEnum(const MappingMultiDocsEnum& obj) : ::org::apache::lucene::index::DocsEnum(obj) {}

          MappingMultiDocsEnum();

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint freq() const;
          jint getNumSubs() const;
          JArray< ::org::apache::lucene::index::MultiDocsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          void setMergeState(const ::org::apache::lucene::index::MergeState &) const;
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
        extern PyTypeObject PY_TYPE(MappingMultiDocsEnum);

        class t_MappingMultiDocsEnum {
        public:
          PyObject_HEAD
          MappingMultiDocsEnum object;
          static PyObject *wrap_Object(const MappingMultiDocsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
