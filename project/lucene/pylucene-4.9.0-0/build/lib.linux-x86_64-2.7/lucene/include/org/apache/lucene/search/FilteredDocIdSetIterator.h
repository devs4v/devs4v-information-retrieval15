#ifndef org_apache_lucene_search_FilteredDocIdSetIterator_H
#define org_apache_lucene_search_FilteredDocIdSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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

        class FilteredDocIdSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
        public:
          enum {
            mid_init$_c2b5607d,
            mid_advance_39c7bd23,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_nextDoc_54c6a179,
            mid_match_39c7bd30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredDocIdSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredDocIdSetIterator(const FilteredDocIdSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          FilteredDocIdSetIterator(const ::org::apache::lucene::search::DocIdSetIterator &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
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
        extern PyTypeObject PY_TYPE(FilteredDocIdSetIterator);

        class t_FilteredDocIdSetIterator {
        public:
          PyObject_HEAD
          FilteredDocIdSetIterator object;
          static PyObject *wrap_Object(const FilteredDocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
