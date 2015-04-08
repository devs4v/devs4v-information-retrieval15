#ifndef org_apache_lucene_search_TopFieldCollector_H
#define org_apache_lucene_search_TopFieldCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class FieldDoc;
        class FieldValueHitQueue$Entry;
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
      namespace search {

        class TopFieldCollector : public ::org::apache::lucene::search::TopDocsCollector {
        public:
          enum {
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_create_ea5994c0,
            mid_create_be0959c2,
            mid_populateResults_fbb5e76c,
            mid_newTopDocs_a5bceb12,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopFieldCollector(const TopFieldCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          jboolean acceptsDocsOutOfOrder() const;
          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, jboolean, jboolean, jboolean, jboolean);
          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jboolean, jboolean, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(TopFieldCollector);

        class t_TopFieldCollector {
        public:
          PyObject_HEAD
          TopFieldCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopFieldCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopFieldCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopFieldCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
