#ifndef org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H
#define org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H

#include "org/apache/lucene/search/spans/SpanMultiTermQueryWrapper$SpanRewriteMethod.h"

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
        namespace spans {

          class SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite : public ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod {
          public:
            enum {
              mid_init$_39c7bd3c,
              mid_equals_290588e2,
              mid_getSize_54c6a179,
              mid_hashCode_54c6a179,
              mid_rewrite_63657170,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite& obj) : ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {}

            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getSize() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite);

          class t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&, PyTypeObject *);
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
