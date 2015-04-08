#ifndef org_apache_lucene_search_spans_SpanQuery_H
#define org_apache_lucene_search_spans_SpanQuery_H

#include "org/apache/lucene/search/Query.h"

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
      }
      namespace search {
        class IndexSearcher;
        class Weight;
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

          class SpanQuery : public ::org::apache::lucene::search::Query {
          public:
            enum {
              mid_init$_54c6a166,
              mid_createWeight_367763cb,
              mid_getField_14c7b5c5,
              mid_getSpans_f003cb44,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanQuery(const SpanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            SpanQuery();

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
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
          extern PyTypeObject PY_TYPE(SpanQuery);

          class t_SpanQuery {
          public:
            PyObject_HEAD
            SpanQuery object;
            static PyObject *wrap_Object(const SpanQuery&);
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
