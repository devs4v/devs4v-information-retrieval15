#ifndef org_apache_lucene_index_MultiDocsEnum_H
#define org_apache_lucene_index_MultiDocsEnum_H

#include "org/apache/lucene/index/DocsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MultiDocsEnum$EnumWithSlice;
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

        class MultiDocsEnum : public ::org::apache::lucene::index::DocsEnum {
        public:
          enum {
            mid_init$_7d44bb06,
            mid_advance_39c7bd23,
            mid_canReuse_4fe73d2c,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_freq_54c6a179,
            mid_getNumSubs_54c6a179,
            mid_getSubs_1bdfab69,
            mid_nextDoc_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocsEnum(jobject obj) : ::org::apache::lucene::index::DocsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocsEnum(const MultiDocsEnum& obj) : ::org::apache::lucene::index::DocsEnum(obj) {}

          MultiDocsEnum(const ::org::apache::lucene::index::MultiTermsEnum &, jint);

          jint advance(jint) const;
          jboolean canReuse(const ::org::apache::lucene::index::MultiTermsEnum &) const;
          jlong cost() const;
          jint docID() const;
          jint freq() const;
          jint getNumSubs() const;
          JArray< ::org::apache::lucene::index::MultiDocsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
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
        extern PyTypeObject PY_TYPE(MultiDocsEnum);

        class t_MultiDocsEnum {
        public:
          PyObject_HEAD
          MultiDocsEnum object;
          static PyObject *wrap_Object(const MultiDocsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
