#ifndef org_apache_lucene_facet_DrillDownQuery_H
#define org_apache_lucene_facet_DrillDownQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
      }
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class Filter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillDownQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_46ac0e90,
            mid_init$_82818c2d,
            mid_add_ee8b16d8,
            mid_add_ba45d66a,
            mid_add_5b69597d,
            mid_clone_477b643a,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_term_48584f7a,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillDownQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DrillDownQuery(const DrillDownQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &);
          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::Query &);

          void add(const ::java::lang::String &, const ::org::apache::lucene::search::Filter &) const;
          void add(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::Query &) const;
          DrillDownQuery clone() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static ::org::apache::lucene::index::Term term(const ::java::lang::String &, const ::java::lang::String &, const JArray< ::java::lang::String > &);
          ::java::lang::String toString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(DrillDownQuery);

        class t_DrillDownQuery {
        public:
          PyObject_HEAD
          DrillDownQuery object;
          static PyObject *wrap_Object(const DrillDownQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
