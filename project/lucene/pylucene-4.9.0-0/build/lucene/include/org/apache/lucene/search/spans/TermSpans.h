#ifndef org_apache_lucene_search_spans_TermSpans_H
#define org_apache_lucene_search_spans_TermSpans_H

#include "org/apache/lucene/search/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class DocsAndPositionsEnum;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
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

          class TermSpans : public ::org::apache::lucene::search::spans::Spans {
          public:
            enum {
              mid_init$_33ebef71,
              mid_cost_54c6a17a,
              mid_doc_54c6a179,
              mid_end_54c6a179,
              mid_getPayload_2d2d7de4,
              mid_getPostings_548e5d87,
              mid_isPayloadAvailable_54c6a16a,
              mid_next_54c6a16a,
              mid_skipTo_39c7bd30,
              mid_start_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermSpans(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TermSpans(const TermSpans& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            static TermSpans *EMPTY_TERM_SPANS;

            TermSpans(const ::org::apache::lucene::index::DocsAndPositionsEnum &, const ::org::apache::lucene::index::Term &);

            jlong cost() const;
            jint doc() const;
            jint end() const;
            ::java::util::Collection getPayload() const;
            ::org::apache::lucene::index::DocsAndPositionsEnum getPostings() const;
            jboolean isPayloadAvailable() const;
            jboolean next() const;
            jboolean skipTo(jint) const;
            jint start() const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(TermSpans);

          class t_TermSpans {
          public:
            PyObject_HEAD
            TermSpans object;
            static PyObject *wrap_Object(const TermSpans&);
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
