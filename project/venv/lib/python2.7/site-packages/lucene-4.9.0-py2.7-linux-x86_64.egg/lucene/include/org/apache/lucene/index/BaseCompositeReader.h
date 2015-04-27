#ifndef org_apache_lucene_index_BaseCompositeReader_H
#define org_apache_lucene_index_BaseCompositeReader_H

#include "org/apache/lucene/index/CompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class Term;
        class StoredFieldVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class BaseCompositeReader : public ::org::apache::lucene::index::CompositeReader {
        public:
          enum {
            mid_docFreq_7eca6a9e,
            mid_document_a2ea3ebe,
            mid_getDocCount_5fdc3f57,
            mid_getSumDocFreq_5fdc3f54,
            mid_getSumTotalTermFreq_5fdc3f54,
            mid_getTermVectors_ef1c9c73,
            mid_maxDoc_54c6a179,
            mid_numDocs_54c6a179,
            mid_totalTermFreq_7eca6a9d,
            mid_readerIndex_39c7bd23,
            mid_getSequentialSubReaders_87851566,
            mid_readerBase_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseCompositeReader(jobject obj) : ::org::apache::lucene::index::CompositeReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BaseCompositeReader(const BaseCompositeReader& obj) : ::org::apache::lucene::index::CompositeReader(obj) {}

          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          jint getDocCount(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jint maxDoc() const;
          jint numDocs() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyTypeObject PY_TYPE(BaseCompositeReader);

        class t_BaseCompositeReader {
        public:
          PyObject_HEAD
          BaseCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
