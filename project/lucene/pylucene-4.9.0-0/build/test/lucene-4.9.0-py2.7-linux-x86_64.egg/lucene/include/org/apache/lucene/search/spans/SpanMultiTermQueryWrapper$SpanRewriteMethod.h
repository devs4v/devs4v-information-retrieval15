#ifndef org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$SpanRewriteMethod_H
#define org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$SpanRewriteMethod_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class MultiTermQuery;
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
        namespace spans {

          class SpanMultiTermQueryWrapper$SpanRewriteMethod : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
          public:
            enum {
              mid_init$_54c6a166,
              mid_rewrite_63657170,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper$SpanRewriteMethod(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper$SpanRewriteMethod(const SpanMultiTermQueryWrapper$SpanRewriteMethod& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}

            SpanMultiTermQueryWrapper$SpanRewriteMethod();

            ::org::apache::lucene::search::spans::SpanQuery rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
          extern PyTypeObject PY_TYPE(SpanMultiTermQueryWrapper$SpanRewriteMethod);

          class t_SpanMultiTermQueryWrapper$SpanRewriteMethod {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper$SpanRewriteMethod object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper$SpanRewriteMethod *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$SpanRewriteMethod&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$SpanRewriteMethod&, PyTypeObject *);
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
