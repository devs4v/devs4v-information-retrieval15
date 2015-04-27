#ifndef org_apache_lucene_index_MultiReader_H
#define org_apache_lucene_index_MultiReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiReader : public ::org::apache::lucene::index::BaseCompositeReader {
        public:
          enum {
            mid_init$_a20f8ee9,
            mid_init$_44fb5002,
            mid_doClose_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiReader(const MultiReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, jboolean);
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
        extern PyTypeObject PY_TYPE(MultiReader);

        class t_MultiReader {
        public:
          PyObject_HEAD
          MultiReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
