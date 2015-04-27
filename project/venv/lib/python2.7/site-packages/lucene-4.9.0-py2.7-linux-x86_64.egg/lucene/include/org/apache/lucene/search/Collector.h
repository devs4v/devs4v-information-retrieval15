#ifndef org_apache_lucene_search_Collector_H
#define org_apache_lucene_search_Collector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
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

        class Collector : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_collect_39c7bd3c,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Collector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Collector(const Collector& obj) : ::java::lang::Object(obj) {}

          Collector();

          jboolean acceptsDocsOutOfOrder() const;
          void collect(jint) const;
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
        extern PyTypeObject PY_TYPE(Collector);

        class t_Collector {
        public:
          PyObject_HEAD
          Collector object;
          static PyObject *wrap_Object(const Collector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
