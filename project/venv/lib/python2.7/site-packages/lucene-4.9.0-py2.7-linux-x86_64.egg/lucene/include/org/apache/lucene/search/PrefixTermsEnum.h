#ifndef org_apache_lucene_search_PrefixTermsEnum_H
#define org_apache_lucene_search_PrefixTermsEnum_H

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

        class PrefixTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
        public:
          enum {
            mid_init$_acc8615c,
            mid_accept_30bc08e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PrefixTermsEnum(const PrefixTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

          PrefixTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::BytesRef &);
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
        extern PyTypeObject PY_TYPE(PrefixTermsEnum);

        class t_PrefixTermsEnum {
        public:
          PyObject_HEAD
          PrefixTermsEnum object;
          static PyObject *wrap_Object(const PrefixTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
