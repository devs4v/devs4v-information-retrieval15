#ifndef org_apache_lucene_search_spans_SpanPayloadCheckQuery_H
#define org_apache_lucene_search_spans_SpanPayloadCheckQuery_H

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
  namespace util {
    class Collection;
  }
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

          class SpanPayloadCheckQuery : public ::org::apache::lucene::search::spans::SpanPositionCheckQuery {
          public:
            enum {
              mid_init$_8621bfa8,
              mid_clone_5574a424,
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

            explicit SpanPayloadCheckQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery(const SpanPayloadCheckQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {}

            SpanPayloadCheckQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::java::util::Collection &);

            SpanPayloadCheckQuery clone() const;
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
          extern PyTypeObject PY_TYPE(SpanPayloadCheckQuery);

          class t_SpanPayloadCheckQuery {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery&);
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
