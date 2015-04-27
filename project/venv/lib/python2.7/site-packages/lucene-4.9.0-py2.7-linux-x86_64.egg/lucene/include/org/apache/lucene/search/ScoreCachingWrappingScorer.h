#ifndef org_apache_lucene_search_ScoreCachingWrappingScorer_H
#define org_apache_lucene_search_ScoreCachingWrappingScorer_H

#include "org/apache/lucene/search/FilterScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer$ChildScorer;
        class Scorer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

        class ScoreCachingWrappingScorer : public ::org::apache::lucene::search::FilterScorer {
        public:
          enum {
            mid_init$_8be0880c,
            mid_getChildren_2d2d7de4,
            mid_score_54c6a176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreCachingWrappingScorer(jobject obj) : ::org::apache::lucene::search::FilterScorer(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ScoreCachingWrappingScorer(const ScoreCachingWrappingScorer& obj) : ::org::apache::lucene::search::FilterScorer(obj) {}

          ScoreCachingWrappingScorer(const ::org::apache::lucene::search::Scorer &);

          ::java::util::Collection getChildren() const;
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
        extern PyTypeObject PY_TYPE(ScoreCachingWrappingScorer);

        class t_ScoreCachingWrappingScorer {
        public:
          PyObject_HEAD
          ScoreCachingWrappingScorer object;
          static PyObject *wrap_Object(const ScoreCachingWrappingScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
