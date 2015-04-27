#ifndef org_apache_lucene_search_TopScoreDocCollector_H
#define org_apache_lucene_search_TopScoreDocCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class ScoreDoc;
        class Scorer;
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

        class TopScoreDocCollector : public ::org::apache::lucene::search::TopDocsCollector {
        public:
          enum {
            mid_create_ed0bbc86,
            mid_create_113a7b62,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            mid_newTopDocs_a5bceb12,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollector(const TopScoreDocCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          static TopScoreDocCollector create(jint, jboolean);
          static TopScoreDocCollector create(jint, const ::org::apache::lucene::search::ScoreDoc &, jboolean);
          void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorer &) const;
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
        extern PyTypeObject PY_TYPE(TopScoreDocCollector);

        class t_TopScoreDocCollector {
        public:
          PyObject_HEAD
          TopScoreDocCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopScoreDocCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopScoreDocCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopScoreDocCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
