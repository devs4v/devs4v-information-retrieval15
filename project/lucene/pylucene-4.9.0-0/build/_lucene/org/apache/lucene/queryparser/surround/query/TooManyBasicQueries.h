#ifndef org_apache_lucene_queryparser_surround_query_TooManyBasicQueries_H
#define org_apache_lucene_queryparser_surround_query_TooManyBasicQueries_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class TooManyBasicQueries : public ::java::io::IOException {
            public:
              enum {
                mid_init$_39c7bd3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TooManyBasicQueries(jobject obj) : ::java::io::IOException(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TooManyBasicQueries(const TooManyBasicQueries& obj) : ::java::io::IOException(obj) {}

              TooManyBasicQueries(jint);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyTypeObject PY_TYPE(TooManyBasicQueries);

            class t_TooManyBasicQueries {
            public:
              PyObject_HEAD
              TooManyBasicQueries object;
              static PyObject *wrap_Object(const TooManyBasicQueries&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
