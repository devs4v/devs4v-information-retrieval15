#ifndef org_apache_lucene_search_TermRangeTermsEnum_H
#define org_apache_lucene_search_TermRangeTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
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

        class TermRangeTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
        public:
          enum {
            mid_init$_cf65bdfc,
            mid_accept_30bc08e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermRangeTermsEnum(const TermRangeTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

          TermRangeTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(TermRangeTermsEnum);

        class t_TermRangeTermsEnum {
        public:
          PyObject_HEAD
          TermRangeTermsEnum object;
          static PyObject *wrap_Object(const TermRangeTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
