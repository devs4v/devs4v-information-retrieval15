#ifndef org_apache_lucene_search_payloads_PayloadTermQuery_H
#define org_apache_lucene_search_payloads_PayloadTermQuery_H

#include "org/apache/lucene/search/spans/SpanTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class IndexSearcher;
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

          class PayloadTermQuery : public ::org::apache::lucene::search::spans::SpanTermQuery {
          public:
            enum {
              mid_init$_c933262d,
              mid_init$_dc8be042,
              mid_createWeight_367763cb,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadTermQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanTermQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadTermQuery(const PayloadTermQuery& obj) : ::org::apache::lucene::search::spans::SpanTermQuery(obj) {}

            PayloadTermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::payloads::PayloadFunction &);
            PayloadTermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::payloads::PayloadFunction &, jboolean);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(PayloadTermQuery);

          class t_PayloadTermQuery {
          public:
            PyObject_HEAD
            PayloadTermQuery object;
            static PyObject *wrap_Object(const PayloadTermQuery&);
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
