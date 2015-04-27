#ifndef org_apache_lucene_search_spans_SpanTermQuery_H
#define org_apache_lucene_search_spans_SpanTermQuery_H

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
      }
      namespace search {
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

          class SpanTermQuery : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_7eca6a81,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_getField_14c7b5c5,
              mid_getSpans_f003cb44,
              mid_getTerm_0f71f314,
              mid_hashCode_54c6a179,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanTermQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanTermQuery(const SpanTermQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanTermQuery(const ::org::apache::lucene::index::Term &);

            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
            ::org::apache::lucene::index::Term getTerm() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(SpanTermQuery);

          class t_SpanTermQuery {
          public:
            PyObject_HEAD
            SpanTermQuery object;
            static PyObject *wrap_Object(const SpanTermQuery&);
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
