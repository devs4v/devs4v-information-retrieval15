#ifndef org_apache_lucene_search_spans_Spans_H
#define org_apache_lucene_search_spans_Spans_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
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

          class Spans : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_cost_54c6a17a,
              mid_doc_54c6a179,
              mid_end_54c6a179,
              mid_getPayload_2d2d7de4,
              mid_isPayloadAvailable_54c6a16a,
              mid_next_54c6a16a,
              mid_skipTo_39c7bd30,
              mid_start_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Spans(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Spans(const Spans& obj) : ::java::lang::Object(obj) {}

            Spans();

            jlong cost() const;
            jint doc() const;
            jint end() const;
            ::java::util::Collection getPayload() const;
            jboolean isPayloadAvailable() const;
            jboolean next() const;
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
    namespace lucene {
      namespace search {
        namespace spans {
          extern PyTypeObject PY_TYPE(Spans);

          class t_Spans {
          public:
            PyObject_HEAD
            Spans object;
            static PyObject *wrap_Object(const Spans&);
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
