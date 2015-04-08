#ifndef org_apache_lucene_search_spans_SpanNearPayloadCheckQuery_H
#define org_apache_lucene_search_spans_SpanNearPayloadCheckQuery_H

#include "org/apache/lucene/search/spans/SpanPositionCheckQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanNearQuery;
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

          class SpanNearPayloadCheckQuery : public ::org::apache::lucene::search::spans::SpanPositionCheckQuery {
          public:
            enum {
              mid_init$_cc218b3a,
              mid_clone_efae1086,
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

            explicit SpanNearPayloadCheckQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanNearPayloadCheckQuery(const SpanNearPayloadCheckQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {}

            SpanNearPayloadCheckQuery(const ::org::apache::lucene::search::spans::SpanNearQuery &, const ::java::util::Collection &);

            SpanNearPayloadCheckQuery clone() const;
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
          extern PyTypeObject PY_TYPE(SpanNearPayloadCheckQuery);

          class t_SpanNearPayloadCheckQuery {
          public:
            PyObject_HEAD
            SpanNearPayloadCheckQuery object;
            static PyObject *wrap_Object(const SpanNearPayloadCheckQuery&);
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
