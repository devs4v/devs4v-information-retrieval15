#ifndef org_apache_lucene_index_FilterDirectoryReader_H
#define org_apache_lucene_index_FilterDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class FilterDirectoryReader$SubReaderWrapper;
        class AtomicReader;
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

        class FilterDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
        public:
          enum {
            mid_init$_1e43081e,
            mid_init$_c3fa2163,
            mid_getIndexCommit_09307276,
            mid_getVersion_54c6a17a,
            mid_isCurrent_54c6a16a,
            mid_doClose_54c6a166,
            mid_doWrapDirectoryReader_5bb3c60f,
            mid_doOpenIfChanged_26fd6272,
            mid_doOpenIfChanged_1de06693,
            mid_doOpenIfChanged_e4ee522b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader(const FilterDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          FilterDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &);
          FilterDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper &);

          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
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
        extern PyTypeObject PY_TYPE(FilterDirectoryReader);

        class t_FilterDirectoryReader {
        public:
          PyObject_HEAD
          FilterDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
