#ifndef org_apache_lucene_search_TermStatistics_H
#define org_apache_lucene_search_TermStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermStatistics : public ::java::lang::Object {
        public:
          enum {
            mid_init$_b78af156,
            mid_docFreq_54c6a17a,
            mid_term_4ae19461,
            mid_totalTermFreq_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermStatistics(const TermStatistics& obj) : ::java::lang::Object(obj) {}

          TermStatistics(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

          jlong docFreq() const;
          ::org::apache::lucene::util::BytesRef term() const;
          jlong totalTermFreq() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(TermStatistics);

        class t_TermStatistics {
        public:
          PyObject_HEAD
          TermStatistics object;
          static PyObject *wrap_Object(const TermStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
