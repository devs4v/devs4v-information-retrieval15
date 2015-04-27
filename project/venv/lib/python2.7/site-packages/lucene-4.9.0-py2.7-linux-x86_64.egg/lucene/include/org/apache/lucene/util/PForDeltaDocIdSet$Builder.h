#ifndef org_apache_lucene_util_PForDeltaDocIdSet$Builder_H
#define org_apache_lucene_util_PForDeltaDocIdSet$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PForDeltaDocIdSet;
      }
      namespace search {
        class DocIdSetIterator;
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
      namespace util {

        class PForDeltaDocIdSet$Builder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_5450130c,
            mid_add_c0d9d1e3,
            mid_build_44738ac2,
            mid_setIndexInterval_c0d9d1e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PForDeltaDocIdSet$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PForDeltaDocIdSet$Builder(const PForDeltaDocIdSet$Builder& obj) : ::java::lang::Object(obj) {}

          PForDeltaDocIdSet$Builder();

          PForDeltaDocIdSet$Builder add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          PForDeltaDocIdSet$Builder add(jint) const;
          ::org::apache::lucene::util::PForDeltaDocIdSet build() const;
          PForDeltaDocIdSet$Builder setIndexInterval(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(PForDeltaDocIdSet$Builder);

        class t_PForDeltaDocIdSet$Builder {
        public:
          PyObject_HEAD
          PForDeltaDocIdSet$Builder object;
          static PyObject *wrap_Object(const PForDeltaDocIdSet$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
