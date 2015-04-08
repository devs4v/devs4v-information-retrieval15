#ifndef org_apache_pylucene_search_spans_PythonSpans_H
#define org_apache_pylucene_search_spans_PythonSpans_H

#include "org/apache/lucene/search/spans/Spans.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace spans {

          class PythonSpans : public ::org::apache::lucene::search::spans::Spans {
          public:
            enum {
              mid_init$_54c6a166,
              mid_cost_54c6a17a,
              mid_doc_54c6a179,
              mid_end_54c6a179,
              mid_finalize_54c6a166,
              mid_getPayload_2d2d7de4,
              mid_isPayloadAvailable_54c6a16a,
              mid_next_54c6a16a,
              mid_pythonDecRef_54c6a166,
              mid_pythonExtension_54c6a17a,
              mid_pythonExtension_0ee6df2f,
              mid_skipTo_39c7bd30,
              mid_start_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSpans(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PythonSpans(const PythonSpans& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            PythonSpans();

            jlong cost() const;
            jint doc() const;
            jint end() const;
            void finalize() const;
            ::java::util::Collection getPayload() const;
            jboolean isPayloadAvailable() const;
            jboolean next() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jboolean skipTo(jint) const;
            jint start() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace spans {
          extern PyTypeObject PY_TYPE(PythonSpans);

          class t_PythonSpans {
          public:
            PyObject_HEAD
            PythonSpans object;
            static PyObject *wrap_Object(const PythonSpans&);
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
