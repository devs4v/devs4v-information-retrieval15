#ifndef org_apache_lucene_index_SimpleMergedSegmentWarmer_H
#define org_apache_lucene_index_SimpleMergedSegmentWarmer_H

#include "org/apache/lucene/index/IndexWriter$IndexReaderWarmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
      namespace index {
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

        class SimpleMergedSegmentWarmer : public ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer {
        public:
          enum {
            mid_init$_a5e6dfa2,
            mid_warm_c9e29579,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleMergedSegmentWarmer(jobject obj) : ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SimpleMergedSegmentWarmer(const SimpleMergedSegmentWarmer& obj) : ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer(obj) {}

          SimpleMergedSegmentWarmer(const ::org::apache::lucene::util::InfoStream &);

          void warm(const ::org::apache::lucene::index::AtomicReader &) const;
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
        extern PyTypeObject PY_TYPE(SimpleMergedSegmentWarmer);

        class t_SimpleMergedSegmentWarmer {
        public:
          PyObject_HEAD
          SimpleMergedSegmentWarmer object;
          static PyObject *wrap_Object(const SimpleMergedSegmentWarmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
