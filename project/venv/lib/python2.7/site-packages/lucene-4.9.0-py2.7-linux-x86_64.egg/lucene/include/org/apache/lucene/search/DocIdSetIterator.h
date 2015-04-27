#ifndef org_apache_lucene_search_DocIdSetIterator_H
#define org_apache_lucene_search_DocIdSetIterator_H

#include "java/lang/Object.h"

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
      namespace search {

        class DocIdSetIterator : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_advance_39c7bd23,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_empty_dc23660c,
            mid_nextDoc_54c6a179,
            mid_slowAdvance_39c7bd23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocIdSetIterator(const DocIdSetIterator& obj) : ::java::lang::Object(obj) {}

          static jint NO_MORE_DOCS;

          DocIdSetIterator();

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          static DocIdSetIterator empty();
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(DocIdSetIterator);

        class t_DocIdSetIterator {
        public:
          PyObject_HEAD
          DocIdSetIterator object;
          static PyObject *wrap_Object(const DocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
