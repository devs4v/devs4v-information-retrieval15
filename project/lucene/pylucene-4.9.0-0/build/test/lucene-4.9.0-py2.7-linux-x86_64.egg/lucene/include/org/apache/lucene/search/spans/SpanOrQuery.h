#ifndef org_apache_lucene_search_spans_SpanOrQuery_H
#define org_apache_lucene_search_spans_SpanOrQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class TermContext;
        class Term;
        class AtomicReaderContext;
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace spans {
          class Spans;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Object;
    class String;
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
        namespace spans {

          class SpanOrQuery : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_272f3877,
              mid_addClause_056c1897,
              mid_clone_4d61402f,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_getClauses_19569402,
              mid_getField_14c7b5c5,
              mid_getSpans_f003cb44,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanOrQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanOrQuery(const SpanOrQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanOrQuery(const JArray< ::org::apache::lucene::search::spans::SpanQuery > &);

            void addClause(const ::org::apache::lucene::search::spans::SpanQuery &) const;
            SpanOrQuery clone() const;
            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            JArray< ::org::apache::lucene::search::spans::SpanQuery > getClauses() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          extern PyTypeObject PY_TYPE(SpanOrQuery);

          class t_SpanOrQuery {
          public:
            PyObject_HEAD
            SpanOrQuery object;
            static PyObject *wrap_Object(const SpanOrQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
