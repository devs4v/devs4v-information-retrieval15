#ifndef org_apache_lucene_search_TopDocsCollector_H
#define org_apache_lucene_search_TopDocsCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
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
      namespace search {

        class TopDocsCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_getTotalHits_54c6a179,
            mid_topDocs_0ac630fc,
            mid_topDocs_c7a84aba,
            mid_topDocs_b17523f8,
            mid_topDocsSize_54c6a179,
            mid_populateResults_fbb5e76c,
            mid_newTopDocs_a5bceb12,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocsCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopDocsCollector(const TopDocsCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          jint getTotalHits() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
          ::org::apache::lucene::search::TopDocs topDocs(jint) const;
          ::org::apache::lucene::search::TopDocs topDocs(jint, jint) const;
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
        extern PyTypeObject PY_TYPE(TopDocsCollector);

        class t_TopDocsCollector {
        public:
          PyObject_HEAD
          TopDocsCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopDocsCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopDocsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopDocsCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
