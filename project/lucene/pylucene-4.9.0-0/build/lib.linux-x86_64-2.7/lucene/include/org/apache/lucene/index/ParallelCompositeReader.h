#ifndef org_apache_lucene_index_ParallelCompositeReader_H
#define org_apache_lucene_index_ParallelCompositeReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CompositeReader;
        class IndexReader;
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

        class ParallelCompositeReader : public ::org::apache::lucene::index::BaseCompositeReader {
        public:
          enum {
            mid_init$_0cab4ef6,
            mid_init$_24b17b53,
            mid_init$_9dc0978b,
            mid_doClose_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParallelCompositeReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ParallelCompositeReader(const ParallelCompositeReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ParallelCompositeReader(const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &, const JArray< ::org::apache::lucene::index::CompositeReader > &);
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
        extern PyTypeObject PY_TYPE(ParallelCompositeReader);

        class t_ParallelCompositeReader {
        public:
          PyObject_HEAD
          ParallelCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ParallelCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ParallelCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ParallelCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
