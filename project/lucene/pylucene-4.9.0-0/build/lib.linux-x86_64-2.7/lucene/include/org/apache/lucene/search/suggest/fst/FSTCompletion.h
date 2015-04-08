#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
        }
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class FSTCompletion$Completion;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class FSTCompletion : public ::java::lang::Object {
            public:
              enum {
                mid_init$_d454d65c,
                mid_init$_a36157b6,
                mid_getBucket_a8afc655,
                mid_getBucketCount_54c6a179,
                mid_getFST_917b3659,
                mid_lookup_560b361c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion(const FSTCompletion& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_BUCKETS;

              FSTCompletion(const ::org::apache::lucene::util::fst::FST &);
              FSTCompletion(const ::org::apache::lucene::util::fst::FST &, jboolean, jboolean);

              jint getBucket(const ::java::lang::CharSequence &) const;
              jint getBucketCount() const;
              ::org::apache::lucene::util::fst::FST getFST() const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
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
      namespace search {
        namespace suggest {
          namespace fst {
            extern PyTypeObject PY_TYPE(FSTCompletion);

            class t_FSTCompletion {
            public:
              PyObject_HEAD
              FSTCompletion object;
              static PyObject *wrap_Object(const FSTCompletion&);
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
