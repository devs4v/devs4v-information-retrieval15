#ifndef org_apache_lucene_search_Weight_H
#define org_apache_lucene_search_Weight_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Query;
        class Explanation;
        class Scorer;
        class BulkScorer;
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

        class Weight : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_bulkScorer_33d2aa29,
            mid_explain_6ad94adc,
            mid_getQuery_97e3851a,
            mid_getValueForNormalization_54c6a176,
            mid_normalize_f1b0c004,
            mid_scorer_3869ad24,
            mid_scoresDocsOutOfOrder_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Weight(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Weight(const Weight& obj) : ::java::lang::Object(obj) {}

          Weight();

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::AtomicReaderContext &, jboolean, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::AtomicReaderContext &, jint) const;
          ::org::apache::lucene::search::Query getQuery() const;
          jfloat getValueForNormalization() const;
          void normalize(jfloat, jfloat) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          jboolean scoresDocsOutOfOrder() const;
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
        extern PyTypeObject PY_TYPE(Weight);

        class t_Weight {
        public:
          PyObject_HEAD
          Weight object;
          static PyObject *wrap_Object(const Weight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
