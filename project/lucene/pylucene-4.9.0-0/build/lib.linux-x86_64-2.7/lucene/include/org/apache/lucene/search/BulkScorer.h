#ifndef org_apache_lucene_search_BulkScorer_H
#define org_apache_lucene_search_BulkScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Collector;
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

        class BulkScorer : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_score_77379ce0,
            mid_score_9527f6ba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BulkScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BulkScorer(const BulkScorer& obj) : ::java::lang::Object(obj) {}

          BulkScorer();

          void score(const ::org::apache::lucene::search::Collector &) const;
          jboolean score(const ::org::apache::lucene::search::Collector &, jint) const;
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
        extern PyTypeObject PY_TYPE(BulkScorer);

        class t_BulkScorer {
        public:
          PyObject_HEAD
          BulkScorer object;
          static PyObject *wrap_Object(const BulkScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
