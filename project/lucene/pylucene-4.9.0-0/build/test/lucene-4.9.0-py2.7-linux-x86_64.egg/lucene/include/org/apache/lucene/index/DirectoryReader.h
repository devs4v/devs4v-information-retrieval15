#ifndef org_apache_lucene_index_DirectoryReader_H
#define org_apache_lucene_index_DirectoryReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class AtomicReader;
        class IndexWriter;
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
  }
  namespace util {
    class List;
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

        class DirectoryReader : public ::org::apache::lucene::index::BaseCompositeReader {
        public:
          enum {
            mid_directory_1f3934bb,
            mid_getIndexCommit_09307276,
            mid_getVersion_54c6a17a,
            mid_indexExists_2e261efe,
            mid_isCurrent_54c6a16a,
            mid_listCommits_a0981b9a,
            mid_open_109b8ac7,
            mid_open_26fd6272,
            mid_open_e4ee522b,
            mid_open_d7b74111,
            mid_open_13bade12,
            mid_openIfChanged_5bb3c60f,
            mid_openIfChanged_bf41593a,
            mid_openIfChanged_dbc531b7,
            mid_doOpenIfChanged_1de06693,
            mid_doOpenIfChanged_e4ee522b,
            mid_doOpenIfChanged_26fd6272,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DirectoryReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DirectoryReader(const DirectoryReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          static jint DEFAULT_TERMS_INDEX_DIVISOR;

          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          static jboolean indexExists(const ::org::apache::lucene::store::Directory &);
          jboolean isCurrent() const;
          static ::java::util::List listCommits(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &, jboolean);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &, jint);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &, jint);
          static DirectoryReader openIfChanged(const DirectoryReader &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &, jboolean);
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
        extern PyTypeObject PY_TYPE(DirectoryReader);

        class t_DirectoryReader {
        public:
          PyObject_HEAD
          DirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
