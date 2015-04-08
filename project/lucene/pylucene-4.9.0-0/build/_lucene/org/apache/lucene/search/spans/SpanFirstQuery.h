#ifndef org_apache_lucene_search_spans_SpanFirstQuery_H
#define org_apache_lucene_search_spans_SpanFirstQuery_H

#include "org/apache/lucene/search/spans/SpanPositionRangeQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class SpanFirstQuery : public ::org::apache::lucene::search::spans::SpanPositionRangeQuery {
          public:
            enum {
              mid_init$_611c8717,
              mid_clone_cf87c9b3,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_toString_97a5258f,
              mid_acceptPosition_5342f73f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanFirstQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionRangeQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanFirstQuery(const SpanFirstQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionRangeQuery(obj) {}

            SpanFirstQuery(const ::org::apache::lucene::search::spans::SpanQuery &, jint);

            SpanFirstQuery clone() const;
            jboolean equals(const ::java::lang::Object &) const;
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
          extern PyTypeObject PY_TYPE(SpanFirstQuery);

          class t_SpanFirstQuery {
          public:
            PyObject_HEAD
            SpanFirstQuery object;
            static PyObject *wrap_Object(const SpanFirstQuery&);
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
