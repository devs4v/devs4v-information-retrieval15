#ifndef org_apache_lucene_search_Scorer_H
#define org_apache_lucene_search_Scorer_H

#include "org/apache/lucene/index/DocsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer$ChildScorer;
        class Weight;
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

        class Scorer : public ::org::apache::lucene::index::DocsEnum {
        public:
          enum {
            mid_getChildren_2d2d7de4,
            mid_getWeight_add28ea1,
            mid_score_54c6a176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorer(jobject obj) : ::org::apache::lucene::index::DocsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Scorer(const Scorer& obj) : ::org::apache::lucene::index::DocsEnum(obj) {}

          ::java::util::Collection getChildren() const;
          ::org::apache::lucene::search::Weight getWeight() const;
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
        extern PyTypeObject PY_TYPE(Scorer);

        class t_Scorer {
        public:
          PyObject_HEAD
          Scorer object;
          static PyObject *wrap_Object(const Scorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
