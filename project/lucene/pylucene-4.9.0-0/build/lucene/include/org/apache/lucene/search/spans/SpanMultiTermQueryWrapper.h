#ifndef org_apache_lucene_search_spans_SpanMultiTermQueryWrapper_H
#define org_apache_lucene_search_spans_SpanMultiTermQueryWrapper_H

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
          class SpanMultiTermQueryWrapper$SpanRewriteMethod;
          class Spans;
        }
        class MultiTermQuery;
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
  namespace util {
    class Map;
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

          class SpanMultiTermQueryWrapper : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_3bf60bd1,
              mid_equals_290588e2,
              mid_getField_14c7b5c5,
              mid_getRewriteMethod_5bc9fda5,
              mid_getSpans_f003cb44,
              mid_getWrappedQuery_97e3851a,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_setRewriteMethod_89abf2c4,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper(const SpanMultiTermQueryWrapper& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            static ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod *SCORING_SPAN_QUERY_REWRITE;

            SpanMultiTermQueryWrapper(const ::org::apache::lucene::search::MultiTermQuery &);

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod getRewriteMethod() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setRewriteMethod(const ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod &) const;
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
          extern PyTypeObject PY_TYPE(SpanMultiTermQueryWrapper);

          class t_SpanMultiTermQueryWrapper {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
