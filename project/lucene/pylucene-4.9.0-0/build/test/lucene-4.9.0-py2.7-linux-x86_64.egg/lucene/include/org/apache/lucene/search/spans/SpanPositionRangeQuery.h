#ifndef org_apache_lucene_search_spans_SpanPositionRangeQuery_H
#define org_apache_lucene_search_spans_SpanPositionRangeQuery_H

#include "org/apache/lucene/search/spans/SpanPositionCheckQuery.h"

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

          class SpanPositionRangeQuery : public ::org::apache::lucene::search::spans::SpanPositionCheckQuery {
          public:
            enum {
              mid_init$_d606f0cb,
              mid_clone_718ddad5,
              mid_equals_290588e2,
              mid_getEnd_54c6a179,
              mid_getStart_54c6a179,
              mid_hashCode_54c6a179,
              mid_toString_97a5258f,
              mid_acceptPosition_5342f73f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionRangeQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanPositionRangeQuery(const SpanPositionRangeQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {}

            SpanPositionRangeQuery(const ::org::apache::lucene::search::spans::SpanQuery &, jint, jint);

            SpanPositionRangeQuery clone() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEnd() const;
            jint getStart() const;
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
          extern PyTypeObject PY_TYPE(SpanPositionRangeQuery);

          class t_SpanPositionRangeQuery {
          public:
            PyObject_HEAD
            SpanPositionRangeQuery object;
            static PyObject *wrap_Object(const SpanPositionRangeQuery&);
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
