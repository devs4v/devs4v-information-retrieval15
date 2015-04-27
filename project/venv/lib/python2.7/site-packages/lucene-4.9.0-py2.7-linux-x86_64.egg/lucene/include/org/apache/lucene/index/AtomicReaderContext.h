#ifndef org_apache_lucene_index_AtomicReaderContext_H
#define org_apache_lucene_index_AtomicReaderContext_H

#include "org/apache/lucene/index/IndexReaderContext.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class AtomicReaderContext : public ::org::apache::lucene::index::IndexReaderContext {
        public:
          enum {
            mid_children_87851566,
            mid_leaves_87851566,
            mid_reader_dea1bc38,
            max_mid
          };

          enum {
            fid_docBase,
            fid_ord,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AtomicReaderContext(jobject obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AtomicReaderContext(const AtomicReaderContext& obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {}

          jint _get_docBase() const;
          jint _get_ord() const;

          ::java::util::List children() const;
          ::java::util::List leaves() const;
          ::org::apache::lucene::index::AtomicReader reader() const;
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
        extern PyTypeObject PY_TYPE(AtomicReaderContext);

        class t_AtomicReaderContext {
        public:
          PyObject_HEAD
          AtomicReaderContext object;
          static PyObject *wrap_Object(const AtomicReaderContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
