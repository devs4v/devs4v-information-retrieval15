#ifndef org_apache_lucene_index_MultiFields_H
#define org_apache_lucene_index_MultiFields_H

#include "org/apache/lucene/index/Fields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BytesRef;
      }
      namespace index {
        class DocsEnum;
        class Terms;
        class IndexReader;
        class FieldInfos;
        class DocsAndPositionsEnum;
        class ReaderSlice;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
    class Collection;
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

        class MultiFields : public ::org::apache::lucene::index::Fields {
        public:
          enum {
            mid_init$_4836fcd7,
            mid_getFields_450c502c,
            mid_getIndexedFields_c7983645,
            mid_getLiveDocs_38e907ca,
            mid_getMergedFieldInfos_27fb8e4c,
            mid_getTermDocsEnum_0566f0df,
            mid_getTermDocsEnum_dd660923,
            mid_getTermPositionsEnum_b8773540,
            mid_getTermPositionsEnum_79e6ab0c,
            mid_getTerms_4d5aa19b,
            mid_iterator_40858c90,
            mid_size_54c6a179,
            mid_terms_ee262ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFields(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiFields(const MultiFields& obj) : ::org::apache::lucene::index::Fields(obj) {}

          MultiFields(const JArray< ::org::apache::lucene::index::Fields > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          static ::org::apache::lucene::index::Fields getFields(const ::org::apache::lucene::index::IndexReader &);
          static ::java::util::Collection getIndexedFields(const ::org::apache::lucene::index::IndexReader &);
          static ::org::apache::lucene::util::Bits getLiveDocs(const ::org::apache::lucene::index::IndexReader &);
          static ::org::apache::lucene::index::FieldInfos getMergedFieldInfos(const ::org::apache::lucene::index::IndexReader &);
          static ::org::apache::lucene::index::DocsEnum getTermDocsEnum(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::index::DocsEnum getTermDocsEnum(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          static ::org::apache::lucene::index::DocsAndPositionsEnum getTermPositionsEnum(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::index::DocsAndPositionsEnum getTermPositionsEnum(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::util::Bits &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          static ::org::apache::lucene::index::Terms getTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(MultiFields);

        class t_MultiFields {
        public:
          PyObject_HEAD
          MultiFields object;
          static PyObject *wrap_Object(const MultiFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
