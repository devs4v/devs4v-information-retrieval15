#ifndef org_apache_lucene_search_ConstantScoreAutoRewrite_H
#define org_apache_lucene_search_ConstantScoreAutoRewrite_H

#include "org/apache/lucene/search/TermCollectingRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        class BooleanQuery;
        class MultiTermQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

        class ConstantScoreAutoRewrite : public ::org::apache::lucene::search::TermCollectingRewrite {
        public:
          enum {
            mid_equals_290588e2,
            mid_getDocCountPercent_54c6a174,
            mid_getTermCountCutoff_54c6a179,
            mid_hashCode_54c6a179,
            mid_rewrite_925c5bbc,
            mid_setDocCountPercent_5d1c7645,
            mid_setTermCountCutoff_39c7bd3c,
            mid_addClause_82a56efb,
            mid_getTopLevelQuery_6f9339e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreAutoRewrite(jobject obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreAutoRewrite(const ConstantScoreAutoRewrite& obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {}

          static jdouble DEFAULT_DOC_COUNT_PERCENT;
          static jint DEFAULT_TERM_COUNT_CUTOFF;

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getDocCountPercent() const;
          jint getTermCountCutoff() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
          void setDocCountPercent(jdouble) const;
          void setTermCountCutoff(jint) const;
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
        extern PyTypeObject PY_TYPE(ConstantScoreAutoRewrite);

        class t_ConstantScoreAutoRewrite {
        public:
          PyObject_HEAD
          ConstantScoreAutoRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ConstantScoreAutoRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ConstantScoreAutoRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ConstantScoreAutoRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
