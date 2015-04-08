#ifndef org_apache_lucene_search_spans_SpanPositionCheckQuery_H
#define org_apache_lucene_search_spans_SpanPositionCheckQuery_H

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

          class SpanPositionCheckQuery : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_056c1897,
              mid_extractTerms_fb4f2b26,
              mid_getField_14c7b5c5,
              mid_getMatch_d3aa0332,
              mid_getSpans_f003cb44,
              mid_rewrite_7edcaa43,
              mid_acceptPosition_5342f73f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionCheckQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanPositionCheckQuery(const SpanPositionCheckQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanPositionCheckQuery(const ::org::apache::lucene::search::spans::SpanQuery &);

            void extractTerms(const ::java::util::Set &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getMatch() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
          extern PyTypeObject PY_TYPE(SpanPositionCheckQuery);

          class t_SpanPositionCheckQuery {
          public:
            PyObject_HEAD
            SpanPositionCheckQuery object;
            static PyObject *wrap_Object(const SpanPositionCheckQuery&);
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
