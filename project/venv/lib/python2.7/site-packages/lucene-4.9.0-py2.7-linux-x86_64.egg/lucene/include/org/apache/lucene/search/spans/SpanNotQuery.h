#ifndef org_apache_lucene_search_spans_SpanNotQuery_H
#define org_apache_lucene_search_spans_SpanNotQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
        class Term;
        class TermContext;
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
      namespace search {
        namespace spans {

          class SpanNotQuery : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_c77562f2,
              mid_init$_2606b720,
              mid_init$_0c3ef6ba,
              mid_clone_4b6f9500,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_getExclude_d3aa0332,
              mid_getField_14c7b5c5,
              mid_getInclude_d3aa0332,
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

            explicit SpanNotQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanNotQuery(const SpanNotQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanNotQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::spans::SpanQuery &);
            SpanNotQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::spans::SpanQuery &, jint);
            SpanNotQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::spans::SpanQuery &, jint, jint);

            SpanNotQuery clone() const;
            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            ::org::apache::lucene::search::spans::SpanQuery getExclude() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getInclude() const;
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
          extern PyTypeObject PY_TYPE(SpanNotQuery);

          class t_SpanNotQuery {
          public:
            PyObject_HEAD
            SpanNotQuery object;
            static PyObject *wrap_Object(const SpanNotQuery&);
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
