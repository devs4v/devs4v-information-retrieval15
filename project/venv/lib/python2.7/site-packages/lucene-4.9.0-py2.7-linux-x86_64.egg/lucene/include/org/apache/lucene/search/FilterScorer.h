#ifndef org_apache_lucene_search_FilterScorer_H
#define org_apache_lucene_search_FilterScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
      namespace search {
        class Scorer$ChildScorer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Collection;
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

        class FilterScorer : public ::org::apache::lucene::search::Scorer {
        public:
          enum {
            mid_init$_8be0880c,
            mid_advance_39c7bd23,
            mid_attributes_f901022b,
            mid_cost_54c6a17a,
            mid_docID_54c6a179,
            mid_freq_54c6a179,
            mid_getChildren_2d2d7de4,
            mid_nextDoc_54c6a179,
            mid_score_54c6a176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterScorer(const FilterScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          FilterScorer(const ::org::apache::lucene::search::Scorer &);

          jint advance(jint) const;
          ::org::apache::lucene::util::AttributeSource attributes() const;
          jlong cost() const;
          jint docID() const;
          jint freq() const;
          ::java::util::Collection getChildren() const;
          jint nextDoc() const;
          jfloat score() const;
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
        extern PyTypeObject PY_TYPE(FilterScorer);

        class t_FilterScorer {
        public:
          PyObject_HEAD
          FilterScorer object;
          static PyObject *wrap_Object(const FilterScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
