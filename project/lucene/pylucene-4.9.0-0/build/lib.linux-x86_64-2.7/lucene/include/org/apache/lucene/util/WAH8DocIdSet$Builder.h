#ifndef org_apache_lucene_util_WAH8DocIdSet$Builder_H
#define org_apache_lucene_util_WAH8DocIdSet$Builder_H

#include "org/apache/lucene/util/WAH8DocIdSet$WordBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class WAH8DocIdSet;
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

        class WAH8DocIdSet$Builder : public ::org::apache::lucene::util::WAH8DocIdSet$WordBuilder {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_f8a06644,
            mid_add_7ac30ded,
            mid_build_b0ef9fd4,
            mid_setIndexInterval_7ac30ded,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WAH8DocIdSet$Builder(jobject obj) : ::org::apache::lucene::util::WAH8DocIdSet$WordBuilder(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          WAH8DocIdSet$Builder(const WAH8DocIdSet$Builder& obj) : ::org::apache::lucene::util::WAH8DocIdSet$WordBuilder(obj) {}

          WAH8DocIdSet$Builder();

          WAH8DocIdSet$Builder add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          WAH8DocIdSet$Builder add(jint) const;
          ::org::apache::lucene::util::WAH8DocIdSet build() const;
          WAH8DocIdSet$Builder setIndexInterval(jint) const;
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
        extern PyTypeObject PY_TYPE(WAH8DocIdSet$Builder);

        class t_WAH8DocIdSet$Builder {
        public:
          PyObject_HEAD
          WAH8DocIdSet$Builder object;
          static PyObject *wrap_Object(const WAH8DocIdSet$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
