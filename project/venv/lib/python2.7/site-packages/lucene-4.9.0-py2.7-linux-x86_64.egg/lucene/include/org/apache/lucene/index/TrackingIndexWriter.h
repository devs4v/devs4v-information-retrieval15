#ifndef org_apache_lucene_index_TrackingIndexWriter_H
#define org_apache_lucene_index_TrackingIndexWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexWriter;
        class IndexReader;
        class IndexableField;
      }
      namespace search {
        class Query;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Iterable;
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

        class TrackingIndexWriter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_4f2fb7d5,
            mid_addDocument_d1cac219,
            mid_addDocument_f74a1d49,
            mid_addDocuments_d1cac219,
            mid_addDocuments_f74a1d49,
            mid_addIndexes_a20f8ef5,
            mid_addIndexes_160e609a,
            mid_deleteAll_54c6a17a,
            mid_deleteDocuments_7eca6a9d,
            mid_deleteDocuments_c9f85e1d,
            mid_deleteDocuments_937b34cf,
            mid_deleteDocuments_6e30110f,
            mid_getAndIncrementGeneration_54c6a17a,
            mid_getGeneration_54c6a17a,
            mid_getIndexWriter_bbe46a60,
            mid_tryDeleteDocument_1e4306f9,
            mid_updateDocument_b5aef5fe,
            mid_updateDocument_4d995da4,
            mid_updateDocuments_b5aef5fe,
            mid_updateDocuments_4d995da4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrackingIndexWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TrackingIndexWriter(const TrackingIndexWriter& obj) : ::java::lang::Object(obj) {}

          TrackingIndexWriter(const ::org::apache::lucene::index::IndexWriter &);

          jlong addDocument(const ::java::lang::Iterable &) const;
          jlong addDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          jlong addDocuments(const ::java::lang::Iterable &) const;
          jlong addDocuments(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::index::IndexReader > &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::store::Directory > &) const;
          jlong deleteAll() const;
          jlong deleteDocuments(const ::org::apache::lucene::index::Term &) const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::index::Term > &) const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::search::Query > &) const;
          jlong deleteDocuments(const ::org::apache::lucene::search::Query &) const;
          jlong getAndIncrementGeneration() const;
          jlong getGeneration() const;
          ::org::apache::lucene::index::IndexWriter getIndexWriter() const;
          jlong tryDeleteDocument(const ::org::apache::lucene::index::IndexReader &, jint) const;
          jlong updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          jlong updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
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
        extern PyTypeObject PY_TYPE(TrackingIndexWriter);

        class t_TrackingIndexWriter {
        public:
          PyObject_HEAD
          TrackingIndexWriter object;
          static PyObject *wrap_Object(const TrackingIndexWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
