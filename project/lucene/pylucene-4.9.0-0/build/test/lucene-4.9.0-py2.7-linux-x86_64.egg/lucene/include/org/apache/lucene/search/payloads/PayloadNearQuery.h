#ifndef org_apache_lucene_search_payloads_PayloadNearQuery_H
#define org_apache_lucene_search_payloads_PayloadNearQuery_H

#include "org/apache/lucene/search/spans/SpanNearQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace spans {
          class SpanQuery;
        }
        namespace payloads {
          class PayloadFunction;
        }
        class Weight;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace payloads {

          class PayloadNearQuery : public ::org::apache::lucene::search::spans::SpanNearQuery {
          public:
            enum {
              mid_init$_4e7e9f44,
              mid_init$_ba8911fe,
              mid_clone_95fde422,
              mid_createWeight_367763cb,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadNearQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanNearQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadNearQuery(const PayloadNearQuery& obj) : ::org::apache::lucene::search::spans::SpanNearQuery(obj) {}

            PayloadNearQuery(const JArray< ::org::apache::lucene::search::spans::SpanQuery > &, jint, jboolean);
            PayloadNearQuery(const JArray< ::org::apache::lucene::search::spans::SpanQuery > &, jint, jboolean, const ::org::apache::lucene::search::payloads::PayloadFunction &);

            PayloadNearQuery clone() const;
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        namespace payloads {
          extern PyTypeObject PY_TYPE(PayloadNearQuery);

          class t_PayloadNearQuery {
          public:
            PyObject_HEAD
            PayloadNearQuery object;
            static PyObject *wrap_Object(const PayloadNearQuery&);
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
